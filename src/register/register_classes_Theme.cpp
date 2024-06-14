#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

using namespace godot;

void register_classes_Theme() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Theme>("Theme")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (Theme::*)() const>(&Theme::get_default_base_scale), static_cast<void (Theme::*)(double)>(&Theme::set_default_base_scale)>((new std::string("default_base_scale"))->c_str())
			.property<static_cast<Ref<Font> (Theme::*)() const>(&Theme::get_default_font), static_cast<void (Theme::*)(const Ref<Font> &)>(&Theme::set_default_font)>((new std::string("default_font"))->c_str())
			.property<static_cast<int32_t (Theme::*)() const>(&Theme::get_default_font_size), static_cast<void (Theme::*)(int32_t)>(&Theme::set_default_font_size)>((new std::string("default_font_size"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const Ref<Texture2D> &)>(&Theme::set_icon)>((new std::string("set_icon"))->c_str())
			.fun<static_cast<Ref<Texture2D> (Theme::*)(const StringName &, const StringName &) const>(&Theme::get_icon)>((new std::string("get_icon"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::has_icon)>((new std::string("has_icon"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const StringName &)>(&Theme::rename_icon)>((new std::string("rename_icon"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::clear_icon)>((new std::string("clear_icon"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const String &) const>(&Theme::get_icon_list)>((new std::string("get_icon_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_icon_type_list)>((new std::string("get_icon_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const Ref<StyleBox> &)>(&Theme::set_stylebox)>((new std::string("set_stylebox"))->c_str())
			.fun<static_cast<Ref<StyleBox> (Theme::*)(const StringName &, const StringName &) const>(&Theme::get_stylebox)>((new std::string("get_stylebox"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::has_stylebox)>((new std::string("has_stylebox"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const StringName &)>(&Theme::rename_stylebox)>((new std::string("rename_stylebox"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::clear_stylebox)>((new std::string("clear_stylebox"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const String &) const>(&Theme::get_stylebox_list)>((new std::string("get_stylebox_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_stylebox_type_list)>((new std::string("get_stylebox_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const Ref<Font> &)>(&Theme::set_font)>((new std::string("set_font"))->c_str())
			.fun<static_cast<Ref<Font> (Theme::*)(const StringName &, const StringName &) const>(&Theme::get_font)>((new std::string("get_font"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::has_font)>((new std::string("has_font"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const StringName &)>(&Theme::rename_font)>((new std::string("rename_font"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::clear_font)>((new std::string("clear_font"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const String &) const>(&Theme::get_font_list)>((new std::string("get_font_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_font_type_list)>((new std::string("get_font_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, int32_t)>(&Theme::set_font_size)>((new std::string("set_font_size"))->c_str())
			.fun<static_cast<int32_t (Theme::*)(const StringName &, const StringName &) const>(&Theme::get_font_size)>((new std::string("get_font_size"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::has_font_size)>((new std::string("has_font_size"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const StringName &)>(&Theme::rename_font_size)>((new std::string("rename_font_size"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::clear_font_size)>((new std::string("clear_font_size"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const String &) const>(&Theme::get_font_size_list)>((new std::string("get_font_size_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_font_size_type_list)>((new std::string("get_font_size_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const Color &)>(&Theme::set_color)>((new std::string("set_color"))->c_str())
			.fun<static_cast<Color (Theme::*)(const StringName &, const StringName &) const>(&Theme::get_color)>((new std::string("get_color"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::has_color)>((new std::string("has_color"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const StringName &)>(&Theme::rename_color)>((new std::string("rename_color"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::clear_color)>((new std::string("clear_color"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const String &) const>(&Theme::get_color_list)>((new std::string("get_color_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_color_type_list)>((new std::string("get_color_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, int32_t)>(&Theme::set_constant)>((new std::string("set_constant"))->c_str())
			.fun<static_cast<int32_t (Theme::*)(const StringName &, const StringName &) const>(&Theme::get_constant)>((new std::string("get_constant"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::has_constant)>((new std::string("has_constant"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &, const StringName &)>(&Theme::rename_constant)>((new std::string("rename_constant"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::clear_constant)>((new std::string("clear_constant"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const String &) const>(&Theme::get_constant_list)>((new std::string("get_constant_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_constant_type_list)>((new std::string("get_constant_type_list"))->c_str())
			.fun<static_cast<bool (Theme::*)() const>(&Theme::has_default_base_scale)>((new std::string("has_default_base_scale"))->c_str())
			.fun<static_cast<bool (Theme::*)() const>(&Theme::has_default_font)>((new std::string("has_default_font"))->c_str())
			.fun<static_cast<bool (Theme::*)() const>(&Theme::has_default_font_size)>((new std::string("has_default_font_size"))->c_str())
			.fun<static_cast<void (Theme::*)(Theme::DataType, const StringName &, const StringName &, const Variant &)>(&Theme::set_theme_item)>((new std::string("set_theme_item"))->c_str())
			.fun<static_cast<Variant (Theme::*)(Theme::DataType, const StringName &, const StringName &) const>(&Theme::get_theme_item)>((new std::string("get_theme_item"))->c_str())
			.fun<static_cast<bool (Theme::*)(Theme::DataType, const StringName &, const StringName &) const>(&Theme::has_theme_item)>((new std::string("has_theme_item"))->c_str())
			.fun<static_cast<void (Theme::*)(Theme::DataType, const StringName &, const StringName &, const StringName &)>(&Theme::rename_theme_item)>((new std::string("rename_theme_item"))->c_str())
			.fun<static_cast<void (Theme::*)(Theme::DataType, const StringName &, const StringName &)>(&Theme::clear_theme_item)>((new std::string("clear_theme_item"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(Theme::DataType, const String &) const>(&Theme::get_theme_item_list)>((new std::string("get_theme_item_list"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(Theme::DataType) const>(&Theme::get_theme_item_type_list)>((new std::string("get_theme_item_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &, const StringName &)>(&Theme::set_type_variation)>((new std::string("set_type_variation"))->c_str())
			.fun<static_cast<bool (Theme::*)(const StringName &, const StringName &) const>(&Theme::is_type_variation)>((new std::string("is_type_variation"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &)>(&Theme::clear_type_variation)>((new std::string("clear_type_variation"))->c_str())
			.fun<static_cast<StringName (Theme::*)(const StringName &) const>(&Theme::get_type_variation_base)>((new std::string("get_type_variation_base"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)(const StringName &) const>(&Theme::get_type_variation_list)>((new std::string("get_type_variation_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &)>(&Theme::add_type)>((new std::string("add_type"))->c_str())
			.fun<static_cast<void (Theme::*)(const StringName &)>(&Theme::remove_type)>((new std::string("remove_type"))->c_str())
			.fun<static_cast<PackedStringArray (Theme::*)() const>(&Theme::get_type_list)>((new std::string("get_type_list"))->c_str())
			.fun<static_cast<void (Theme::*)(const Ref<Theme> &)>(&Theme::merge_with)>((new std::string("merge_with"))->c_str())
			.fun<static_cast<void (Theme::*)()>(&Theme::clear)>((new std::string("clear"))->c_str());
	qjs::Value _DataType = context->newObject();
	_DataType[(new std::string("DATA_TYPE_COLOR"))->c_str()] = Theme::DataType::DATA_TYPE_COLOR;
	_DataType[(new std::string("DATA_TYPE_CONSTANT"))->c_str()] = Theme::DataType::DATA_TYPE_CONSTANT;
	_DataType[(new std::string("DATA_TYPE_FONT"))->c_str()] = Theme::DataType::DATA_TYPE_FONT;
	_DataType[(new std::string("DATA_TYPE_FONT_SIZE"))->c_str()] = Theme::DataType::DATA_TYPE_FONT_SIZE;
	_DataType[(new std::string("DATA_TYPE_ICON"))->c_str()] = Theme::DataType::DATA_TYPE_ICON;
	_DataType[(new std::string("DATA_TYPE_STYLEBOX"))->c_str()] = Theme::DataType::DATA_TYPE_STYLEBOX;
	_DataType[(new std::string("DATA_TYPE_MAX"))->c_str()] = Theme::DataType::DATA_TYPE_MAX;
	_module.add("DataType", std::move(_DataType));
}