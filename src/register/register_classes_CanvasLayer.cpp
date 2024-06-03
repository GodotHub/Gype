#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CanvasLayer() {
    qjs::Context::Module &_module = _Node;
    _module.class_<CanvasLayer>("CanvasLayer")
           .constructor<>()
           .property<CanvasLayer::get_layer, CanvasLayer::set_layer>("layer")
           .property<CanvasLayer::is_visible, CanvasLayer::set_visible>("visible")
           .property<CanvasLayer::get_offset, CanvasLayer::set_offset>("offset")
           .property<CanvasLayer::get_rotation, CanvasLayer::set_rotation>("rotation")
           .property<CanvasLayer::get_scale, CanvasLayer::set_scale>("scale")
           .property<CanvasLayer::get_transform, CanvasLayer::set_transform>("transform")
           .property<CanvasLayer::get_custom_viewport, CanvasLayer::set_custom_viewport>("custom_viewport")
           .property<CanvasLayer::is_following_viewport, CanvasLayer::set_follow_viewport>("follow_viewport_enabled")
           .property<CanvasLayer::get_follow_viewport_scale, CanvasLayer::set_follow_viewport_scale>("follow_viewport_scale")
		   .fun<static_cast<void(CanvasLayer::*)()>(&CanvasLayer::show)>("show")
		   .fun<static_cast<void(CanvasLayer::*)()>(&CanvasLayer::hide)>("hide")
		   .fun<static_cast<Transform2D(CanvasLayer::*)()const>(&CanvasLayer::get_final_transform)>("get_final_transform")
		   .fun<static_cast<RID(CanvasLayer::*)()const>(&CanvasLayer::get_canvas)>("get_canvas")
;}