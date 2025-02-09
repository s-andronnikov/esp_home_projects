import esphome.codegen as cg
import esphome.config_validation as cv
from esphome import automation
from esphome.automation import maybe_simple_id
from esphome.const import (
    CONF_ID,
    CONF_TRIGGER_ID,
)

from .ha_deck import ha_deck_ns, HaDeckWidget

HdTempHum = ha_deck_ns.class_("HdTempHum", HaDeckWidget)
ClickAction = ha_deck_ns.class_("ClickAction", automation.Action)

TempHumClickTrigger = ha_deck_ns.class_(
    "HdTempHumClickTrigger", automation.Trigger.template()
)

CONF_TITLE = "title"
CONF_TEMPERATURE = "temperature"
CONF_HUMIDITY = "humidity"
CONF_BATTERY_LEVEL = "battery_level"
CONF_ON_CLICK = "on_click"

TEMP_HUM_CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_ID): cv.declare_id(HdTempHum),
        cv.Required(CONF_TITLE): cv.string,
        cv.Optional(CONF_TEMPERATURE): cv.returning_lambda,
        cv.Optional(CONF_HUMIDITY): cv.returning_lambda,
        cv.Optional(CONF_BATTERY_LEVEL): cv.returning_lambda,
        cv.Optional(CONF_ON_CLICK): automation.validate_automation(
            {
                cv.GenerateID(CONF_TRIGGER_ID): cv.declare_id(TempHumClickTrigger),
            }
        ),
    }
)

async def build_temp_hum(var, config):
    cg.add(var.set_title(config[CONF_TITLE]))

    if CONF_TEMPERATURE in config:
        val = await cg.process_lambda(
                config[CONF_TEMPERATURE], [], return_type=cg.optional.template(cg.std_string)
            )
        cg.add(var.add_temperature_lambda(val))

    if CONF_HUMIDITY in config:
        val = await cg.process_lambda(
                config[CONF_HUMIDITY], [], return_type=cg.optional.template(cg.std_string)
            )
        cg.add(var.add_humidity_lambda(val))

    if CONF_BATTERY_LEVEL in config:
        val = await cg.process_lambda(
                config[CONF_BATTERY_LEVEL], [], return_type=cg.optional.template(int)
            )
        cg.add(var.add_battery_level_lambda(val))

    for conf in config.get(CONF_ON_CLICK, []):
        trigger = cg.new_Pvariable(conf[CONF_TRIGGER_ID], var)
        await automation.build_automation(trigger, [], conf)

    return var