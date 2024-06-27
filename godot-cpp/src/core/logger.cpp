#include <godot_cpp/core/logger.hpp>

using namespace JSGodot;

void Logger::__print(const char *format, ...) {
	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
}

void Logger::print_line(const char *p_content) {
	Logger::__print("%s", p_content);
}