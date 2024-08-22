#ifndef QUICKJS_UTILS
#define QUICKJS_UTILS

#include <string>

std::string underscoreToCamelCase(const std::string &input);
std::string camelToSnake(const std::string &input);
// void js_print_error(JSValue val);

#endif // !QUICKJS_UTILS