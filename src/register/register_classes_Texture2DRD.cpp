#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture2drd.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture2DRD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture2DRD>("Texture2DRD")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<RID (Texture2DRD::*)() const>(&Texture2DRD::get_texture_rd_rid), static_cast<void (Texture2DRD::*)(const RID &)>(&Texture2DRD::set_texture_rd_rid)>((new std::string("texture_rd_rid"))->c_str());
}