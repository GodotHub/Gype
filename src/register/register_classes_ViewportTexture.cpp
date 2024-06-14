#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ViewportTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ViewportTexture>("ViewportTexture")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<NodePath (ViewportTexture::*)() const>(&ViewportTexture::get_viewport_path_in_scene), static_cast<void (ViewportTexture::*)(const NodePath &)>(&ViewportTexture::set_viewport_path_in_scene)>((new std::string("viewport_path"))->c_str());
}