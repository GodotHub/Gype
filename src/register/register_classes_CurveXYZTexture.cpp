
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/curve_xyz_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CurveXYZTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CurveXYZTexture>("CurveXYZTexture")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<void (CurveXYZTexture::*)(int32_t)>(&CurveXYZTexture::set_width)>((new std::string("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<Ref<Curve> (CurveXYZTexture::*)() const>(&CurveXYZTexture::get_curve_x), static_cast<void (CurveXYZTexture::*)(const Ref<Curve> &)>(&CurveXYZTexture::set_curve_x)>((new std::string("curve_x"))->c_str())
			.property<static_cast<Ref<Curve> (CurveXYZTexture::*)() const>(&CurveXYZTexture::get_curve_y), static_cast<void (CurveXYZTexture::*)(const Ref<Curve> &)>(&CurveXYZTexture::set_curve_y)>((new std::string("curve_y"))->c_str())
			.property<static_cast<Ref<Curve> (CurveXYZTexture::*)() const>(&CurveXYZTexture::get_curve_z), static_cast<void (CurveXYZTexture::*)(const Ref<Curve> &)>(&CurveXYZTexture::set_curve_z)>((new std::string("curve_z"))->c_str());
}