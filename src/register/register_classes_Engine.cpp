#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/engine.hpp>

using namespace godot;

void register_classes_Engine() {
    qjs::Context::Module &_module = _General;
    _module.class_<Engine>("Engine")
           .constructor<>()
           .property<Engine::is_printing_error_messages, Engine::set_print_error_messages>("print_error_messages")
           .property<Engine::get_physics_ticks_per_second, Engine::set_physics_ticks_per_second>("physics_ticks_per_second")
           .property<Engine::get_max_physics_steps_per_frame, Engine::set_max_physics_steps_per_frame>("max_physics_steps_per_frame")
           .property<Engine::get_max_fps, Engine::set_max_fps>("max_fps")
           .property<Engine::get_time_scale, Engine::set_time_scale>("time_scale")
           .property<Engine::get_physics_jitter_fix, Engine::set_physics_jitter_fix>("physics_jitter_fix")
		    .fun<static_cast<double(Engine::*)()const>(&Engine::get_physics_interpolation_fraction)>("get_physics_interpolation_fraction")
		    .fun<static_cast<int32_t(Engine::*)()>(&Engine::get_frames_drawn)>("get_frames_drawn")
		    .fun<static_cast<double(Engine::*)()const>(&Engine::get_frames_per_second)>("get_frames_per_second")
		    .fun<static_cast<uint64_t(Engine::*)()const>(&Engine::get_physics_frames)>("get_physics_frames")
		    .fun<static_cast<uint64_t(Engine::*)()const>(&Engine::get_process_frames)>("get_process_frames")
		    .fun<static_cast<MainLoop *(Engine::*)()const>(&Engine::get_main_loop)>("get_main_loop")
		    .fun<static_cast<Dictionary(Engine::*)()const>(&Engine::get_version_info)>("get_version_info")
		    .fun<static_cast<Dictionary(Engine::*)()const>(&Engine::get_author_info)>("get_author_info")
		    .fun<static_cast<TypedArray<Dictionary>(Engine::*)()const>(&Engine::get_copyright_info)>("get_copyright_info")
		    .fun<static_cast<Dictionary(Engine::*)()const>(&Engine::get_donor_info)>("get_donor_info")
		    .fun<static_cast<Dictionary(Engine::*)()const>(&Engine::get_license_info)>("get_license_info")
		    .fun<static_cast<String(Engine::*)()const>(&Engine::get_license_text)>("get_license_text")
		    .fun<static_cast<String(Engine::*)()const>(&Engine::get_architecture_name)>("get_architecture_name")
		    .fun<static_cast<bool(Engine::*)()const>(&Engine::is_in_physics_frame)>("is_in_physics_frame")
		    .fun<static_cast<bool(Engine::*)(const StringName &)const>(&Engine::has_singleton)>("has_singleton")
		    .fun<static_cast<Object *(Engine::*)(const StringName &)const>(&Engine::get_singleton)>("get_singleton")
		    .fun<static_cast<void(Engine::*)(const StringName &,Object *)>(&Engine::register_singleton)>("register_singleton")
		    .fun<static_cast<void(Engine::*)(const StringName &)>(&Engine::unregister_singleton)>("unregister_singleton")
		    .fun<static_cast<PackedStringArray(Engine::*)()const>(&Engine::get_singleton_list)>("get_singleton_list")
		    .fun<static_cast<Error(Engine::*)(ScriptLanguage *)>(&Engine::register_script_language)>("register_script_language")
		    .fun<static_cast<Error(Engine::*)(ScriptLanguage *)>(&Engine::unregister_script_language)>("unregister_script_language")
		    .fun<static_cast<int32_t(Engine::*)()>(&Engine::get_script_language_count)>("get_script_language_count")
		    .fun<static_cast<ScriptLanguage *(Engine::*)(int32_t)const>(&Engine::get_script_language)>("get_script_language")
		    .fun<static_cast<bool(Engine::*)()const>(&Engine::is_editor_hint)>("is_editor_hint")
		    .fun<static_cast<String(Engine::*)()const>(&Engine::get_write_movie_path)>("get_write_movie_path")
;}