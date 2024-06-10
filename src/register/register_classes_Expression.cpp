#include <godot_cpp/classes/expression.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Expression() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Expression>("Expression")
			.constructor<>()
			.fun<static_cast<Error (Expression::*)(const String &, const PackedStringArray &)>(&Expression::parse)>("parse")
			.fun<static_cast<Variant (Expression::*)(const Array &, Object *, bool, bool)>(&Expression::execute)>("execute")
			.fun<static_cast<bool (Expression::*)() const>(&Expression::has_execute_failed)>("has_execute_failed")
			.fun<static_cast<String (Expression::*)() const>(&Expression::get_error_text)>("get_error_text");
}