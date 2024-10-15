
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource_importer_mp3.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_mp3_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterMP3 *resource_importer_mp3 = static_cast<ResourceImporterMP3 *>(JS_GetOpaque(val, ResourceImporterMP3::__class_id));
	if (resource_importer_mp3)
		memdelete(resource_importer_mp3);
}

static JSClassDef resource_importer_mp3_class_def = {
	"ResourceImporterMP3",
	.finalizer = resource_importer_mp3_class_finalizer
};

static JSValue resource_importer_mp3_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceImporterMP3::__class_id);
	if (JS_IsException(obj))
		return obj;
	ResourceImporterMP3 *resource_importer_mp3_class = memnew(ResourceImporterMP3);
	if (!resource_importer_mp3_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_importer_mp3_class);	
	return obj;
}

void define_resource_importer_mp3_property(JSContext *ctx, JSValue obj) {
}

static int js_resource_importer_mp3_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ResourceImporterMP3::__class_id);
	classes["ResourceImporterMP3"] = ResourceImporterMP3::__class_id;
	class_id_list.insert(ResourceImporterMP3::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterMP3::__class_id, &resource_importer_mp3_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceImporterMP3::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterMP3::__class_id, proto);

	define_resource_importer_mp3_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_mp3_class_constructor, "ResourceImporterMP3", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourceImporterMP3", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_mp3_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_mp3_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterMP3");
	return m;
}

JSModuleDef *js_init_resource_importer_mp3_module(JSContext *ctx) {
	return _js_init_resource_importer_mp3_module(ctx, "godot/classes/resource_importer_mp3");
}

void register_resource_importer_mp3() {
	ResourceImporterMP3::__init_js_class_id();
	js_init_resource_importer_mp3_module(ctx);
}