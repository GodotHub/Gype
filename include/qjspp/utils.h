#include <string>

#include "qjspp.hpp"

namespace qjs {
class Context;
class Runtime;
}  // namespace qjs

std::string underscoreToCamelCase(const std::string &input);
std::string camelToSnake(const std::string &input);

extern qjs::Runtime *runtime;
extern qjs::Context *context;