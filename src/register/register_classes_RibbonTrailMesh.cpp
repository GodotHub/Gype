
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ribbon_trail_mesh.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RibbonTrailMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RibbonTrailMesh>("RibbonTrailMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<RibbonTrailMesh::Shape (RibbonTrailMesh::*)() const>(&RibbonTrailMesh::get_shape), static_cast<void (RibbonTrailMesh::*)(RibbonTrailMesh::Shape)>(&RibbonTrailMesh::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<double (RibbonTrailMesh::*)() const>(&RibbonTrailMesh::get_size), static_cast<void (RibbonTrailMesh::*)(double)>(&RibbonTrailMesh::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<int32_t (RibbonTrailMesh::*)() const>(&RibbonTrailMesh::get_sections), static_cast<void (RibbonTrailMesh::*)(int32_t)>(&RibbonTrailMesh::set_sections)>((new std::string("sections"))->c_str())
			.property<static_cast<double (RibbonTrailMesh::*)() const>(&RibbonTrailMesh::get_section_length), static_cast<void (RibbonTrailMesh::*)(double)>(&RibbonTrailMesh::set_section_length)>((new std::string("section_length"))->c_str())
			.property<static_cast<int32_t (RibbonTrailMesh::*)() const>(&RibbonTrailMesh::get_section_segments), static_cast<void (RibbonTrailMesh::*)(int32_t)>(&RibbonTrailMesh::set_section_segments)>((new std::string("section_segments"))->c_str())
			.property<static_cast<Ref<Curve> (RibbonTrailMesh::*)() const>(&RibbonTrailMesh::get_curve), static_cast<void (RibbonTrailMesh::*)(const Ref<Curve> &)>(&RibbonTrailMesh::set_curve)>((new std::string("curve"))->c_str());
	qjs::Value _Shape = context->newObject();
	_Shape[(new std::string("SHAPE_FLAT"))->c_str()] = RibbonTrailMesh::Shape::SHAPE_FLAT;
	_Shape[(new std::string("SHAPE_CROSS"))->c_str()] = RibbonTrailMesh::Shape::SHAPE_CROSS;
	_module.add("Shape", std::move(_Shape));
}