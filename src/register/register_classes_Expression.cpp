#include <godot_cpp/classes/expression.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Expression() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Expression>("Expression")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (Expression::*)(const String &, const PackedStringArray &)>(&Expression::parse)>((new std::string("parse"))->c_str())
			.fun<static_cast<Variant (Expression::*)(const Array &, Object *, bool, bool)>(&Expression::execute)>((new std::string("execute"))->c_str())
			.fun<static_cast<bool (Expression::*)() const>(&Expression::has_execute_failed)>((new std::string("has_execute_failed"))->c_str())
			.fun<static_cast<String (Expression::*)() const>(&Expression::get_error_text)>((new std::string("get_error_text"))->c_str());
}