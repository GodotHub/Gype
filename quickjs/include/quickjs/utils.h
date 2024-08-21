#ifndef QUICKJS_UTILS
#define QUICKJS_UTILS

#include "qjspp.h"
#include <string>

std::string underscoreToCamelCase(const std::string &input);
std::string camelToSnake(const std::string &input);
JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque);
void js_print_error(JSValue val);

extern qjs::Context context;
extern qjs::Runtime runtime;

#endif // !QUICKJS_UTILS