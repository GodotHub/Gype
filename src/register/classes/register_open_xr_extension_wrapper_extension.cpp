
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_extension_wrapper_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_extension_wrapper_extension_class_def = {
	"OpenXRExtensionWrapperExtension",
	.finalizer = open_xr_extension_wrapper_extension_class_finalizer
};

static JSValue open_xr_extension_wrapper_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRExtensionWrapperExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	OpenXRExtensionWrapperExtension *open_xr_extension_wrapper_extension_class;
	if (argc == 1) 
		open_xr_extension_wrapper_extension_class = static_cast<OpenXRExtensionWrapperExtension *>(Variant(*argv).operator Object *());
	else 
		open_xr_extension_wrapper_extension_class = memnew(OpenXRExtensionWrapperExtension);
	if (!open_xr_extension_wrapper_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_extension_wrapper_extension_class);
	return obj;
}
static JSValue open_xr_extension_wrapper_extension_class_get_openxr_api(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&OpenXRExtensionWrapperExtension::get_openxr_api, ctx, this_val, argc, argv);
};
static JSValue open_xr_extension_wrapper_extension_class_register_extension_wrapper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRExtensionWrapperExtension::register_extension_wrapper, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xr_extension_wrapper_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_openxr_api", 0, &open_xr_extension_wrapper_extension_class_get_openxr_api),
	JS_CFUNC_DEF("register_extension_wrapper", 0, &open_xr_extension_wrapper_extension_class_register_extension_wrapper),
};

static void define_open_xr_extension_wrapper_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_open_xr_extension_wrapper_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_open_xr_extension_wrapper_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OpenXRExtensionWrapperExtension"] = OpenXRExtensionWrapperExtension::__class_id;
	class_id_list.insert(OpenXRExtensionWrapperExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRExtensionWrapperExtension::__class_id, &open_xr_extension_wrapper_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRExtensionWrapperExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRExtensionWrapperExtension::__class_id, proto);

	define_open_xr_extension_wrapper_extension_property(ctx, proto);
	define_open_xr_extension_wrapper_extension_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_extension_wrapper_extension_class_proto_funcs, _countof(open_xr_extension_wrapper_extension_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_extension_wrapper_extension_class_constructor, "OpenXRExtensionWrapperExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRExtensionWrapperExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_extension_wrapper_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_extension_wrapper_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRExtensionWrapperExtension");
	return m;
}

JSModuleDef *js_init_open_xr_extension_wrapper_extension_module(JSContext *ctx) {
	return _js_init_open_xr_extension_wrapper_extension_module(ctx, "@godot/classes/open_xr_extension_wrapper_extension");
}

void register_open_xr_extension_wrapper_extension() {
	OpenXRExtensionWrapperExtension::__init_js_class_id();
	js_init_open_xr_extension_wrapper_extension_module(ctx);
}