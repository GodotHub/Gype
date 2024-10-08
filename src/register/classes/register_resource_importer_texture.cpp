
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_importer_texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceImporterTexture *resource_importer_texture = static_cast<ResourceImporterTexture *>(JS_GetOpaque(val, ResourceImporterTexture::__class_id));
	if (resource_importer_texture)
		ResourceImporterTexture::free(nullptr, resource_importer_texture);
}

static JSClassDef resource_importer_texture_class_def = {
	"ResourceImporterTexture",
	.finalizer = resource_importer_texture_class_finalizer
};

static JSValue resource_importer_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceImporterTexture *resource_importer_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceImporterTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_importer_texture_class = memnew(ResourceImporterTexture);
	if (!resource_importer_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_importer_texture_class);
	return obj;
}

static int js_resource_importer_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceImporterTexture::__class_id);
	classes["ResourceImporterTexture"] = ResourceImporterTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterTexture::__class_id, &resource_importer_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterTexture::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_texture_class_constructor, "ResourceImporterTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceImporterTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterTexture");
	return m;
}

JSModuleDef *js_init_resource_importer_texture_module(JSContext *ctx) {
	return _js_init_resource_importer_texture_module(ctx, "godot/classes/resource_importer_texture");
}

void register_resource_importer_texture() {
	js_init_resource_importer_texture_module(ctx);
}