
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/xr_interface_extension.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void xr_interface_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	XRInterfaceExtension *xr_interface_extension = static_cast<XRInterfaceExtension *>(JS_GetOpaque(val, XRInterfaceExtension::__class_id));
	if (xr_interface_extension)
		memdelete(xr_interface_extension);
}

static JSClassDef xr_interface_extension_class_def = {
	"XRInterfaceExtension",
	.finalizer = xr_interface_extension_class_finalizer
};

static JSValue xr_interface_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, XRInterfaceExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	XRInterfaceExtension *xr_interface_extension_class;
	if (argc == 1) 
		xr_interface_extension_class = static_cast<XRInterfaceExtension *>(Variant(*argv).operator Object *());
	else 
		xr_interface_extension_class = memnew(XRInterfaceExtension);
	if (!xr_interface_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, xr_interface_extension_class);
	return obj;
}
static JSValue xr_interface_extension_class_get_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterfaceExtension::get_color_texture, ctx, this_val, argc, argv);
};
static JSValue xr_interface_extension_class_get_depth_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterfaceExtension::get_depth_texture, ctx, this_val, argc, argv);
};
static JSValue xr_interface_extension_class_get_velocity_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterfaceExtension::get_velocity_texture, ctx, this_val, argc, argv);
};
static JSValue xr_interface_extension_class_add_blit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&XRInterfaceExtension::add_blit, ctx, this_val, argc, argv);
};
static JSValue xr_interface_extension_class_get_render_target_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&XRInterfaceExtension::get_render_target_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry xr_interface_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_color_texture", 0, &xr_interface_extension_class_get_color_texture),
	JS_CFUNC_DEF("get_depth_texture", 0, &xr_interface_extension_class_get_depth_texture),
	JS_CFUNC_DEF("get_velocity_texture", 0, &xr_interface_extension_class_get_velocity_texture),
	JS_CFUNC_DEF("add_blit", 11, &xr_interface_extension_class_add_blit),
	JS_CFUNC_DEF("get_render_target_texture", 1, &xr_interface_extension_class_get_render_target_texture),
};

static void define_xr_interface_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_xr_interface_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_xr_interface_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["XRInterfaceExtension"] = XRInterfaceExtension::__class_id;
	class_id_list.insert(XRInterfaceExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), XRInterfaceExtension::__class_id, &xr_interface_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, XRInterfaceExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, XRInterface::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRInterfaceExtension::__class_id, proto);

	define_xr_interface_extension_property(ctx, proto);
	define_xr_interface_extension_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, xr_interface_extension_class_proto_funcs, _countof(xr_interface_extension_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, xr_interface_extension_class_constructor, "XRInterfaceExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "XRInterfaceExtension", ctor);
	constructors[XRInterfaceExtension::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_xr_interface_extension_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/xr_interface';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xr_interface_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRInterfaceExtension");
	return m;
}

JSModuleDef *js_init_xr_interface_extension_module(JSContext *ctx) {
	return _js_init_xr_interface_extension_module(ctx, "@godot/classes/xr_interface_extension");
}

void register_xr_interface_extension() {
	XRInterfaceExtension::__init_js_class_id();
	js_init_xr_interface_extension_module(ctx);
}