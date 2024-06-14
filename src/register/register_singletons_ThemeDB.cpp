
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/theme_db.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_ThemeDB() {
	qjs::Value js_singleton = context->newObject();
	ThemeDB *singleton = ThemeDB::get_singleton();
	js_singleton.add((new std::string("get_default_theme"))->c_str(), [singleton]() -> Ref<Theme> { return singleton->get_default_theme(); });
	js_singleton.add((new std::string("get_project_theme"))->c_str(), [singleton]() -> Ref<Theme> { return singleton->get_project_theme(); });
	js_singleton.add((new std::string("set_fallback_base_scale"))->c_str(), [singleton](double base_scale) -> void { singleton->set_fallback_base_scale(base_scale); });
	js_singleton.add((new std::string("get_fallback_base_scale"))->c_str(), [singleton]() -> double { return singleton->get_fallback_base_scale(); });
	js_singleton.add((new std::string("set_fallback_font"))->c_str(), [singleton](const Ref<Font> &font) -> void { singleton->set_fallback_font(font); });
	js_singleton.add((new std::string("get_fallback_font"))->c_str(), [singleton]() -> Ref<Font> { return singleton->get_fallback_font(); });
	js_singleton.add((new std::string("set_fallback_font_size"))->c_str(), [singleton](int32_t font_size) -> void { singleton->set_fallback_font_size(font_size); });
	js_singleton.add((new std::string("get_fallback_font_size"))->c_str(), [singleton]() -> int64_t { return singleton->get_fallback_font_size(); });
	js_singleton.add((new std::string("set_fallback_icon"))->c_str(), [singleton](const Ref<Texture2D> &icon) -> void { singleton->set_fallback_icon(icon); });
	js_singleton.add((new std::string("get_fallback_icon"))->c_str(), [singleton]() -> Ref<Texture2D> { return singleton->get_fallback_icon(); });
	js_singleton.add((new std::string("set_fallback_stylebox"))->c_str(), [singleton](const Ref<StyleBox> &stylebox) -> void { singleton->set_fallback_stylebox(stylebox); });
	js_singleton.add((new std::string("get_fallback_stylebox"))->c_str(), [singleton]() -> Ref<StyleBox> { return singleton->get_fallback_stylebox(); });
	context->global()[(new std::string("ThemeDB"))->c_str()] = js_singleton;
}