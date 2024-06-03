#include "qjspp.hpp"
#include <godot_cpp/godot.hpp>

std::string underscoreToCamelCase(const std::string &input);
std::string camelToSnake(const std::string &input);

extern qjs::Runtime runtime;
extern qjs::Context context;