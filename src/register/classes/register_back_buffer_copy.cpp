
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/back_buffer_copy.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void back_buffer_copy_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef back_buffer_copy_class_def = {
	"BackBufferCopy",
	.finalizer = back_buffer_copy_class_finalizer
};

static JSValue back_buffer_copy_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, BackBufferCopy::__class_id);
	if (JS_IsException(obj))
		return obj;
	BackBufferCopy *back_buffer_copy_class = memnew(BackBufferCopy);
	if (!back_buffer_copy_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, back_buffer_copy_class);	
	return obj;
}
static JSValue back_buffer_copy_class_set_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BackBufferCopy::set_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue back_buffer_copy_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BackBufferCopy::get_rect, ctx, this_val, argc, argv);
};
static JSValue back_buffer_copy_class_set_copy_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BackBufferCopy::set_copy_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue back_buffer_copy_class_get_copy_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BackBufferCopy::get_copy_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry back_buffer_copy_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_rect", 1, &back_buffer_copy_class_set_rect),
	JS_CFUNC_DEF("get_rect", 0, &back_buffer_copy_class_get_rect),
	JS_CFUNC_DEF("set_copy_mode", 1, &back_buffer_copy_class_set_copy_mode),
	JS_CFUNC_DEF("get_copy_mode", 0, &back_buffer_copy_class_get_copy_mode),
};

void define_back_buffer_copy_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "copy_mode"),
        JS_NewCFunction(ctx, back_buffer_copy_class_get_copy_mode, "get_copy_mode", 0),
        JS_NewCFunction(ctx, back_buffer_copy_class_set_copy_mode, "set_copy_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rect"),
        JS_NewCFunction(ctx, back_buffer_copy_class_get_rect, "get_rect", 0),
        JS_NewCFunction(ctx, back_buffer_copy_class_set_rect, "set_rect", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue CopyMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CopyMode_obj, "COPY_MODE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CopyMode_obj, "COPY_MODE_RECT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CopyMode_obj, "COPY_MODE_VIEWPORT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "CopyMode", CopyMode_obj);
}

static int js_back_buffer_copy_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&BackBufferCopy::__class_id);
	classes["BackBufferCopy"] = BackBufferCopy::__class_id;
	class_id_list.insert(BackBufferCopy::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), BackBufferCopy::__class_id, &back_buffer_copy_class_def);

	JSValue proto = JS_NewObjectClass(ctx, BackBufferCopy::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BackBufferCopy::__class_id, proto);

	define_back_buffer_copy_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, back_buffer_copy_class_proto_funcs, _countof(back_buffer_copy_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, back_buffer_copy_class_constructor, "BackBufferCopy", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "BackBufferCopy", ctor);

	return 0;
}

JSModuleDef *_js_init_back_buffer_copy_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_back_buffer_copy_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BackBufferCopy");
	return m;
}

JSModuleDef *js_init_back_buffer_copy_module(JSContext *ctx) {
	return _js_init_back_buffer_copy_module(ctx, "@godot/classes/back_buffer_copy");
}

void register_back_buffer_copy() {
	BackBufferCopy::__init_js_class_id();
	js_init_back_buffer_copy_module(ctx);
}