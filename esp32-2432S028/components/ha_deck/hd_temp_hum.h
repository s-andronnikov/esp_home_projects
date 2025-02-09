#pragma once

#include "ha_deck_widget.h"

namespace esphome {
namespace ha_deck {

class HdTempHum : public HaDeckWidget
{
public:
    void set_title(std::string title);
    void set_temperature(std::string temperature);
    void set_humidity(std::string humidity);
    void set_battery_level(int battery_level);
    void add_temperature_lambda(std::function<optional<std::string>()> &&f);
    void add_humidity_lambda(std::function<optional<std::string>()> &&f);
    void add_battery_level_lambda(std::function<optional<int>()> &&f);
    void add_on_click_callback(std::function<void()> &&callback);

protected:
    void render_() override;
    void destroy_() override;
    void update_() override;
    void set_visible_(bool visible) override;
    void set_enabled_(bool enabled) override;
    void set_temperature_(std::string temperature);
    void set_humidity_(std::string humidity);
    void set_battery_level_(int battery_level);

private:
    static void on_click_(lv_event_t *e);
    std::string format_label(const char *format, ...);

    const char *TAG = "HD_TEMP_HUM";
    std::string title_;
    std::string temperature_ = "";
    std::string humidity_ = "";
    int battery_level_ = 0;

    lv_obj_t *lv_main_ = nullptr;
    lv_obj_t *lv_title_ = nullptr;
    lv_obj_t *lv_temp_ = nullptr;
    lv_obj_t *lv_humidity_ = nullptr;
    lv_obj_t *lv_battery_ = nullptr;

    std::function<optional<std::string>()> temperature_fn_ = nullptr;
    std::function<optional<std::string>()> humidity_fn_ = nullptr;
    std::function<optional<int>()> battery_level_fn_ = nullptr;

    CallbackManager<void()> click_callback_{};
};

}  // namespace ha_deck
}  // namespace esphome