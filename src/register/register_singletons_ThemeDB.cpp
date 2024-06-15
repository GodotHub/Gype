#include <godot_cpp/classes/theme_db.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_ThemeDB() {
	qjs::Value js_singleton = context->newObject();
    ThemeDB *singleton = ThemeDB::get_singleton();
    js_singleton.add("get_default_theme", [singleton]()->Ref<Theme>{return singleton->get_default_theme();});
    js_singleton.add("get_project_theme", [singleton]()->Ref<Theme>{return singleton->get_project_theme();});
    js_singleton.add("set_fallback_base_scale", [singleton](double base_scale)->void{singleton->set_fallback_base_scale(base_scale);});
    js_singleton.add("get_fallback_base_scale", [singleton]()->double{return singleton->get_fallback_base_scale();});
    js_singleton.add("set_fallback_font", [singleton](const Ref<Font> & font)->void{singleton->set_fallback_font(font);});
    js_singleton.add("get_fallback_font", [singleton]()->Ref<Font>{return singleton->get_fallback_font();});
    js_singleton.add("set_fallback_font_size", [singleton](int32_t font_size)->void{singleton->set_fallback_font_size(font_size);});
    js_singleton.add("get_fallback_font_size", [singleton]()->int64_t{return singleton->get_fallback_font_size();});
    js_singleton.add("set_fallback_icon", [singleton](const Ref<Texture2D> & icon)->void{singleton->set_fallback_icon(icon);});
    js_singleton.add("get_fallback_icon", [singleton]()->Ref<Texture2D>{return singleton->get_fallback_icon();});
    js_singleton.add("set_fallback_stylebox", [singleton](const Ref<StyleBox> & stylebox)->void{singleton->set_fallback_stylebox(stylebox);});
    js_singleton.add("get_fallback_stylebox", [singleton]()->Ref<StyleBox>{return singleton->get_fallback_stylebox();});
    context->global()["ThemeDB"] = js_singleton;

}