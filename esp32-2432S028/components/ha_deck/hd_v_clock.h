#pragma once

#include "ha_deck_widget.h"
#include "esphome/core/time.h"

//LV_FONT_DECLARE(lv_font_montserrat_12);
LV_FONT_DECLARE(RobotoMono48);
LV_FONT_DECLARE(RobotoReg14);

namespace esphome {
namespace ha_deck {

class HdVClock : public HaDeckWidget
{
public:
    void set_text(std::string text);
    void set_icon(std::string icon);
    void set_unit(std::string unit);
    void set_value(esphome::ESPTime value);

    void add_value_lambda(std::function<optional<esphome::ESPTime>()> &&f);
    void add_on_click_callback(std::function<void()> &&callback);
protected:
    void render_();
    void destroy_();
    void update_();
    void set_visible_(bool visible);
    void set_enabled_(bool enabled);
    void set_value_(esphome::ESPTime value);
private:
    static void on_click_(lv_event_t *e);

    const char *TAG = "HD_V_CLOCK";
    std::string text_;
    std::string icon_;
    std::string unit_;
    esphome::ESPTime value_;
    std::string time_;
    std::string date_;


    lv_obj_t *lv_main_;
    lv_obj_t *lv_value_;
    lv_obj_t *text_lbl;

    std::function<optional<esphome::ESPTime>()> value_fn_ = nullptr;
    CallbackManager<void()> click_callback_{};
};

}  // namespace ha_deck
}  // namespace esphome