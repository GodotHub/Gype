#include "qjspp/utils.h"

#include <stddef.h>
#include <cctype>
#include <string>

qjs::Runtime runtime;
qjs::Context context(runtime);

std::string underscoreToCamelCase(const std::string &input) {
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

std::string camelToSnake(const std::string &input) {
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