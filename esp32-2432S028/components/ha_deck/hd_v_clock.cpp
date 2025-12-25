#include "hd_v_clock.h"

namespace esphome {
namespace ha_deck {

void HdVClock::set_text(std::string text) {
    text_ = text;
}

void HdVClock::set_icon(std::string icon) {
    icon_ = icon;
}

void HdVClock::set_unit(std::string unit) {
    unit_ = unit;
}

void HdVClock::set_value(esphome::ESPTime value) {
    set_value_(value);
}

void HdVClock::set_value_(esphome::ESPTime value) {
    value_ = value;
    
    if (!lv_main_) {
        return;
    }
//    std::string time = value_.strftime("%H:%M");
    std::string time = value_.strftime("%H:%M");
    if (time != time_) {
        time_ = time;
        lv_label_set_text(lv_value_, time.c_str());
    }

    std::string date = value_.strftime("%b %d, %Y");
    if (date != date_) {
        date_ = date;
        lv_label_set_text(text_lbl, date.c_str());
    }
}

void HdVClock::render_() {
    lv_main_ = lv_obj_create(lv_scr_act());
    lv_obj_add_flag(lv_main_, LV_OBJ_FLAG_CLICKABLE);

    lv_obj_add_event_cb(lv_main_, HdVClock::on_click_, LV_EVENT_SHORT_CLICKED, this);

    int32_t card_height = h_ > 0 ? h_ : 96;
    int32_t card_width = w_ > 0 ? w_ : 110;

    lv_obj_set_x(lv_main_, x_);
    lv_obj_set_y(lv_main_, y_);
    lv_obj_set_height(lv_main_, card_height);
    lv_obj_set_width(lv_main_, card_width);
    lv_obj_clear_flag(lv_main_, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(lv_main_, 5, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(lv_main_, lv_color_hex(0x999999), (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_main_, 25, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_main_, 1, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(lv_main_, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(lv_main_, lv_color_hex(0x000000), (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(lv_main_, 255, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(lv_main_, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_main_, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_main_, 2, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_main_, 2, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    auto value_container = lv_obj_create(lv_main_);
    lv_obj_clear_flag(value_container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_width(value_container, lv_pct(100));
    lv_obj_set_height(value_container, card_height);
    
    // lv_obj_set_style_border_width(value_container, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_border_color(value_container, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_align(value_container, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(value_container, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(value_container, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(value_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(value_container, lv_color_hex(0xFFFFFF), (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(value_container, 3, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    lv_obj_set_style_pad_row(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(value_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    lv_value_ = lv_label_create(value_container);
    lv_obj_set_width(lv_value_, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_value_, LV_SIZE_CONTENT);
    lv_obj_set_x(lv_value_, 0);
    lv_obj_set_y(lv_value_, 0);
    lv_obj_set_align(lv_value_, LV_ALIGN_CENTER);

    lv_label_set_text(lv_value_, "--:--");
    lv_obj_set_style_text_color(lv_value_, lv_color_hex(0xFFFFFF), (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(lv_value_, 255, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
//    lv_obj_set_style_text_font(lv_value_, &Material48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(lv_value_, &RobotoMono48, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(lv_value_, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(lv_value_, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_value_, 1, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(lv_value_, 2, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    auto text_container = lv_obj_create(lv_main_);
    lv_obj_clear_flag(text_container, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_x(text_container, 0);
    lv_obj_set_y(text_container, 0);
    lv_obj_set_width(text_container, lv_pct(100));
    lv_obj_set_height(text_container, 16);
    lv_obj_set_align(text_container, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(text_container, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(text_container, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(text_container, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_radius(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(text_container, lv_color_hex(0xFFFFFF), (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(text_container, 0, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);

    text_lbl = lv_label_create(text_container);
    lv_obj_set_width(text_lbl, LV_SIZE_CONTENT);
    lv_obj_set_height(text_lbl, LV_SIZE_CONTENT);
    lv_obj_set_align(text_lbl, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(text_lbl, "--");
    lv_obj_set_style_text_color(text_lbl, lv_color_hex(0xFFFFFF), (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(text_lbl, 255, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);
//    lv_obj_set_style_text_font(text_lbl, &Font16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(text_lbl, &RobotoReg14, (lv_style_selector_t)LV_PART_MAIN | (lv_style_selector_t)LV_STATE_DEFAULT);


    if (enabled_) {
        lv_obj_clear_state(lv_main_, LV_STATE_DISABLED);
    } else {
        lv_obj_add_state(lv_main_, LV_STATE_DISABLED);
    }
}

void HdVClock::destroy_() {
    lv_obj_del(lv_main_);
    lv_main_ = nullptr;
}

void HdVClock::update_() {
    if (this->value_fn_) {
        auto s = this->value_fn_();
        this->set_value_(s.value());
//        if (s.has_value() && s.value() != this->value_)
//            this->set_value_(s.value());
    }
}

void HdVClock::set_visible_(bool visible) {
    if (!lv_main_)
        return;
    
    if (visible) {
        lv_obj_clear_flag(lv_main_, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(lv_main_, LV_OBJ_FLAG_HIDDEN);
    }
}

void HdVClock::set_enabled_(bool enabled) {
    if (!lv_main_)
        return;
    
    if (enabled) {
        lv_obj_clear_state(lv_main_, LV_STATE_DISABLED);
    } else {
        lv_obj_add_state(lv_main_, LV_STATE_DISABLED);
    }
}

void HdVClock::add_value_lambda(std::function<optional<esphome::ESPTime>()> &&f) {
    this->value_fn_ = f;
}

void HdVClock::add_on_click_callback(std::function<void()> &&callback) {
    this->click_callback_.add(std::move(callback));
}

void HdVClock::on_click_(lv_event_t *e) {
    auto obj = (HdVClock*)lv_event_get_user_data(e);
    obj->click_callback_.call();
}

}  // namespace ha_deck
}  // namespace esphome