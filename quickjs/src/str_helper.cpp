#include "quickjs/str_helper.h"
#include <stddef.h>
#include <cctype>
#include <cstring>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <iostream>
#include <regex>

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
	std::string result = input;

	// 处理连续的大写字母，例如 "HTTPRequestID" -> "HTTP_Request_ID"
	result = std::regex_replace(result, std::regex("([A-Z]+)([A-Z][a-z]|[0-9])"), "$1_$2");

	// 处理驼峰命名，例如 "camelCase" -> "camel_Case"
	result = std::regex_replace(result, std::regex("([a-z0-9])([A-Z])"), "$1_$2");

	// 转换为全小写
	for (auto &c : result) {
		c = std::tolower(c);
	}

	return result;
}
const char *to_chars(godot::String *input) {
	return std::string(input->utf8().get_data()).c_str();
}

const char *to_chars(godot::StringName *input) {
	return std::string(godot::String(*input).utf8().get_data()).c_str();
}
