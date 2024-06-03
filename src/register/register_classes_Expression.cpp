#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/expression.hpp>

using namespace godot;

void register_classes_Expression() {
    qjs::Context::Module &_module = _General;
    _module.class_<Expression>("Expression")
           .constructor<>()
		    .fun<static_cast<Error(Expression::*)(const String &,const PackedStringArray &)>(&Expression::parse)>("parse")
		    .fun<static_cast<Variant(Expression::*)(const Array &,Object *,bool,bool)>(&Expression::execute)>("execute")
		    .fun<static_cast<bool(Expression::*)()const>(&Expression::has_execute_failed)>("has_execute_failed")
		    .fun<static_cast<String(Expression::*)()const>(&Expression::get_error_text)>("get_error_text")
;}