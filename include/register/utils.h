#include "qjspp.h"

const char *underscoreToCamelCase(const std::string &input);

#define ADD_GLOBAL_FUNCTION(func_name, func) context.global().add(#func_name, func);
#define ADD_GDEXTENSION_FUNCTION(func_name) context.global().add(underscoreToCamelCase(#func_name), internal::gdextension_interface_##func_name);

#define LOAD_PROC_ADDRESS(m_name, m_type) internal::gdextension_interface_##m_name = (m_type)internal::gdextension_interface_get_proc_address(#m_name);

extern qjs::Runtime runtime;
extern qjs::Context context;