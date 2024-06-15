#include <godot_cpp/classes/texture2drd.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Texture2DRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Texture2DRD>("Texture2DRD")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<RID(Texture2DRD::*)()const>(&Texture2DRD::get_texture_rd_rid),static_cast<void(Texture2DRD::*)(const RID &)>(&Texture2DRD::set_texture_rd_rid)>("texture_rd_rid")
;}