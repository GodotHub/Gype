#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_texture.hpp>

using namespace godot;

void register_classes_GLTFTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFTexture>("GLTFTexture")
           .constructor<>()
           .property<GLTFTexture::get_src_image, GLTFTexture::set_src_image>("src_image")
           .property<GLTFTexture::get_sampler, GLTFTexture::set_sampler>("sampler")
;}