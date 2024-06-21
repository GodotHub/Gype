#include "qjspp/utils.h"
#include "qjspp.hpp"
#include <stddef.h>
#include <cctype>

qjs::Runtime *runtime = new qjs::Runtime();
qjs::Context *context = new qjs::Context(*runtime);

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

static JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque) {
	char filename[256];
	snprintf(filename, sizeof(filename), "%s.js", module_name);

	FILE *file = fopen(filename, "r");
	if (!file) {
		fprintf(stderr, "Failed to open file: %s\n", filename);
		return NULL;
	}

	fseek(file, 0, SEEK_END);
	long length = ftell(file);
	fseek(file, 0, SEEK_SET);
	char *source_code = (char *)malloc(length + 1);
	if (source_code) {
		fread(source_code, 1, length, file);
		source_code[length] = '\0';
	}
	fclose(file);

	if (!source_code) {
		fprintf(stderr, "Failed to read file: %s\n", filename);
		return NULL;
	}

	JSValue module_val = JS_Eval(ctx, source_code, length, module_name, JS_EVAL_TYPE_MODULE);
	free(source_code);

	if (JS_IsException(module_val)) {
		JSValue exception = JS_GetException(ctx);
		const char *exception_str = JS_ToCString(ctx, exception);
		fprintf(stderr, "Module load error: %s\n", exception_str);
		JS_FreeCString(ctx, exception_str);
		JS_FreeValue(ctx, exception);
		return NULL;
	}

	JSModuleDef *m = (JSModuleDef *)JS_VALUE_GET_PTR(module_val);
	JS_FreeValue(ctx, module_val);
	return m;
}

void init_module() {
	JS_SetModuleLoaderFunc(runtime->rt, NULL, module_loader, NULL);
}