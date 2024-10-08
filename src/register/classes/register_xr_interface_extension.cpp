
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_interface_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_interface_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	XRInterfaceExtension *xr_interface_extension = static_cast<XRInterfaceExtension *>(JS_GetOpaque(val, XRInterfaceExtension::__class_id));
	if (xr_interface_extension)
		XRInterfaceExtension::free(nullptr, xr_interface_extension);
}

static JSClassDef xr_interface_extension_class_def = {
	"XRInterfaceExtension",
	.finalizer = xr_interface_extension_class_finalizer
};

static JSValue xr_interface_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRInterfaceExtension *xr_interface_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, XRInterfaceExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	xr_interface_extension_class = memnew(XRInterfaceExtension);
	if (!xr_interface_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xr_interface_extension_class);
	return obj;
}
static JSValue xr_interface_extension_class_get_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterfaceExtension::get_color_texture, XRInterfaceExtension::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_extension_class_get_depth_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterfaceExtension::get_depth_texture, XRInterfaceExtension::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_extension_class_get_velocity_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterfaceExtension::get_velocity_texture, XRInterfaceExtension::__class_id, ctx, this_val, argv);
};
static JSValue xr_interface_extension_class_add_blit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&XRInterfaceExtension::add_blit, XRInterfaceExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xr_interface_extension_class_get_render_target_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRInterfaceExtension::get_render_target_texture, XRInterfaceExtension::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xr_interface_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_color_texture", 0, &xr_interface_extension_class_get_color_texture),
	JS_CFUNC_DEF("get_depth_texture", 0, &xr_interface_extension_class_get_depth_texture),
	JS_CFUNC_DEF("get_velocity_texture", 0, &xr_interface_extension_class_get_velocity_texture),
	JS_CFUNC_DEF("add_blit", 11, &xr_interface_extension_class_add_blit),
	JS_CFUNC_DEF("get_render_target_texture", 1, &xr_interface_extension_class_get_render_target_texture),
};

static int js_xr_interface_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRInterfaceExtension::__class_id);
	classes["XRInterfaceExtension"] = XRInterfaceExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRInterfaceExtension::__class_id, &xr_interface_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, XRInterface::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRInterfaceExtension::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_interface_extension_class_proto_funcs, _countof(xr_interface_extension_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xr_interface_extension_class_constructor, "XRInterfaceExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRInterfaceExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_xr_interface_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_interface_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRInterfaceExtension");
	return m;
}

JSModuleDef *js_init_xr_interface_extension_module(JSContext *ctx) {
	return _js_init_xr_interface_extension_module(ctx, "godot/classes/xr_interface_extension");
}

void register_xr_interface_extension() {
	js_init_xr_interface_extension_module(ctx);
}