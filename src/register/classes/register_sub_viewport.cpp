
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sub_viewport_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef sub_viewport_class_def = {
	"SubViewport",
	.finalizer = sub_viewport_class_finalizer
};

static JSValue sub_viewport_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SubViewport::__class_id);
	if (JS_IsException(obj))
		return obj;
	SubViewport *sub_viewport_class = memnew(SubViewport);
	if (!sub_viewport_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sub_viewport_class);	
	return obj;
}
static JSValue sub_viewport_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewport::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewport::get_size, ctx, this_val, argc, argv);
};
static JSValue sub_viewport_class_set_size_2d_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewport::set_size_2d_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_class_get_size_2d_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewport::get_size_2d_override, ctx, this_val, argc, argv);
};
static JSValue sub_viewport_class_set_size_2d_override_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewport::set_size_2d_override_stretch, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_class_is_size_2d_override_stretch_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewport::is_size_2d_override_stretch_enabled, ctx, this_val, argc, argv);
};
static JSValue sub_viewport_class_set_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewport::set_update_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_class_get_update_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewport::get_update_mode, ctx, this_val, argc, argv);
};
static JSValue sub_viewport_class_set_clear_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewport::set_clear_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_class_get_clear_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewport::get_clear_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sub_viewport_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &sub_viewport_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &sub_viewport_class_get_size),
	JS_CFUNC_DEF("set_size_2d_override", 1, &sub_viewport_class_set_size_2d_override),
	JS_CFUNC_DEF("get_size_2d_override", 0, &sub_viewport_class_get_size_2d_override),
	JS_CFUNC_DEF("set_size_2d_override_stretch", 1, &sub_viewport_class_set_size_2d_override_stretch),
	JS_CFUNC_DEF("is_size_2d_override_stretch_enabled", 0, &sub_viewport_class_is_size_2d_override_stretch_enabled),
	JS_CFUNC_DEF("set_update_mode", 1, &sub_viewport_class_set_update_mode),
	JS_CFUNC_DEF("get_update_mode", 0, &sub_viewport_class_get_update_mode),
	JS_CFUNC_DEF("set_clear_mode", 1, &sub_viewport_class_set_clear_mode),
	JS_CFUNC_DEF("get_clear_mode", 0, &sub_viewport_class_get_clear_mode),
};

void define_sub_viewport_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, sub_viewport_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, sub_viewport_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size_2d_override"),
        JS_NewCFunction(ctx, sub_viewport_class_get_size_2d_override, "get_size_2d_override", 0),
        JS_NewCFunction(ctx, sub_viewport_class_set_size_2d_override, "set_size_2d_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size_2d_override_stretch"),
        JS_NewCFunction(ctx, sub_viewport_class_is_size_2d_override_stretch_enabled, "is_size_2d_override_stretch_enabled", 0),
        JS_NewCFunction(ctx, sub_viewport_class_set_size_2d_override_stretch, "set_size_2d_override_stretch", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "render_target_clear_mode"),
        JS_NewCFunction(ctx, sub_viewport_class_get_clear_mode, "get_clear_mode", 0),
        JS_NewCFunction(ctx, sub_viewport_class_set_clear_mode, "set_clear_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "render_target_update_mode"),
        JS_NewCFunction(ctx, sub_viewport_class_get_update_mode, "get_update_mode", 0),
        JS_NewCFunction(ctx, sub_viewport_class_set_update_mode, "set_update_mode", 1),
        JS_PROP_GETSET
    );
}

static int js_sub_viewport_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SubViewport::__class_id);
	classes["SubViewport"] = SubViewport::__class_id;
	class_id_list.insert(SubViewport::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SubViewport::__class_id, &sub_viewport_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SubViewport::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Viewport::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SubViewport::__class_id, proto);

	define_sub_viewport_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sub_viewport_class_proto_funcs, _countof(sub_viewport_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sub_viewport_class_constructor, "SubViewport", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SubViewport", ctor);

	return 0;
}

JSModuleDef *_js_init_sub_viewport_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/viewport';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sub_viewport_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SubViewport");
	return m;
}

JSModuleDef *js_init_sub_viewport_module(JSContext *ctx) {
	return _js_init_sub_viewport_module(ctx, "godot/classes/sub_viewport");
}

void register_sub_viewport() {
	SubViewport::__init_js_class_id();
	js_init_sub_viewport_module(ctx);
}