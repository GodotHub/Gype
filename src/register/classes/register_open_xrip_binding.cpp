
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xrip_binding_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRIPBinding *open_xrip_binding = static_cast<OpenXRIPBinding *>(JS_GetOpaque(val, OpenXRIPBinding::__class_id));
	if (open_xrip_binding)
		OpenXRIPBinding::free(nullptr, open_xrip_binding);
}

static JSClassDef open_xrip_binding_class_def = {
	"OpenXRIPBinding",
	.finalizer = open_xrip_binding_class_finalizer
};

static JSValue open_xrip_binding_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRIPBinding *open_xrip_binding_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRIPBinding::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xrip_binding_class = memnew(OpenXRIPBinding);
	if (!open_xrip_binding_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xrip_binding_class);
	return obj;
}
static JSValue open_xrip_binding_class_set_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRIPBinding::set_action, OpenXRIPBinding::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrip_binding_class_get_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRIPBinding::get_action, OpenXRIPBinding::__class_id, ctx, this_val, argv);
};
static JSValue open_xrip_binding_class_get_path_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRIPBinding::get_path_count, OpenXRIPBinding::__class_id, ctx, this_val, argv);
};
static JSValue open_xrip_binding_class_set_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRIPBinding::set_paths, OpenXRIPBinding::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrip_binding_class_get_paths(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRIPBinding::get_paths, OpenXRIPBinding::__class_id, ctx, this_val, argv);
};
static JSValue open_xrip_binding_class_has_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRIPBinding::has_path, OpenXRIPBinding::__class_id, ctx, this_val, argv);
};
static JSValue open_xrip_binding_class_add_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRIPBinding::add_path, OpenXRIPBinding::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xrip_binding_class_remove_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRIPBinding::remove_path, OpenXRIPBinding::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xrip_binding_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_action", 1, &open_xrip_binding_class_set_action),
	JS_CFUNC_DEF("get_action", 0, &open_xrip_binding_class_get_action),
	JS_CFUNC_DEF("get_path_count", 0, &open_xrip_binding_class_get_path_count),
	JS_CFUNC_DEF("set_paths", 1, &open_xrip_binding_class_set_paths),
	JS_CFUNC_DEF("get_paths", 0, &open_xrip_binding_class_get_paths),
	JS_CFUNC_DEF("has_path", 1, &open_xrip_binding_class_has_path),
	JS_CFUNC_DEF("add_path", 1, &open_xrip_binding_class_add_path),
	JS_CFUNC_DEF("remove_path", 1, &open_xrip_binding_class_remove_path),
};

static int js_open_xrip_binding_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRIPBinding::__class_id);
	classes["OpenXRIPBinding"] = OpenXRIPBinding::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRIPBinding::__class_id, &open_xrip_binding_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRIPBinding::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xrip_binding_class_proto_funcs, _countof(open_xrip_binding_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xrip_binding_class_constructor, "OpenXRIPBinding", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRIPBinding", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xrip_binding_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xrip_binding_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRIPBinding");
	return m;
}

JSModuleDef *js_init_open_xrip_binding_module(JSContext *ctx) {
	return _js_init_open_xrip_binding_module(ctx, "godot/classes/open_xrip_binding");
}

void register_open_xrip_binding() {
	js_init_open_xrip_binding_module(ctx);
}