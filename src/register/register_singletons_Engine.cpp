#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_Engine() {
	qjs::Value js_singleton = context->newObject();
    Engine *singleton = Engine::get_singleton();
    js_singleton.add("set_physics_ticks_per_second", [singleton](int32_t physics_ticks_per_second)->void{singleton->set_physics_ticks_per_second(physics_ticks_per_second);});
    js_singleton.add("get_physics_ticks_per_second", [singleton]()->int64_t{return singleton->get_physics_ticks_per_second();});
    js_singleton.add("set_max_physics_steps_per_frame", [singleton](int32_t max_physics_steps)->void{singleton->set_max_physics_steps_per_frame(max_physics_steps);});
    js_singleton.add("get_max_physics_steps_per_frame", [singleton]()->int64_t{return singleton->get_max_physics_steps_per_frame();});
    js_singleton.add("set_physics_jitter_fix", [singleton](double physics_jitter_fix)->void{singleton->set_physics_jitter_fix(physics_jitter_fix);});
    js_singleton.add("get_physics_jitter_fix", [singleton]()->double{return singleton->get_physics_jitter_fix();});
    js_singleton.add("get_physics_interpolation_fraction", [singleton]()->double{return singleton->get_physics_interpolation_fraction();});
    js_singleton.add("set_max_fps", [singleton](int32_t max_fps)->void{singleton->set_max_fps(max_fps);});
    js_singleton.add("get_max_fps", [singleton]()->int64_t{return singleton->get_max_fps();});
    js_singleton.add("set_time_scale", [singleton](double time_scale)->void{singleton->set_time_scale(time_scale);});
    js_singleton.add("get_time_scale", [singleton]()->double{return singleton->get_time_scale();});
    js_singleton.add("get_frames_drawn", [singleton]()->int64_t{return singleton->get_frames_drawn();});
    js_singleton.add("get_frames_per_second", [singleton]()->double{return singleton->get_frames_per_second();});
    js_singleton.add("get_physics_frames", [singleton]()->int64_t{return singleton->get_physics_frames();});
    js_singleton.add("get_process_frames", [singleton]()->int64_t{return singleton->get_process_frames();});
    js_singleton.add("get_main_loop", [singleton]()->MainLoop *{return singleton->get_main_loop();});
    js_singleton.add("get_version_info", [singleton]()->Dictionary{return singleton->get_version_info();});
    js_singleton.add("get_author_info", [singleton]()->Dictionary{return singleton->get_author_info();});
    js_singleton.add("get_copyright_info", [singleton]()->TypedArray<Dictionary>{return singleton->get_copyright_info();});
    js_singleton.add("get_donor_info", [singleton]()->Dictionary{return singleton->get_donor_info();});
    js_singleton.add("get_license_info", [singleton]()->Dictionary{return singleton->get_license_info();});
    js_singleton.add("get_license_text", [singleton]()->String{return singleton->get_license_text();});
    js_singleton.add("get_architecture_name", [singleton]()->String{return singleton->get_architecture_name();});
    js_singleton.add("is_in_physics_frame", [singleton]()->bool{return singleton->is_in_physics_frame();});
    js_singleton.add("has_singleton", [singleton](const StringName & name)->bool{return singleton->has_singleton(name);});
    js_singleton.add("get_singleton", [singleton](const StringName & name)->Object *{return singleton->get_singleton(name);});
    js_singleton.add("register_singleton", [singleton](const StringName & name,Object * instance)->void{singleton->register_singleton(name,instance);});
    js_singleton.add("unregister_singleton", [singleton](const StringName & name)->void{singleton->unregister_singleton(name);});
    js_singleton.add("get_singleton_list", [singleton]()->PackedStringArray{return singleton->get_singleton_list();});
    js_singleton.add("register_script_language", [singleton](ScriptLanguage * language)->Error{return singleton->register_script_language(language);});
    js_singleton.add("unregister_script_language", [singleton](ScriptLanguage * language)->Error{return singleton->unregister_script_language(language);});
    js_singleton.add("get_script_language_count", [singleton]()->int64_t{return singleton->get_script_language_count();});
    js_singleton.add("get_script_language", [singleton](int32_t index)->ScriptLanguage *{return singleton->get_script_language(index);});
    js_singleton.add("is_editor_hint", [singleton]()->bool{return singleton->is_editor_hint();});
    js_singleton.add("get_write_movie_path", [singleton]()->String{return singleton->get_write_movie_path();});
    js_singleton.add("set_print_error_messages", [singleton](bool enabled)->void{singleton->set_print_error_messages(enabled);});
    js_singleton.add("is_printing_error_messages", [singleton]()->bool{return singleton->is_printing_error_messages();});
    context->global()["Engine"] = js_singleton;

}