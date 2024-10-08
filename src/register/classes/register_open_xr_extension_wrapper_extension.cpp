
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/classes/open_xrapi_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_extension_wrapper_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRExtensionWrapperExtension *open_xr_extension_wrapper_extension = static_cast<OpenXRExtensionWrapperExtension *>(JS_GetOpaque(val, OpenXRExtensionWrapperExtension::__class_id));
	if (open_xr_extension_wrapper_extension)
		OpenXRExtensionWrapperExtension::free(nullptr, open_xr_extension_wrapper_extension);
}

static JSClassDef open_xr_extension_wrapper_extension_class_def = {
	"OpenXRExtensionWrapperExtension",
	.finalizer = open_xr_extension_wrapper_extension_class_finalizer
};

static JSValue open_xr_extension_wrapper_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRExtensionWrapperExtension *open_xr_extension_wrapper_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRExtensionWrapperExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_extension_wrapper_extension_class = memnew(OpenXRExtensionWrapperExtension);
	if (!open_xr_extension_wrapper_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_extension_wrapper_extension_class);
	return obj;
}
static JSValue open_xr_extension_wrapper_extension_class_get_openxr_api(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&OpenXRExtensionWrapperExtension::get_openxr_api, OpenXRExtensionWrapperExtension::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_extension_wrapper_extension_class_register_extension_wrapper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRExtensionWrapperExtension::register_extension_wrapper, OpenXRExtensionWrapperExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xr_extension_wrapper_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_openxr_api", 0, &open_xr_extension_wrapper_extension_class_get_openxr_api),
	JS_CFUNC_DEF("register_extension_wrapper", 0, &open_xr_extension_wrapper_extension_class_register_extension_wrapper),
};

static int js_open_xr_extension_wrapper_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRExtensionWrapperExtension::__class_id);
	classes["OpenXRExtensionWrapperExtension"] = OpenXRExtensionWrapperExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRExtensionWrapperExtension::__class_id, &open_xr_extension_wrapper_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRExtensionWrapperExtension::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_extension_wrapper_extension_class_proto_funcs, _countof(open_xr_extension_wrapper_extension_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_extension_wrapper_extension_class_constructor, "OpenXRExtensionWrapperExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRExtensionWrapperExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_extension_wrapper_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_extension_wrapper_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRExtensionWrapperExtension");
	return m;
}

JSModuleDef *js_init_open_xr_extension_wrapper_extension_module(JSContext *ctx) {
	return _js_init_open_xr_extension_wrapper_extension_module(ctx, "godot/classes/open_xr_extension_wrapper_extension");
}

void register_open_xr_extension_wrapper_extension() {
	js_init_open_xr_extension_wrapper_extension_module(ctx);
}