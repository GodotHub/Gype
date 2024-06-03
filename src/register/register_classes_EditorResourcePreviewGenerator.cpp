#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_resource_preview_generator.hpp>

using namespace godot;

void register_classes_EditorResourcePreviewGenerator() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorResourcePreviewGenerator>("EditorResourcePreviewGenerator")
           .constructor<>()
		    .fun<static_cast<bool(EditorResourcePreviewGenerator::*)(const String &)const>(&EditorResourcePreviewGenerator::_handles)>("_handles")
		    .fun<static_cast<Ref<Texture2D>(EditorResourcePreviewGenerator::*)(const Ref<Resource> &,const Vector2i &,const Dictionary &)const>(&EditorResourcePreviewGenerator::_generate)>("_generate")
		    .fun<static_cast<Ref<Texture2D>(EditorResourcePreviewGenerator::*)(const String &,const Vector2i &,const Dictionary &)const>(&EditorResourcePreviewGenerator::_generate_from_path)>("_generate_from_path")
		    .fun<static_cast<bool(EditorResourcePreviewGenerator::*)()const>(&EditorResourcePreviewGenerator::_generate_small_preview_automatically)>("_generate_small_preview_automatically")
		    .fun<static_cast<bool(EditorResourcePreviewGenerator::*)()const>(&EditorResourcePreviewGenerator::_can_generate_small_preview)>("_can_generate_small_preview")
;}