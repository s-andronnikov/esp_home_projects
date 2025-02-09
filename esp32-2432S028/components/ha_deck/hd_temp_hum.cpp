#include "hd_temp_hum.h"
#include "esphome/core/log.h"

namespace esphome {
namespace ha_deck {

void HdTempHum::set_title(std::string title) {
    title_ = std::move(title);
    if (lv_title_) {
        lv_label_set_text(lv_title_, title_.c_str());
    }
}

void HdTempHum::set_temperature(std::string temperature) {
    set_temperature_(temperature);
}

void HdTempHum::set_temperature_(std::string temperature) {
    temperature_ = temperature;

    // ESP_LOGD(this->TAG, "set_temperature_1: %s", temperature_.c_str());

    if (!lv_main_)
        return;

    if (lv_temp_) {
        lv_label_set_text(lv_temp_, temperature_.c_str());
    }
}

void HdTempHum::set_humidity(std::string humidity) {
    set_humidity_(humidity);
}

void HdTempHum::set_humidity_(std::string humidity) {
    humidity_ = humidity;

    // ESP_LOGD(this->TAG, "set_humidity_: %s", humidity_.c_str());

    if (!lv_main_)
        return;

    if (lv_humidity_) {
        lv_label_set_text(lv_humidity_, humidity_.c_str());
    }
}

void HdTempHum::set_battery_level(int battery_level) {
    set_battery_level_(battery_level);
}

void HdTempHum::set_battery_level_(int battery_level) {
    battery_level_ = battery_level;

    if (!lv_main_ || !lv_battery_)
        return;

    const char *symbol = LV_SYMBOL_BATTERY_EMPTY;
    if (battery_level_ >= 90) {
        symbol = LV_SYMBOL_BATTERY_FULL;
    } else if (battery_level_ >= 75) {
        symbol = LV_SYMBOL_BATTERY_3;
    } else if (battery_level_ >= 50) {
        symbol = LV_SYMBOL_BATTERY_2;
    } else if (battery_level_ >= 25) {
        symbol = LV_SYMBOL_BATTERY_1;
    } else {
        symbol = LV_SYMBOL_BATTERY_EMPTY;
    }

    lv_label_set_text(lv_battery_, symbol);
}

void HdTempHum::render_() {

    int32_t card_height = h_ > 0 ? h_ : 96;
    int32_t card_width = w_ > 0 ? w_ : 110;

    lv_main_ = lv_obj_create(lv_scr_act());
    lv_obj_set_size(lv_main_, card_width, card_height);
    lv_obj_set_pos(lv_main_, x_, y_);
    lv_obj_set_style_border_width(lv_main_, 0, LV_PART_MAIN);
    lv_obj_clear_flag(lv_main_, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_pad_top(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_pad_left(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_pad_right(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    int32_t top_pos_y = 0;


    lv_title_ = lv_label_create(lv_main_);
    lv_label_set_text(lv_title_, title_.c_str());
    lv_obj_set_size(lv_title_, lv_pct(100), 12);
    lv_obj_align(lv_title_, LV_ALIGN_OUT_LEFT_TOP, 0, -5);
    lv_obj_set_style_text_font(lv_title_, &Font10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(lv_title_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_title_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_title_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_title_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_title_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // lv_obj_set_style_border_width(lv_title_, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(lv_title_, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);


    lv_temp_ = lv_label_create(lv_main_);
    lv_label_set_text(lv_temp_, temperature_.c_str());
    lv_obj_align(lv_temp_, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_obj_set_pos(lv_temp_, 0, 10);
    lv_obj_set_size(lv_temp_, lv_pct(100), 28);
    lv_obj_set_style_text_font(lv_temp_, &Font24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_width(lv_temp_, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(lv_temp_, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_humidity_ = lv_label_create(lv_main_);
    lv_label_set_text(lv_humidity_, humidity_.c_str());
    lv_obj_align(lv_humidity_, LV_ALIGN_BOTTOM_LEFT, 0, 0);
    lv_obj_set_pos(lv_humidity_, 0, 2);
    lv_obj_set_size(lv_humidity_, lv_pct(70), 22);
    lv_obj_set_style_text_font(lv_humidity_, &Font20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_width(lv_humidity_, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(lv_humidity_, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_battery_ = lv_label_create(lv_main_);
    lv_label_set_text(lv_battery_, "");
    lv_obj_align(lv_battery_, LV_ALIGN_BOTTOM_RIGHT, -5, 0);
    // lv_obj_set_pos(lv_battery_, lv_pct(50), 2);
    // lv_obj_set_size(lv_battery_, lv_pct(50), 26);
    // lv_obj_set_style_text_font(lv_battery_, &Material24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_battery_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_battery_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_battery_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_battery_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(lv_main_, HdTempHum::on_click_, LV_EVENT_CLICKED, this);

    if (enabled_) {
        lv_obj_clear_state(lv_main_, LV_STATE_DISABLED);
    } else {
        lv_obj_add_state(lv_main_, LV_STATE_DISABLED);
    }
}

void HdTempHum::destroy_() {
    if (lv_main_) {
        lv_obj_del(lv_main_);
        lv_main_ = nullptr;
    }
}

void HdTempHum::update_() {
    if (this->temperature_fn_) {
        auto s_temp = this->temperature_fn_();
        if (s_temp.has_value() && s_temp.value() != this->temperature_)
            this->set_temperature_(s_temp.value());
    }
    if (this->humidity_fn_) {
        auto s_hum = this->humidity_fn_();
        if (s_hum.has_value() && s_hum.value() != this->humidity_)
            this->set_humidity_(s_hum.value());
    }
    if (this->battery_level_fn_) {
        auto s_batt = this->battery_level_fn_();
        if (s_batt.has_value() && s_batt.value() != this->battery_level_)
            this->set_battery_level_(s_batt.value());
    }
}

void HdTempHum::set_visible_(bool visible) {
    if (!lv_main_)
        return;
    
    if (visible) {
        lv_obj_clear_flag(lv_main_, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(lv_main_, LV_OBJ_FLAG_HIDDEN);
    }
}

void HdTempHum::set_enabled_(bool enabled) {
    if (!lv_main_)
        return;
    
    if (enabled) {
        lv_obj_clear_state(lv_main_, LV_STATE_DISABLED);
    } else {
        lv_obj_add_state(lv_main_, LV_STATE_DISABLED);
    }
}

void HdTempHum::add_temperature_lambda(std::function<optional<std::string>()> &&f) {
    this->temperature_fn_ = f;
}

void HdTempHum::add_humidity_lambda(std::function<optional<std::string>()> &&f) {
    this->humidity_fn_ = f;
}

void HdTempHum::add_battery_level_lambda(std::function<optional<int>()> &&f) {
    this->battery_level_fn_ = f;
}

void HdTempHum::add_on_click_callback(std::function<void()> &&callback) {
    this->click_callback_.add(std::move(callback));
}

void HdTempHum::on_click_(lv_event_t *e) {
    auto obj = (HdTempHum*)lv_event_get_user_data(e);
    obj->click_callback_.call();
}

}  // namespace ha_deck
}  // namespace esphome
