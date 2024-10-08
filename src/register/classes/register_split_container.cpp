
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/split_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void split_container_class_finalizer(JSRuntime *rt, JSValue val) {
	SplitContainer *split_container = static_cast<SplitContainer *>(JS_GetOpaque(val, SplitContainer::__class_id));
	if (split_container)
		SplitContainer::free(nullptr, split_container);
}

static JSClassDef split_container_class_def = {
	"SplitContainer",
	.finalizer = split_container_class_finalizer
};

static JSValue split_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SplitContainer *split_container_class;
	JSValue obj = JS_NewObjectClass(ctx, SplitContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	split_container_class = memnew(SplitContainer);
	if (!split_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, split_container_class);
	return obj;
}
static JSValue split_container_class_set_split_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SplitContainer::set_split_offset, SplitContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue split_container_class_get_split_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SplitContainer::get_split_offset, SplitContainer::__class_id, ctx, this_val, argv);
};
static JSValue split_container_class_clamp_split_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SplitContainer::clamp_split_offset, SplitContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue split_container_class_set_collapsed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SplitContainer::set_collapsed, SplitContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue split_container_class_is_collapsed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SplitContainer::is_collapsed, SplitContainer::__class_id, ctx, this_val, argv);
};
static JSValue split_container_class_set_dragger_visibility(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SplitContainer::set_dragger_visibility, SplitContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue split_container_class_get_dragger_visibility(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SplitContainer::get_dragger_visibility, SplitContainer::__class_id, ctx, this_val, argv);
};
static JSValue split_container_class_set_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SplitContainer::set_vertical, SplitContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue split_container_class_is_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SplitContainer::is_vertical, SplitContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry split_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_split_offset", 1, &split_container_class_set_split_offset),
	JS_CFUNC_DEF("get_split_offset", 0, &split_container_class_get_split_offset),
	JS_CFUNC_DEF("clamp_split_offset", 0, &split_container_class_clamp_split_offset),
	JS_CFUNC_DEF("set_collapsed", 1, &split_container_class_set_collapsed),
	JS_CFUNC_DEF("is_collapsed", 0, &split_container_class_is_collapsed),
	JS_CFUNC_DEF("set_dragger_visibility", 1, &split_container_class_set_dragger_visibility),
	JS_CFUNC_DEF("get_dragger_visibility", 0, &split_container_class_get_dragger_visibility),
	JS_CFUNC_DEF("set_vertical", 1, &split_container_class_set_vertical),
	JS_CFUNC_DEF("is_vertical", 0, &split_container_class_is_vertical),
};

static int js_split_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SplitContainer::__class_id);
	classes["SplitContainer"] = SplitContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SplitContainer::__class_id, &split_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SplitContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, split_container_class_proto_funcs, _countof(split_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, split_container_class_constructor, "SplitContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SplitContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_split_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_split_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SplitContainer");
	return m;
}

JSModuleDef *js_init_split_container_module(JSContext *ctx) {
	return _js_init_split_container_module(ctx, "godot/classes/split_container");
}

void register_split_container() {
	js_init_split_container_module(ctx);
}