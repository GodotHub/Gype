#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/label_settings.hpp>

using namespace godot;

void register_classes_LabelSettings() {
    qjs::Context::Module &_module = _General;
    _module.class_<LabelSettings>("LabelSettings")
           .constructor<>()
           .property<LabelSettings::get_line_spacing, LabelSettings::set_line_spacing>("line_spacing")
           .property<LabelSettings::get_font, LabelSettings::set_font>("font")
           .property<LabelSettings::get_font_size, LabelSettings::set_font_size>("font_size")
           .property<LabelSettings::get_font_color, LabelSettings::set_font_color>("font_color")
           .property<LabelSettings::get_outline_size, LabelSettings::set_outline_size>("outline_size")
           .property<LabelSettings::get_outline_color, LabelSettings::set_outline_color>("outline_color")
           .property<LabelSettings::get_shadow_size, LabelSettings::set_shadow_size>("shadow_size")
           .property<LabelSettings::get_shadow_color, LabelSettings::set_shadow_color>("shadow_color")
           .property<LabelSettings::get_shadow_offset, LabelSettings::set_shadow_offset>("shadow_offset")
;}