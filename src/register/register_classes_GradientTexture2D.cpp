
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/gradient_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GradientTexture2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GradientTexture2D>("GradientTexture2D")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<Ref<Gradient> (GradientTexture2D::*)() const>(&GradientTexture2D::get_gradient), static_cast<void (GradientTexture2D::*)(const Ref<Gradient> &)>(&GradientTexture2D::set_gradient)>((new std::string("gradient"))->c_str())
			.property<static_cast<void (GradientTexture2D::*)(int32_t)>(&GradientTexture2D::set_width)>((new std::string("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<void (GradientTexture2D::*)(int32_t)>(&GradientTexture2D::set_height)>((new std::string("{'name': 'set_height', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'height', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<bool (GradientTexture2D::*)() const>(&GradientTexture2D::is_using_hdr), static_cast<void (GradientTexture2D::*)(bool)>(&GradientTexture2D::set_use_hdr)>((new std::string("use_hdr"))->c_str())
			.property<static_cast<GradientTexture2D::Fill (GradientTexture2D::*)() const>(&GradientTexture2D::get_fill), static_cast<void (GradientTexture2D::*)(GradientTexture2D::Fill)>(&GradientTexture2D::set_fill)>((new std::string("fill"))->c_str())
			.property<static_cast<Vector2 (GradientTexture2D::*)() const>(&GradientTexture2D::get_fill_from), static_cast<void (GradientTexture2D::*)(const Vector2 &)>(&GradientTexture2D::set_fill_from)>((new std::string("fill_from"))->c_str())
			.property<static_cast<Vector2 (GradientTexture2D::*)() const>(&GradientTexture2D::get_fill_to), static_cast<void (GradientTexture2D::*)(const Vector2 &)>(&GradientTexture2D::set_fill_to)>((new std::string("fill_to"))->c_str())
			.property<static_cast<GradientTexture2D::Repeat (GradientTexture2D::*)() const>(&GradientTexture2D::get_repeat), static_cast<void (GradientTexture2D::*)(GradientTexture2D::Repeat)>(&GradientTexture2D::set_repeat)>((new std::string("repeat"))->c_str());
	qjs::Value _Fill = context->newObject();
	_Fill[(new std::string("FILL_LINEAR"))->c_str()] = GradientTexture2D::Fill::FILL_LINEAR;
	_Fill[(new std::string("FILL_RADIAL"))->c_str()] = GradientTexture2D::Fill::FILL_RADIAL;
	_Fill[(new std::string("FILL_SQUARE"))->c_str()] = GradientTexture2D::Fill::FILL_SQUARE;
	_module.add("Fill", std::move(_Fill));
	qjs::Value _Repeat = context->newObject();
	_Repeat[(new std::string("REPEAT_NONE"))->c_str()] = GradientTexture2D::Repeat::REPEAT_NONE;
	_Repeat[(new std::string("REPEAT"))->c_str()] = GradientTexture2D::Repeat::REPEAT;
	_Repeat[(new std::string("REPEAT_MIRROR"))->c_str()] = GradientTexture2D::Repeat::REPEAT_MIRROR;
	_module.add("Repeat", std::move(_Repeat));
}