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

    ESP_LOGD(this->TAG, "set_temperature_1: %s", temperature_.c_str());

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

    ESP_LOGD(this->TAG, "set_humidity_: %s", humidity_.c_str());

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

    ESP_LOGD(this->TAG, "set_battery_level_: %d", battery_level_);

    if (!lv_main_)
        return;

    if (lv_battery_ and battery_level_ > 0) {
        ESP_LOGD(this->TAG, "set_value: %d", battery_level_);
        lv_arc_set_value(lv_battery_, battery_level_);
    }
}

void HdTempHum::render_() {
    lv_main_ = lv_obj_create(lv_scr_act());
    lv_obj_add_flag(lv_main_, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(lv_main_, HdTempHum::on_click_, LV_EVENT_CLICKED, this);

    int32_t card_height = h_ > 0 ? h_ : 96;
    int32_t card_width = w_ > 0 ? w_ : 110;

    lv_obj_set_x(lv_main_, x_);
    lv_obj_set_y(lv_main_, y_);
    lv_obj_set_height(lv_main_, card_height);
    lv_obj_set_width(lv_main_, card_width);
    lv_obj_clear_flag(lv_main_, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(lv_main_, lv_color_hex(0x999999), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_main_, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_main_, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(lv_main_, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(lv_main_, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(lv_main_, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_main_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_main_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_main_, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    auto value_container = lv_obj_create(lv_main_);
    lv_obj_clear_flag(value_container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_width(value_container, lv_pct(100));
    lv_obj_set_height(value_container, !title_.empty() ? card_height * 0.8 : card_height * 0.95);
    
    // lv_obj_set_style_border_width(value_container, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(value_container, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_align(value_container, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(value_container, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(value_container, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(value_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(value_container, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    if (title_.empty()) {    
        lv_obj_set_style_pad_left(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_right(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_top(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_bottom(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    } else {
        lv_obj_set_style_pad_top(value_container, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    
    lv_obj_set_style_pad_row(value_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(value_container, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_temp_ = lv_label_create(value_container);
    lv_obj_set_width(lv_temp_, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_temp_, LV_SIZE_CONTENT/2);
    lv_obj_set_x(lv_temp_, 0);
    lv_obj_set_y(lv_temp_, 0);
    lv_obj_set_align(lv_temp_, LV_ALIGN_LEFT_MID);

    // lv_label_set_text_fmt(lv_temp_, "%.1f°C", temperature_);
    lv_label_set_text(lv_temp_, "--");
    lv_obj_set_style_text_color(lv_temp_, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(lv_temp_, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(lv_temp_, &Font24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_temp_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_humidity_ = lv_label_create(value_container);
    lv_obj_set_width(lv_humidity_, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_humidity_, LV_SIZE_CONTENT/2);
    lv_obj_set_x(lv_humidity_, 0);
    lv_obj_set_y(lv_humidity_, LV_SIZE_CONTENT/2);
    lv_obj_set_align(lv_humidity_, LV_ALIGN_LEFT_MID);

    // lv_label_set_text_fmt(lv_humidity_, "%.1f%%", humidity_);
    lv_label_set_text(lv_humidity_, "--");
    lv_obj_set_style_text_color(lv_humidity_, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(lv_humidity_, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(lv_humidity_, &Font16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_humidity_, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    auto text_container = lv_obj_create(lv_main_);
    lv_obj_clear_flag(text_container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_x(text_container, 0);
    lv_obj_set_y(text_container, 1);
    lv_obj_set_width(text_container, lv_pct(100));
    lv_obj_set_height(text_container, 12);
    lv_obj_set_align(text_container, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(text_container, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(text_container, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(text_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_radius(text_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(text_container, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(text_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(text_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(text_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(text_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(text_container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(text_container, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(text_container, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    if (!title_.empty())
    {
        lv_title_ = lv_label_create(text_container);
        lv_obj_set_width(lv_title_, LV_SIZE_CONTENT);
        lv_obj_set_height(lv_title_, card_height * 0.2);
        lv_obj_set_align(lv_title_, LV_ALIGN_BOTTOM_MID);
        lv_label_set_text(lv_title_, title_.c_str());
        lv_obj_set_style_text_color(lv_title_, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(lv_title_, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(lv_title_, &Font10, LV_PART_MAIN | LV_STATE_DEFAULT);
    }

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
