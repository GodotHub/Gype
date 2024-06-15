#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDTextureView() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDTextureView>("RDTextureView")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RenderingDevice::DataFormat(RDTextureView::*)()const>(&RDTextureView::get_format_override),static_cast<void(RDTextureView::*)(RenderingDevice::DataFormat)>(&RDTextureView::set_format_override)>("format_override")
            .property<static_cast<RenderingDevice::TextureSwizzle(RDTextureView::*)()const>(&RDTextureView::get_swizzle_r),static_cast<void(RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_r)>("swizzle_r")
            .property<static_cast<RenderingDevice::TextureSwizzle(RDTextureView::*)()const>(&RDTextureView::get_swizzle_g),static_cast<void(RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_g)>("swizzle_g")
            .property<static_cast<RenderingDevice::TextureSwizzle(RDTextureView::*)()const>(&RDTextureView::get_swizzle_b),static_cast<void(RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_b)>("swizzle_b")
            .property<static_cast<RenderingDevice::TextureSwizzle(RDTextureView::*)()const>(&RDTextureView::get_swizzle_a),static_cast<void(RDTextureView::*)(RenderingDevice::TextureSwizzle)>(&RDTextureView::set_swizzle_a)>("swizzle_a")
;}