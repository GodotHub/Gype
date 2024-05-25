#include "qjspp.h"

#define ADD_GLOBAL_FUNCTION(func_name, func) context.global().add(#func_name, func);
#define ADD_GDEXTENSION_FUNCTION(func_name) context.global().add(#func_name, internal::gdextension_interface_##func_name);

extern qjs::Runtime runtime;
extern qjs::Context context;