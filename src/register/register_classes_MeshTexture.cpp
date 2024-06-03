#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/mesh_texture.hpp>

using namespace godot;

void register_classes_MeshTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<MeshTexture>("MeshTexture")
           .constructor<>()
           .property<MeshTexture::get_mesh, MeshTexture::set_mesh>("mesh")
           .property<MeshTexture::get_base_texture, MeshTexture::set_base_texture>("base_texture")
           .property<MeshTexture::get_image_size, MeshTexture::set_image_size>("image_size")
;}