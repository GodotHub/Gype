#include "quickjs/quickjspp.hpp"

#define ADD_GLOBAL_FUNCTION(func_name, func) context.global().add(#func_name, func);
#define ADD_GDEXTENSION_FUNCTION(func_name) context.global().add(#func_name, internal::gdextension_interface_##func_name);

qjs::Runtime runtime;
qjs::Context context(runtime);