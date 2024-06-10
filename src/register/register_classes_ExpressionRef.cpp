#include "register/register_classes.h"
#include <godot_cpp/classes/expression.hpp>

using namespace godot;

void register_classes_ExpressionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Expression>>("ExpressionRef").constructor<Expression *>();
}