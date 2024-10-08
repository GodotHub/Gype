
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_format_saver_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceFormatSaver *resource_format_saver = static_cast<ResourceFormatSaver *>(JS_GetOpaque(val, ResourceFormatSaver::__class_id));
	if (resource_format_saver)
		ResourceFormatSaver::free(nullptr, resource_format_saver);
}

static JSClassDef resource_format_saver_class_def = {
	"ResourceFormatSaver",
	.finalizer = resource_format_saver_class_finalizer
};

static JSValue resource_format_saver_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceFormatSaver *resource_format_saver_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceFormatSaver::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_format_saver_class = memnew(ResourceFormatSaver);
	if (!resource_format_saver_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_format_saver_class);
	return obj;
}

static int js_resource_format_saver_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceFormatSaver::__class_id);
	classes["ResourceFormatSaver"] = ResourceFormatSaver::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceFormatSaver::__class_id, &resource_format_saver_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceFormatSaver::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_format_saver_class_constructor, "ResourceFormatSaver", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceFormatSaver", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_format_saver_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_format_saver_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceFormatSaver");
	return m;
}

JSModuleDef *js_init_resource_format_saver_module(JSContext *ctx) {
	return _js_init_resource_format_saver_module(ctx, "godot/classes/resource_format_saver");
}

void register_resource_format_saver() {
	js_init_resource_format_saver_module(ctx);
}