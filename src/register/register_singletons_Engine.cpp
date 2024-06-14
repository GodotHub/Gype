
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Engine() {
	qjs::Value js_singleton = context->newObject();
	Engine *singleton = Engine::get_singleton();
	js_singleton.add((new std::string("set_physics_ticks_per_second"))->c_str(), [singleton](int32_t physics_ticks_per_second) -> void { singleton->set_physics_ticks_per_second(physics_ticks_per_second); });
	js_singleton.add((new std::string("get_physics_ticks_per_second"))->c_str(), [singleton]() -> int64_t { return singleton->get_physics_ticks_per_second(); });
	js_singleton.add((new std::string("set_max_physics_steps_per_frame"))->c_str(), [singleton](int32_t max_physics_steps) -> void { singleton->set_max_physics_steps_per_frame(max_physics_steps); });
	js_singleton.add((new std::string("get_max_physics_steps_per_frame"))->c_str(), [singleton]() -> int64_t { return singleton->get_max_physics_steps_per_frame(); });
	js_singleton.add((new std::string("set_physics_jitter_fix"))->c_str(), [singleton](double physics_jitter_fix) -> void { singleton->set_physics_jitter_fix(physics_jitter_fix); });
	js_singleton.add((new std::string("get_physics_jitter_fix"))->c_str(), [singleton]() -> double { return singleton->get_physics_jitter_fix(); });
	js_singleton.add((new std::string("get_physics_interpolation_fraction"))->c_str(), [singleton]() -> double { return singleton->get_physics_interpolation_fraction(); });
	js_singleton.add((new std::string("set_max_fps"))->c_str(), [singleton](int32_t max_fps) -> void { singleton->set_max_fps(max_fps); });
	js_singleton.add((new std::string("get_max_fps"))->c_str(), [singleton]() -> int64_t { return singleton->get_max_fps(); });
	js_singleton.add((new std::string("set_time_scale"))->c_str(), [singleton](double time_scale) -> void { singleton->set_time_scale(time_scale); });
	js_singleton.add((new std::string("get_time_scale"))->c_str(), [singleton]() -> double { return singleton->get_time_scale(); });
	js_singleton.add((new std::string("get_frames_drawn"))->c_str(), [singleton]() -> int64_t { return singleton->get_frames_drawn(); });
	js_singleton.add((new std::string("get_frames_per_second"))->c_str(), [singleton]() -> double { return singleton->get_frames_per_second(); });
	js_singleton.add((new std::string("get_physics_frames"))->c_str(), [singleton]() -> int64_t { return singleton->get_physics_frames(); });
	js_singleton.add((new std::string("get_process_frames"))->c_str(), [singleton]() -> int64_t { return singleton->get_process_frames(); });
	js_singleton.add((new std::string("get_main_loop"))->c_str(), [singleton]() -> MainLoop * { return singleton->get_main_loop(); });
	js_singleton.add((new std::string("get_version_info"))->c_str(), [singleton]() -> Dictionary { return singleton->get_version_info(); });
	js_singleton.add((new std::string("get_author_info"))->c_str(), [singleton]() -> Dictionary { return singleton->get_author_info(); });
	js_singleton.add((new std::string("get_copyright_info"))->c_str(), [singleton]() -> TypedArray<Dictionary> { return singleton->get_copyright_info(); });
	js_singleton.add((new std::string("get_donor_info"))->c_str(), [singleton]() -> Dictionary { return singleton->get_donor_info(); });
	js_singleton.add((new std::string("get_license_info"))->c_str(), [singleton]() -> Dictionary { return singleton->get_license_info(); });
	js_singleton.add((new std::string("get_license_text"))->c_str(), [singleton]() -> String { return singleton->get_license_text(); });
	js_singleton.add((new std::string("get_architecture_name"))->c_str(), [singleton]() -> String { return singleton->get_architecture_name(); });
	js_singleton.add((new std::string("is_in_physics_frame"))->c_str(), [singleton]() -> bool { return singleton->is_in_physics_frame(); });
	js_singleton.add((new std::string("has_singleton"))->c_str(), [singleton](const StringName &name) -> bool { return singleton->has_singleton(name); });
	js_singleton.add((new std::string("get_singleton"))->c_str(), [singleton](const StringName &name) -> Object * { return singleton->get_singleton(name); });
	js_singleton.add((new std::string("register_singletons"))->c_str(), [singleton](const StringName &name, Object *instance) -> void { singleton->register_singleton(name, instance); });
	js_singleton.add((new std::string("unregister_singletons"))->c_str(), [singleton](const StringName &name) -> void { singleton->unregister_singleton(name); });
	js_singleton.add((new std::string("get_singleton_list"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_singleton_list(); });
	js_singleton.add((new std::string("register_script_language"))->c_str(), [singleton](ScriptLanguage *language) -> Error { return singleton->register_script_language(language); });
	js_singleton.add((new std::string("unregister_script_language"))->c_str(), [singleton](ScriptLanguage *language) -> Error { return singleton->unregister_script_language(language); });
	js_singleton.add((new std::string("get_script_language_count"))->c_str(), [singleton]() -> int64_t { return singleton->get_script_language_count(); });
	js_singleton.add((new std::string("get_script_language"))->c_str(), [singleton](int32_t index) -> ScriptLanguage * { return singleton->get_script_language(index); });
	js_singleton.add((new std::string("is_editor_hint"))->c_str(), [singleton]() -> bool { return singleton->is_editor_hint(); });
	js_singleton.add((new std::string("get_write_movie_path"))->c_str(), [singleton]() -> String { return singleton->get_write_movie_path(); });
	js_singleton.add((new std::string("set_print_error_messages"))->c_str(), [singleton](bool enabled) -> void { singleton->set_print_error_messages(enabled); });
	js_singleton.add((new std::string("is_printing_error_messages"))->c_str(), [singleton]() -> bool { return singleton->is_printing_error_messages(); });
	context->global()[(new std::string("Engine"))->c_str()] = js_singleton;
}