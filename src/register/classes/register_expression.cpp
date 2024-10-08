
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/expression.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void expression_class_finalizer(JSRuntime *rt, JSValue val) {
	Expression *expression = static_cast<Expression *>(JS_GetOpaque(val, Expression::__class_id));
	if (expression)
		Expression::free(nullptr, expression);
}

static JSClassDef expression_class_def = {
	"Expression",
	.finalizer = expression_class_finalizer
};

static JSValue expression_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Expression *expression_class;
	JSValue obj = JS_NewObjectClass(ctx, Expression::__class_id);
	if (JS_IsException(obj))
		return obj;
	expression_class = memnew(Expression);
	if (!expression_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, expression_class);
	return obj;
}
static JSValue expression_class_parse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Expression::parse, Expression::__class_id, ctx, this_val, argv);
};
static JSValue expression_class_execute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Expression::execute, Expression::__class_id, ctx, this_val, argv);
};
static JSValue expression_class_has_execute_failed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Expression::has_execute_failed, Expression::__class_id, ctx, this_val, argv);
};
static JSValue expression_class_get_error_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Expression::get_error_text, Expression::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry expression_class_proto_funcs[] = {
	JS_CFUNC_DEF("parse", 2, &expression_class_parse),
	JS_CFUNC_DEF("execute", 4, &expression_class_execute),
	JS_CFUNC_DEF("has_execute_failed", 0, &expression_class_has_execute_failed),
	JS_CFUNC_DEF("get_error_text", 0, &expression_class_get_error_text),
};

static int js_expression_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Expression::__class_id);
	classes["Expression"] = Expression::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Expression::__class_id, &expression_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Expression::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, expression_class_proto_funcs, _countof(expression_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, expression_class_constructor, "Expression", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Expression", ctor);

	return 0;
}

JSModuleDef *_js_init_expression_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_expression_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Expression");
	return m;
}

JSModuleDef *js_init_expression_module(JSContext *ctx) {
	return _js_init_expression_module(ctx, "godot/classes/expression");
}

void register_expression() {
	js_init_expression_module(ctx);
}