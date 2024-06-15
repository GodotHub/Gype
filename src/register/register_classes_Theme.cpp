#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Theme() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Theme>("Theme")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(Theme::*)()const>(&Theme::get_default_base_scale),static_cast<void(Theme::*)(double)>(&Theme::set_default_base_scale)>("default_base_scale")
            .property<static_cast<Ref<Font>(Theme::*)()const>(&Theme::get_default_font),static_cast<void(Theme::*)(const Ref<Font> &)>(&Theme::set_default_font)>("default_font")
            .property<static_cast<int32_t(Theme::*)()const>(&Theme::get_default_font_size),static_cast<void(Theme::*)(int32_t)>(&Theme::set_default_font_size)>("default_font_size")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const Ref<Texture2D> &)>(&Theme::set_icon)>("set_icon")
            .fun<static_cast<Ref<Texture2D>(Theme::*)(const StringName &,const StringName &)const>(&Theme::get_icon)>("get_icon")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::has_icon)>("has_icon")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const StringName &)>(&Theme::rename_icon)>("rename_icon")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::clear_icon)>("clear_icon")
            .fun<static_cast<PackedStringArray(Theme::*)(const String &)const>(&Theme::get_icon_list)>("get_icon_list")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_icon_type_list)>("get_icon_type_list")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const Ref<StyleBox> &)>(&Theme::set_stylebox)>("set_stylebox")
            .fun<static_cast<Ref<StyleBox>(Theme::*)(const StringName &,const StringName &)const>(&Theme::get_stylebox)>("get_stylebox")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::has_stylebox)>("has_stylebox")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const StringName &)>(&Theme::rename_stylebox)>("rename_stylebox")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::clear_stylebox)>("clear_stylebox")
            .fun<static_cast<PackedStringArray(Theme::*)(const String &)const>(&Theme::get_stylebox_list)>("get_stylebox_list")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_stylebox_type_list)>("get_stylebox_type_list")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const Ref<Font> &)>(&Theme::set_font)>("set_font")
            .fun<static_cast<Ref<Font>(Theme::*)(const StringName &,const StringName &)const>(&Theme::get_font)>("get_font")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::has_font)>("has_font")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const StringName &)>(&Theme::rename_font)>("rename_font")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::clear_font)>("clear_font")
            .fun<static_cast<PackedStringArray(Theme::*)(const String &)const>(&Theme::get_font_list)>("get_font_list")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_font_type_list)>("get_font_type_list")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,int32_t)>(&Theme::set_font_size)>("set_font_size")
            .fun<static_cast<int32_t(Theme::*)(const StringName &,const StringName &)const>(&Theme::get_font_size)>("get_font_size")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::has_font_size)>("has_font_size")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const StringName &)>(&Theme::rename_font_size)>("rename_font_size")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::clear_font_size)>("clear_font_size")
            .fun<static_cast<PackedStringArray(Theme::*)(const String &)const>(&Theme::get_font_size_list)>("get_font_size_list")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_font_size_type_list)>("get_font_size_type_list")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const Color &)>(&Theme::set_color)>("set_color")
            .fun<static_cast<Color(Theme::*)(const StringName &,const StringName &)const>(&Theme::get_color)>("get_color")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::has_color)>("has_color")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const StringName &)>(&Theme::rename_color)>("rename_color")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::clear_color)>("clear_color")
            .fun<static_cast<PackedStringArray(Theme::*)(const String &)const>(&Theme::get_color_list)>("get_color_list")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_color_type_list)>("get_color_type_list")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,int32_t)>(&Theme::set_constant)>("set_constant")
            .fun<static_cast<int32_t(Theme::*)(const StringName &,const StringName &)const>(&Theme::get_constant)>("get_constant")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::has_constant)>("has_constant")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &,const StringName &)>(&Theme::rename_constant)>("rename_constant")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::clear_constant)>("clear_constant")
            .fun<static_cast<PackedStringArray(Theme::*)(const String &)const>(&Theme::get_constant_list)>("get_constant_list")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_constant_type_list)>("get_constant_type_list")
            .fun<static_cast<bool(Theme::*)()const>(&Theme::has_default_base_scale)>("has_default_base_scale")
            .fun<static_cast<bool(Theme::*)()const>(&Theme::has_default_font)>("has_default_font")
            .fun<static_cast<bool(Theme::*)()const>(&Theme::has_default_font_size)>("has_default_font_size")
            .fun<static_cast<void(Theme::*)(Theme::DataType,const StringName &,const StringName &,const Variant &)>(&Theme::set_theme_item)>("set_theme_item")
            .fun<static_cast<Variant(Theme::*)(Theme::DataType,const StringName &,const StringName &)const>(&Theme::get_theme_item)>("get_theme_item")
            .fun<static_cast<bool(Theme::*)(Theme::DataType,const StringName &,const StringName &)const>(&Theme::has_theme_item)>("has_theme_item")
            .fun<static_cast<void(Theme::*)(Theme::DataType,const StringName &,const StringName &,const StringName &)>(&Theme::rename_theme_item)>("rename_theme_item")
            .fun<static_cast<void(Theme::*)(Theme::DataType,const StringName &,const StringName &)>(&Theme::clear_theme_item)>("clear_theme_item")
            .fun<static_cast<PackedStringArray(Theme::*)(Theme::DataType,const String &)const>(&Theme::get_theme_item_list)>("get_theme_item_list")
            .fun<static_cast<PackedStringArray(Theme::*)(Theme::DataType)const>(&Theme::get_theme_item_type_list)>("get_theme_item_type_list")
            .fun<static_cast<void(Theme::*)(const StringName &,const StringName &)>(&Theme::set_type_variation)>("set_type_variation")
            .fun<static_cast<bool(Theme::*)(const StringName &,const StringName &)const>(&Theme::is_type_variation)>("is_type_variation")
            .fun<static_cast<void(Theme::*)(const StringName &)>(&Theme::clear_type_variation)>("clear_type_variation")
            .fun<static_cast<StringName(Theme::*)(const StringName &)const>(&Theme::get_type_variation_base)>("get_type_variation_base")
            .fun<static_cast<PackedStringArray(Theme::*)(const StringName &)const>(&Theme::get_type_variation_list)>("get_type_variation_list")
            .fun<static_cast<void(Theme::*)(const StringName &)>(&Theme::add_type)>("add_type")
            .fun<static_cast<void(Theme::*)(const StringName &)>(&Theme::remove_type)>("remove_type")
            .fun<static_cast<PackedStringArray(Theme::*)()const>(&Theme::get_type_list)>("get_type_list")
            .fun<static_cast<void(Theme::*)(const Ref<Theme> &)>(&Theme::merge_with)>("merge_with")
            .fun<static_cast<void(Theme::*)()>(&Theme::clear)>("clear")
;    qjs::Value _DataType = context->newObject();
    _DataType["DATA_TYPE_COLOR"] = Theme::DataType::DATA_TYPE_COLOR;
    _DataType["DATA_TYPE_CONSTANT"] = Theme::DataType::DATA_TYPE_CONSTANT;
    _DataType["DATA_TYPE_FONT"] = Theme::DataType::DATA_TYPE_FONT;
    _DataType["DATA_TYPE_FONT_SIZE"] = Theme::DataType::DATA_TYPE_FONT_SIZE;
    _DataType["DATA_TYPE_ICON"] = Theme::DataType::DATA_TYPE_ICON;
    _DataType["DATA_TYPE_STYLEBOX"] = Theme::DataType::DATA_TYPE_STYLEBOX;
    _DataType["DATA_TYPE_MAX"] = Theme::DataType::DATA_TYPE_MAX;
    _module.add("DataType", std::move(_DataType));
}