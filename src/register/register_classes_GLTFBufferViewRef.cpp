#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_buffer_view.hpp>

using namespace godot;

void register_classes_GLTFBufferViewRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFBufferView>>("GLTFBufferViewRef").constructor<GLTFBufferView *>();
}