#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceSaver() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceSaver>("ResourceSaver")
			.fun<static_cast<Error (ResourceSaver::*)(const Ref<Resource> &, const String &, BitField<ResourceSaver::SaverFlags>)>(&ResourceSaver::save)>("save")
			.fun<static_cast<PackedStringArray (ResourceSaver::*)(const Ref<Resource> &)>(&ResourceSaver::get_recognized_extensions)>("get_recognized_extensions")
			.fun<static_cast<void (ResourceSaver::*)(const Ref<ResourceFormatSaver> &, bool)>(&ResourceSaver::add_resource_format_saver)>("add_resource_format_saver")
			.fun<static_cast<void (ResourceSaver::*)(const Ref<ResourceFormatSaver> &)>(&ResourceSaver::remove_resource_format_saver)>("remove_resource_format_saver");
}