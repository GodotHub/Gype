#include <godot_cpp/classes/editor_spin_slider.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorSpinSlider() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<EditorSpinSlider>("EditorSpinSlider")
            .constructor<>()
            .base<Range>()
            .property<static_cast<String(EditorSpinSlider::*)()const>(&EditorSpinSlider::get_label),static_cast<void(EditorSpinSlider::*)(const String &)>(&EditorSpinSlider::set_label)>("label")
            .property<static_cast<String(EditorSpinSlider::*)()const>(&EditorSpinSlider::get_suffix),static_cast<void(EditorSpinSlider::*)(const String &)>(&EditorSpinSlider::set_suffix)>("suffix")
            .property<static_cast<bool(EditorSpinSlider::*)()const>(&EditorSpinSlider::is_read_only),static_cast<void(EditorSpinSlider::*)(bool)>(&EditorSpinSlider::set_read_only)>("read_only")
            .property<static_cast<bool(EditorSpinSlider::*)()const>(&EditorSpinSlider::is_flat),static_cast<void(EditorSpinSlider::*)(bool)>(&EditorSpinSlider::set_flat)>("flat")
            .property<static_cast<bool(EditorSpinSlider::*)()const>(&EditorSpinSlider::is_hiding_slider),static_cast<void(EditorSpinSlider::*)(bool)>(&EditorSpinSlider::set_hide_slider)>("hide_slider")
;}