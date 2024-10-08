
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_importer_csv_translation.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_importer_csv_translation_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterCSVTranslation *resource_importer_csv_translation = static_cast<ResourceImporterCSVTranslation *>(JS_GetOpaque(val, ResourceImporterCSVTranslation::__class_id));
	if (resource_importer_csv_translation)
		ResourceImporterCSVTranslation::free(nullptr, resource_importer_csv_translation);
}

static JSClassDef resource_importer_csv_translation_class_def = {
	"ResourceImporterCSVTranslation",
	.finalizer = resource_importer_csv_translation_class_finalizer
};

static JSValue resource_importer_csv_translation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceImporterCSVTranslation *resource_importer_csv_translation_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceImporterCSVTranslation::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_importer_csv_translation_class = memnew(ResourceImporterCSVTranslation);
	if (!resource_importer_csv_translation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_importer_csv_translation_class);
	return obj;
}

static int js_resource_importer_csv_translation_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceImporterCSVTranslation::__class_id);
	classes["ResourceImporterCSVTranslation"] = ResourceImporterCSVTranslation::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterCSVTranslation::__class_id, &resource_importer_csv_translation_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterCSVTranslation::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_csv_translation_class_constructor, "ResourceImporterCSVTranslation", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceImporterCSVTranslation", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_csv_translation_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_csv_translation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterCSVTranslation");
	return m;
}

JSModuleDef *js_init_resource_importer_csv_translation_module(JSContext *ctx) {
	return _js_init_resource_importer_csv_translation_module(ctx, "godot/classes/resource_importer_csv_translation");
}

void register_resource_importer_csv_translation() {
	js_init_resource_importer_csv_translation_module(ctx);
}