#include "quickjs/str_utils.h"
#include <stddef.h>
#include <cctype>
#include <cstring>
#include <iostream>

std::string underscoreToCamelCase(std::string input) {
	std::string output;
	bool capitalizeNext = false;

	for (char ch : input) {
		if (ch == '_') {
			// 下一个字符应该大写
			capitalizeNext = true;
		} else {
			if (capitalizeNext) {
				output += std::toupper(ch); // 将字符转换为大写
				capitalizeNext = false;
			} else {
				output += ch;
			}
		}
	}
	return output;
}

std::string camelToSnake(std::string input) {
	std::string result;
	for (size_t i = 0; i < input.size(); ++i) {
		if (std::isupper(input[i])) {
			if (i != 0) {
				result += '_';
			}
			result += std::tolower(input[i]);
		} else {
			result += input[i];
		}
	}
	return result;
}

// void js_print_error(JSValue val) {
// 	if (JS_IsException(val)) {
// 		JSValue exception = JS_GetException(context.ctx);
// 		const char *message = JS_ToCString(context.ctx, exception);
// 		printf(message);
// 		JS_FreeCString(context.ctx, message);
// 	}
// }