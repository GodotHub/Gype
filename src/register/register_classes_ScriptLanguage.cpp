#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScriptLanguage() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ScriptLanguage>("ScriptLanguage")
			.constructor<>()
			.base<Object>();
	qjs::Value _ScriptNameCasing = context->newObject();
	_ScriptNameCasing[(new std::string("SCRIPT_NAME_CASING_AUTO"))->c_str()] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_AUTO;
	_ScriptNameCasing[(new std::string("SCRIPT_NAME_CASING_PASCAL_CASE"))->c_str()] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_PASCAL_CASE;
	_ScriptNameCasing[(new std::string("SCRIPT_NAME_CASING_SNAKE_CASE"))->c_str()] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_SNAKE_CASE;
	_ScriptNameCasing[(new std::string("SCRIPT_NAME_CASING_KEBAB_CASE"))->c_str()] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_KEBAB_CASE;
	_module.add("ScriptNameCasing", std::move(_ScriptNameCasing));
}