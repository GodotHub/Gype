#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_VisualInstance3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<VisualInstance3D>("VisualInstance3D")
           .constructor<>()
           .property<VisualInstance3D::get_layer_mask, VisualInstance3D::set_layer_mask>("layers")
           .property<VisualInstance3D::get_sorting_offset, VisualInstance3D::set_sorting_offset>("sorting_offset")
           .property<VisualInstance3D::is_sorting_use_aabb_center, VisualInstance3D::set_sorting_use_aabb_center>("sorting_use_aabb_center")
		   .fun<static_cast<AABB(VisualInstance3D::*)()const>(&VisualInstance3D::_get_aabb)>("_get_aabb")
		   .fun<static_cast<void(VisualInstance3D::*)(const RID &)>(&VisualInstance3D::set_base)>("set_base")
		   .fun<static_cast<RID(VisualInstance3D::*)()const>(&VisualInstance3D::get_base)>("get_base")
		   .fun<static_cast<RID(VisualInstance3D::*)()const>(&VisualInstance3D::get_instance)>("get_instance")
		   .fun<static_cast<void(VisualInstance3D::*)(int32_t,bool)>(&VisualInstance3D::set_layer_mask_value)>("set_layer_mask_value")
		   .fun<static_cast<bool(VisualInstance3D::*)(int32_t)const>(&VisualInstance3D::get_layer_mask_value)>("get_layer_mask_value")
		   .fun<static_cast<AABB(VisualInstance3D::*)()const>(&VisualInstance3D::get_aabb)>("get_aabb")
;}