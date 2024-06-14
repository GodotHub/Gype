#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextureLayeredRD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextureLayeredRD>("TextureLayeredRD")
			.constructor<>()
			.base<TextureLayered>()
			.property<static_cast<RID (TextureLayeredRD::*)() const>(&TextureLayeredRD::get_texture_rd_rid), static_cast<void (TextureLayeredRD::*)(const RID &)>(&TextureLayeredRD::set_texture_rd_rid)>((new std::string("texture_rd_rid"))->c_str());
}