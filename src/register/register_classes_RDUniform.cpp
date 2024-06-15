#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDUniform() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDUniform>("RDUniform")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<RenderingDevice::UniformType(RDUniform::*)()const>(&RDUniform::get_uniform_type),static_cast<void(RDUniform::*)(RenderingDevice::UniformType)>(&RDUniform::set_uniform_type)>("uniform_type")
            .property<static_cast<int32_t(RDUniform::*)()const>(&RDUniform::get_binding),static_cast<void(RDUniform::*)(int32_t)>(&RDUniform::set_binding)>("binding")
            .fun<static_cast<void(RDUniform::*)(const RID &)>(&RDUniform::add_id)>("add_id")
            .fun<static_cast<void(RDUniform::*)()>(&RDUniform::clear_ids)>("clear_ids")
            .fun<static_cast<TypedArray<RID>(RDUniform::*)()const>(&RDUniform::get_ids)>("get_ids")
;}