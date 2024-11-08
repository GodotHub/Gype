#include "quickjs/quickjs.h"
#include "support/typescript.hpp"
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <optional>
#include <string>

using namespace godot;

JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque) {
	char filepath[1024];
	sprintf(filepath, "%s.js", module_name);
	// printf("%s\n", filepath);
	String path = godot::String(filepath);
	if (path.begins_with("@res")) {
		path = path.replace("@res", "res://");
	} else if (path.begins_with("@godot/core")) {
		path = path.replace("@godot", "res://dist/addons/gype/godot");
	}

	Ref<TypeScript> script = godot::ResourceLoader::get_singleton()->load(path);

	if (script.is_null()) {
		return NULL;
	}

	String code = script->_get_source_code();
	std::string code_str = code.utf8().get_data();
	const char *buf = code_str.c_str();
	size_t buf_len = strlen(buf);

	// 编译模块
	JSValue func_val;
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