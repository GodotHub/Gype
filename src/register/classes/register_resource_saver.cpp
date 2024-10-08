
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_saver_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceSaver *resource_saver = static_cast<ResourceSaver *>(JS_GetOpaque(val, ResourceSaver::__class_id));
	if (resource_saver)
		ResourceSaver::free(nullptr, resource_saver);
}

static JSClassDef resource_saver_class_def = {
	"ResourceSaver",
	.finalizer = resource_saver_class_finalizer
};

static JSValue resource_saver_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceSaver *resource_saver_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceSaver::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_saver_class = ResourceSaver::get_singleton();
	if (!resource_saver_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_saver_class);
	return obj;
}
static JSValue resource_saver_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceSaver::save, ResourceSaver::__class_id, ctx, this_val, argv);
};
static JSValue resource_saver_class_get_recognized_extensions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceSaver::get_recognized_extensions, ResourceSaver::__class_id, ctx, this_val, argv);
};
static JSValue resource_saver_class_add_resource_format_saver(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceSaver::add_resource_format_saver, ResourceSaver::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_saver_class_remove_resource_format_saver(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceSaver::remove_resource_format_saver, ResourceSaver::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry resource_saver_class_proto_funcs[] = {
	JS_CFUNC_DEF("save", 3, &resource_saver_class_save),
	JS_CFUNC_DEF("get_recognized_extensions", 1, &resource_saver_class_get_recognized_extensions),
	JS_CFUNC_DEF("add_resource_format_saver", 2, &resource_saver_class_add_resource_format_saver),
	JS_CFUNC_DEF("remove_resource_format_saver", 1, &resource_saver_class_remove_resource_format_saver),
};

static int js_resource_saver_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceSaver::__class_id);
	classes["ResourceSaver"] = ResourceSaver::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceSaver::__class_id, &resource_saver_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceSaver::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_saver_class_proto_funcs, _countof(resource_saver_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, resource_saver_class_constructor, "ResourceSaver", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceSaver", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_saver_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_saver_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceSaver");
	return m;
}

JSModuleDef *js_init_resource_saver_module(JSContext *ctx) {
	return _js_init_resource_saver_module(ctx, "godot/classes/resource_saver");
}

void register_resource_saver() {
	js_init_resource_saver_module(ctx);
}