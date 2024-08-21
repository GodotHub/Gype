#include "quickjs/utils.h"
#include <stddef.h>
#include <cctype>
#include <cstring>
#include <iostream>

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

JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque) {
	char filepath[1024];
	sprintf(filepath, "%s/%s.js", (char *)opaque, module_name); // 构建文件路径
	std::optional<std::string> opt;
	JSValue func_val;

	opt = qjs::detail::readFile(filepath);
	if (!opt.has_value()) {
		return NULL;
	}
	char *buf = (char *)opt.value().c_str();
	size_t buf_len = strlen(buf);

	// 编译模块
	func_val = JS_Eval(ctx, (char *)buf, buf_len, module_name, JS_EVAL_TYPE_MODULE | JS_EVAL_FLAG_COMPILE_ONLY);
	if (JS_IsException(func_val)) {
		JS_FreeValue(ctx, func_val);
		return NULL;
	}

	// 获取模块定义
	JSModuleDef *m = (JSModuleDef *)JS_VALUE_GET_PTR(func_val);
	JS_FreeValue(ctx, func_val);
	return m;
}

void js_print_error(JSValue val) {
	if (JS_IsException(val)) {
		JSValue exception = JS_GetException(context.ctx);
		const char *message = JS_ToCString(context.ctx, exception);
		printf(message);
		JS_FreeCString(context.ctx, message);
	}
}