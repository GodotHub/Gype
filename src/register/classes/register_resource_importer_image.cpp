
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource_importer_image.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_importer_image_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterImage *resource_importer_image = static_cast<ResourceImporterImage *>(JS_GetOpaque(val, ResourceImporterImage::__class_id));
	if (resource_importer_image)
		ResourceImporterImage::free(nullptr, resource_importer_image);
}

static JSClassDef resource_importer_image_class_def = {
	"ResourceImporterImage",
	.finalizer = resource_importer_image_class_finalizer
};

static JSValue resource_importer_image_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceImporterImage *resource_importer_image_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceImporterImage::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_importer_image_class = memnew(ResourceImporterImage);
	if (!resource_importer_image_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_importer_image_class);
	return obj;
}

static int js_resource_importer_image_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceImporterImage::__class_id);
	classes["ResourceImporterImage"] = ResourceImporterImage::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterImage::__class_id, &resource_importer_image_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterImage::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_image_class_constructor, "ResourceImporterImage", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceImporterImage", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_image_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_image_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterImage");
	return m;
}

JSModuleDef *js_init_resource_importer_image_module(JSContext *ctx) {
	return _js_init_resource_importer_image_module(ctx, "godot/classes/resource_importer_image");
}

void register_resource_importer_image() {
	js_init_resource_importer_image_module(ctx);
}