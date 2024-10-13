
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_anchor3d.hpp>
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_anchor3d_class_finalizer(JSRuntime *rt, JSValue val) {
	XRAnchor3D *xr_anchor3d = static_cast<XRAnchor3D *>(JS_GetOpaque(val, XRAnchor3D::__class_id));
	if (xr_anchor3d)
		XRAnchor3D::free(nullptr, xr_anchor3d);
}

static JSClassDef xr_anchor3d_class_def = {
	"XRAnchor3D",
	.finalizer = xr_anchor3d_class_finalizer
};

static JSValue xr_anchor3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRAnchor3D *xr_anchor3d_class;
	JSValue obj = JS_NewObjectClass(ctx, XRAnchor3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_anchor3d_class = memnew(XRAnchor3D);
	if (!xr_anchor3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_anchor3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue xr_anchor3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRAnchor3D::get_size, ctx, this_val, argc, argv);
};
static JSValue xr_anchor3d_class_get_plane(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRAnchor3D::get_plane, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_anchor3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_size", 0, &xr_anchor3d_class_get_size),
	JS_CFUNC_DEF("get_plane", 0, &xr_anchor3d_class_get_plane),
};

void define_xr_anchor3d_property(JSContext *ctx, JSValue obj) {
}

static int js_xr_anchor3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&XRAnchor3D::__class_id);
	classes["XRAnchor3D"] = XRAnchor3D::__class_id;
	class_id_list.insert(XRAnchor3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRAnchor3D::__class_id, &xr_anchor3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRNode3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRAnchor3D::__class_id, proto);
	define_xr_anchor3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_anchor3d_class_proto_funcs, _countof(xr_anchor3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_anchor3d_class_constructor, "XRAnchor3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "XRAnchor3D", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_anchor3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/xr_node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_anchor3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRAnchor3D");
	return m;
}

JSModuleDef *js_init_xr_anchor3d_module(JSContext *ctx) {
	return _js_init_xr_anchor3d_module(ctx, "godot/classes/xr_anchor3d");
}

void register_xr_anchor3d() {
	XRAnchor3D::__init_js_class_id();
	js_init_xr_anchor3d_module(ctx);
}