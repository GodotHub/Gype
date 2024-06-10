#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_texture_sampler.hpp>

using namespace godot;

void register_classes_GLTFTextureSamplerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFTextureSampler>>("GLTFTextureSamplerRef").constructor<GLTFTextureSampler *>();
}