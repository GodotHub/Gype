#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MeshTexture>("MeshTexture")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<Ref<Mesh> (MeshTexture::*)() const>(&MeshTexture::get_mesh), static_cast<void (MeshTexture::*)(const Ref<Mesh> &)>(&MeshTexture::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<Ref<Texture2D> (MeshTexture::*)() const>(&MeshTexture::get_base_texture), static_cast<void (MeshTexture::*)(const Ref<Texture2D> &)>(&MeshTexture::set_base_texture)>((new std::string("base_texture"))->c_str())
			.property<static_cast<Vector2 (MeshTexture::*)() const>(&MeshTexture::get_image_size), static_cast<void (MeshTexture::*)(const Vector2 &)>(&MeshTexture::set_image_size)>((new std::string("image_size"))->c_str());
}