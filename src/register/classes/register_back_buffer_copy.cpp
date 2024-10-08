
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/back_buffer_copy.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void back_buffer_copy_class_finalizer(JSRuntime *rt, JSValue val) {
	BackBufferCopy *back_buffer_copy = static_cast<BackBufferCopy *>(JS_GetOpaque(val, BackBufferCopy::__class_id));
	if (back_buffer_copy)
		BackBufferCopy::free(nullptr, back_buffer_copy);
}

static JSClassDef back_buffer_copy_class_def = {
	"BackBufferCopy",
	.finalizer = back_buffer_copy_class_finalizer
};

static JSValue back_buffer_copy_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BackBufferCopy *back_buffer_copy_class;
	JSValue obj = JS_NewObjectClass(ctx, BackBufferCopy::__class_id);
	if (JS_IsException(obj))
		return obj;
	back_buffer_copy_class = memnew(BackBufferCopy);
	if (!back_buffer_copy_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, back_buffer_copy_class);
	return obj;
}
static JSValue back_buffer_copy_class_set_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BackBufferCopy::set_rect, BackBufferCopy::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue back_buffer_copy_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BackBufferCopy::get_rect, BackBufferCopy::__class_id, ctx, this_val, argv);
};
static JSValue back_buffer_copy_class_set_copy_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BackBufferCopy::set_copy_mode, BackBufferCopy::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue back_buffer_copy_class_get_copy_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BackBufferCopy::get_copy_mode, BackBufferCopy::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry back_buffer_copy_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_rect", 1, &back_buffer_copy_class_set_rect),
	JS_CFUNC_DEF("get_rect", 0, &back_buffer_copy_class_get_rect),
	JS_CFUNC_DEF("set_copy_mode", 1, &back_buffer_copy_class_set_copy_mode),
	JS_CFUNC_DEF("get_copy_mode", 0, &back_buffer_copy_class_get_copy_mode),
};

static int js_back_buffer_copy_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BackBufferCopy::__class_id);
	classes["BackBufferCopy"] = BackBufferCopy::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BackBufferCopy::__class_id, &back_buffer_copy_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BackBufferCopy::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, back_buffer_copy_class_proto_funcs, _countof(back_buffer_copy_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, back_buffer_copy_class_constructor, "BackBufferCopy", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BackBufferCopy", ctor);

	return 0;
}

JSModuleDef *_js_init_back_buffer_copy_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_back_buffer_copy_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BackBufferCopy");
	return m;
}

JSModuleDef *js_init_back_buffer_copy_module(JSContext *ctx) {
	return _js_init_back_buffer_copy_module(ctx, "godot/classes/back_buffer_copy");
}

void register_back_buffer_copy() {
	js_init_back_buffer_copy_module(ctx);
}