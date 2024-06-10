
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_NodePath() {
	get_Variant_module().class_<NodePath>("NodePath").constructor<>().constructor<const NodePath &>("NodePath_1").constructor<const String &>("NodePath_2")

			.fun<static_cast<bool (NodePath::*)() const>(&NodePath::is_absolute)>("is_absolute")
			.fun<static_cast<int64_t (NodePath::*)() const>(&NodePath::get_name_count)>("get_name_count")
			.fun<static_cast<StringName (NodePath::*)(int64_t) const>(&NodePath::get_name)>("get_name")
			.fun<static_cast<int64_t (NodePath::*)() const>(&NodePath::get_subname_count)>("get_subname_count")
			.fun<static_cast<int64_t (NodePath::*)() const>(&NodePath::hash)>("hash")
			.fun<static_cast<StringName (NodePath::*)(int64_t) const>(&NodePath::get_subname)>("get_subname")
			.fun<static_cast<StringName (NodePath::*)() const>(&NodePath::get_concatenated_names)>("get_concatenated_names")
			.fun<static_cast<StringName (NodePath::*)() const>(&NodePath::get_concatenated_subnames)>("get_concatenated_subnames")
			.fun<static_cast<NodePath (NodePath::*)() const>(&NodePath::get_as_property_path)>("get_as_property_path")
			.fun<static_cast<bool (NodePath::*)() const>(&NodePath::is_empty)>("is_empty");
}