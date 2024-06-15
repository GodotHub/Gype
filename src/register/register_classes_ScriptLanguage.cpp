#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/classes/object.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ScriptLanguage() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ScriptLanguage>("ScriptLanguage")
            .constructor<>()
            .base<Object>()
;    qjs::Value _ScriptNameCasing = context->newObject();
    _ScriptNameCasing["SCRIPT_NAME_CASING_AUTO"] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_AUTO;
    _ScriptNameCasing["SCRIPT_NAME_CASING_PASCAL_CASE"] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_PASCAL_CASE;
    _ScriptNameCasing["SCRIPT_NAME_CASING_SNAKE_CASE"] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_SNAKE_CASE;
    _ScriptNameCasing["SCRIPT_NAME_CASING_KEBAB_CASE"] = ScriptLanguage::ScriptNameCasing::SCRIPT_NAME_CASING_KEBAB_CASE;
    _module.add("ScriptNameCasing", std::move(_ScriptNameCasing));
}