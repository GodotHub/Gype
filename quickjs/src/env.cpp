#include <quickjs/env.h>

qjs::Runtime runtime;
qjs::Context context(runtime);

JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque) {
	char filepath[1024];
	sprintf(filepath, "%s/%s.js", (char *)opaque, module_name); // 构建文件路径
	printf("%s", filepath);
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