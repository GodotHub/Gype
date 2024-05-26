#include "register/utils.h"
#include <cctype>
#include <iostream>
#include <string>

qjs::Runtime runtime;
qjs::Context context(runtime);

const char *underscoreToCamelCase(const std::string &input) {
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
	return output.c_str();
}