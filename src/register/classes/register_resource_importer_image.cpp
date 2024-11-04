
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource_importer_image.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_image_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterImage *resource_importer_image = static_cast<ResourceImporterImage *>(JS_GetOpaque(val, ResourceImporterImage::__class_id));
	if (resource_importer_image)
		memdelete(resource_importer_image);
}

static JSClassDef resource_importer_image_class_def = {
	"ResourceImporterImage",
	.finalizer = resource_importer_image_class_finalizer
};

static JSValue resource_importer_image_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceImporterImage::__class_id);
	if (JS_IsException(obj))
		return obj;

	ResourceImporterImage *resource_importer_image_class;
	if (argc == 1) 
		resource_importer_image_class = static_cast<ResourceImporterImage *>(Variant(*argv).operator Object *());
	else 
		resource_importer_image_class = memnew(ResourceImporterImage);
	if (!resource_importer_image_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_importer_image_class);
	return obj;
}

static void define_resource_importer_image_property(JSContext *ctx, JSValue proto) {
	
}

static void define_resource_importer_image_enum(JSContext *ctx, JSValue proto) {
}

static int js_resource_importer_image_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ResourceImporterImage"] = ResourceImporterImage::__class_id;
	class_id_list.insert(ResourceImporterImage::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterImage::__class_id, &resource_importer_image_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceImporterImage::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterImage::__class_id, proto);

	define_resource_importer_image_property(ctx, proto);
	define_resource_importer_image_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_image_class_constructor, "ResourceImporterImage", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ResourceImporterImage", ctor);
	constructors[ResourceImporterImage::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_resource_importer_image_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_image_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterImage");
	return m;
}

JSModuleDef *js_init_resource_importer_image_module(JSContext *ctx) {
	return _js_init_resource_importer_image_module(ctx, "@godot/classes/resource_importer_image");
}

void register_resource_importer_image() {
	ResourceImporterImage::__init_js_class_id();
	js_init_resource_importer_image_module(ctx);
}