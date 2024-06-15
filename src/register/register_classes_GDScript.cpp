#include <godot_cpp/classes/gd_script.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GDScript() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GDScript>("GDScript")
			.constructor<>()
			.base<Script>()
			.fun<static_cast<Variant (GDScript::*)(rest<godot::Variant>)>(&GDScript::new_)>("new");
}