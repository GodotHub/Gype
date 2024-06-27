#include <string>

#include "qjspp.hpp"

std::string underscoreToCamelCase(const std::string &input);
std::string camelToSnake(const std::string &input);
JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque);

extern qjs::Runtime runtime;
extern qjs::Context context;