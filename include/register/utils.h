#include "qjspp.h"
#include <godot_cpp/godot.hpp>

const char *underscoreToCamelCase(const std::string &input);

#define ADD_GLOBAL_FUNCTION(func_name, func) context.global().add(#func_name, func);
#define ADD_GDEXTENSION_FUNCTION(func_name) context.global().add(underscoreToCamelCase(#func_name), internal::gdextension_interface_##func_name);

extern qjs::Runtime runtime;
extern qjs::Context context;