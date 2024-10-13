
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource_importer_wav.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_wav_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterWAV *resource_importer_wav = static_cast<ResourceImporterWAV *>(JS_GetOpaque(val, ResourceImporterWAV::__class_id));
	if (resource_importer_wav)
		ResourceImporterWAV::free(nullptr, resource_importer_wav);
}

static JSClassDef resource_importer_wav_class_def = {
	"ResourceImporterWAV",
	.finalizer = resource_importer_wav_class_finalizer
};

static JSValue resource_importer_wav_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceImporterWAV *resource_importer_wav_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceImporterWAV::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_importer_wav_class = memnew(ResourceImporterWAV);
	if (!resource_importer_wav_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_importer_wav_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_resource_importer_wav_property(JSContext *ctx, JSValue obj) {
}

static int js_resource_importer_wav_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ResourceImporterWAV::__class_id);
	classes["ResourceImporterWAV"] = ResourceImporterWAV::__class_id;
	class_id_list.insert(ResourceImporterWAV::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterWAV::__class_id, &resource_importer_wav_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterWAV::__class_id, proto);
	define_resource_importer_wav_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_wav_class_constructor, "ResourceImporterWAV", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourceImporterWAV", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_wav_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_wav_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterWAV");
	return m;
}

JSModuleDef *js_init_resource_importer_wav_module(JSContext *ctx) {
	return _js_init_resource_importer_wav_module(ctx, "godot/classes/resource_importer_wav");
}

void register_resource_importer_wav() {
	ResourceImporterWAV::__init_js_class_id();
	js_init_resource_importer_wav_module(ctx);
}