#include <godot_cpp/classes/texture3drd.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Texture3DRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Texture3DRD>("Texture3DRD")
            .constructor<>()
            .base<Texture3D>()
            .property<static_cast<RID(Texture3DRD::*)()const>(&Texture3DRD::get_texture_rd_rid),static_cast<void(Texture3DRD::*)(const RID &)>(&Texture3DRD::set_texture_rd_rid)>("texture_rd_rid")
;}