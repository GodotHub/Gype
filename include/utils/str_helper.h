#ifndef __STR_HELPER_H__
#define __STR_HELPER_H__

#include <string>
namespace godot {

class String;
class StringName;
} //namespace godot

std::string underscoreToCamelCase(std::string input);
std::string camelToSnake(std::string input);
const char *to_chars(godot::String *input);
const char *to_chars(godot::StringName *input);

#endif // __STR_HELPER_H__