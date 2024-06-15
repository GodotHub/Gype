#include <godot_cpp/classes/ribbon_trail_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RibbonTrailMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RibbonTrailMesh>("RibbonTrailMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<RibbonTrailMesh::Shape(RibbonTrailMesh::*)()const>(&RibbonTrailMesh::get_shape),static_cast<void(RibbonTrailMesh::*)(RibbonTrailMesh::Shape)>(&RibbonTrailMesh::set_shape)>("shape")
            .property<static_cast<double(RibbonTrailMesh::*)()const>(&RibbonTrailMesh::get_size),static_cast<void(RibbonTrailMesh::*)(double)>(&RibbonTrailMesh::set_size)>("size")
            .property<static_cast<int32_t(RibbonTrailMesh::*)()const>(&RibbonTrailMesh::get_sections),static_cast<void(RibbonTrailMesh::*)(int32_t)>(&RibbonTrailMesh::set_sections)>("sections")
            .property<static_cast<double(RibbonTrailMesh::*)()const>(&RibbonTrailMesh::get_section_length),static_cast<void(RibbonTrailMesh::*)(double)>(&RibbonTrailMesh::set_section_length)>("section_length")
            .property<static_cast<int32_t(RibbonTrailMesh::*)()const>(&RibbonTrailMesh::get_section_segments),static_cast<void(RibbonTrailMesh::*)(int32_t)>(&RibbonTrailMesh::set_section_segments)>("section_segments")
            .property<static_cast<Ref<Curve>(RibbonTrailMesh::*)()const>(&RibbonTrailMesh::get_curve),static_cast<void(RibbonTrailMesh::*)(const Ref<Curve> &)>(&RibbonTrailMesh::set_curve)>("curve")
;    qjs::Value _Shape = context->newObject();
    _Shape["SHAPE_FLAT"] = RibbonTrailMesh::Shape::SHAPE_FLAT;
    _Shape["SHAPE_CROSS"] = RibbonTrailMesh::Shape::SHAPE_CROSS;
    _module.add("Shape", std::move(_Shape));
}