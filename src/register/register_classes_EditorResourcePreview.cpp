#include <godot_cpp/classes/editor_resource_preview.hpp>
#include <godot_cpp/classes/editor_resource_preview_generator.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorResourcePreview() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<EditorResourcePreview>("EditorResourcePreview")
			.constructor<>()
			.base<Node>()
			.fun<static_cast<void (EditorResourcePreview::*)(const String &, Object *, const StringName &, const Variant &)>(&EditorResourcePreview::queue_resource_preview)>((new std::string("queue_resource_preview"))->c_str())
			.fun<static_cast<void (EditorResourcePreview::*)(const Ref<Resource> &, Object *, const StringName &, const Variant &)>(&EditorResourcePreview::queue_edited_resource_preview)>((new std::string("queue_edited_resource_preview"))->c_str())
			.fun<static_cast<void (EditorResourcePreview::*)(const Ref<EditorResourcePreviewGenerator> &)>(&EditorResourcePreview::add_preview_generator)>((new std::string("add_preview_generator"))->c_str())
			.fun<static_cast<void (EditorResourcePreview::*)(const Ref<EditorResourcePreviewGenerator> &)>(&EditorResourcePreview::remove_preview_generator)>((new std::string("remove_preview_generator"))->c_str())
			.fun<static_cast<void (EditorResourcePreview::*)(const String &)>(&EditorResourcePreview::check_for_invalidation)>((new std::string("check_for_invalidation"))->c_str());
}