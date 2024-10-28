
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_importer_layered_texture.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_importer_layered_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef resource_importer_layered_texture_class_def = {
	"ResourceImporterLayeredTexture",
	.finalizer = resource_importer_layered_texture_class_finalizer
};

static JSValue resource_importer_layered_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceImporterLayeredTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	ResourceImporterLayeredTexture *resource_importer_layered_texture_class = memnew(ResourceImporterLayeredTexture);
	if (!resource_importer_layered_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_importer_layered_texture_class);
	return obj;
}

void define_resource_importer_layered_texture_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_resource_importer_layered_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceImporterLayeredTexture::__class_id);
	classes["ResourceImporterLayeredTexture"] = ResourceImporterLayeredTexture::__class_id;
	class_id_list.insert(ResourceImporterLayeredTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterLayeredTexture::__class_id, &resource_importer_layered_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceImporterLayeredTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterLayeredTexture::__class_id, proto);

	define_resource_importer_layered_texture_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_layered_texture_class_constructor, "ResourceImporterLayeredTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourceImporterLayeredTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_layered_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_layered_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterLayeredTexture");
	return m;
}

JSModuleDef *js_init_resource_importer_layered_texture_module(JSContext *ctx) {
	return _js_init_resource_importer_layered_texture_module(ctx, "godot/classes/resource_importer_layered_texture");
}

void register_resource_importer_layered_texture() {
	ResourceImporterLayeredTexture::__init_js_class_id();
	js_init_resource_importer_layered_texture_module(ctx);
}