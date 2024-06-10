#include "register/register_classes.h"
#include <godot_cpp/classes/editor_feature_profile.hpp>

using namespace godot;

void register_classes_EditorFeatureProfileRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorFeatureProfile>>("EditorFeatureProfileRef").constructor<EditorFeatureProfile *>();
}