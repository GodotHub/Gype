#include <godot_cpp/classes/editor_resource_preview_generator.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorResourcePreviewGenerator() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorResourcePreviewGenerator>("EditorResourcePreviewGenerator")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<bool (EditorResourcePreviewGenerator::*)(const String &) const>(&EditorResourcePreviewGenerator::_handles)>((new std::string("_handles"))->c_str())
			.fun<static_cast<Ref<Texture2D> (EditorResourcePreviewGenerator::*)(const Ref<Resource> &, const Vector2i &, const Dictionary &) const>(&EditorResourcePreviewGenerator::_generate)>((new std::string("_generate"))->c_str())
			.fun<static_cast<Ref<Texture2D> (EditorResourcePreviewGenerator::*)(const String &, const Vector2i &, const Dictionary &) const>(&EditorResourcePreviewGenerator::_generate_from_path)>((new std::string("_generate_from_path"))->c_str())
			.fun<static_cast<bool (EditorResourcePreviewGenerator::*)() const>(&EditorResourcePreviewGenerator::_generate_small_preview_automatically)>((new std::string("_generate_small_preview_automatically"))->c_str())
			.fun<static_cast<bool (EditorResourcePreviewGenerator::*)() const>(&EditorResourcePreviewGenerator::_can_generate_small_preview)>((new std::string("_can_generate_small_preview"))->c_str());
}