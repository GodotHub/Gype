
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource_importer_bm_font.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_importer_bm_font_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef resource_importer_bm_font_class_def = {
	"ResourceImporterBMFont",
	.finalizer = resource_importer_bm_font_class_finalizer
};

static JSValue resource_importer_bm_font_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceImporterBMFont::__class_id);
	if (JS_IsException(obj))
		return obj;
	ResourceImporterBMFont *resource_importer_bm_font_class = memnew(ResourceImporterBMFont);
	if (!resource_importer_bm_font_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_importer_bm_font_class);	
	return obj;
}

void define_resource_importer_bm_font_property(JSContext *ctx, JSValue obj) {
}

static int js_resource_importer_bm_font_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ResourceImporterBMFont::__class_id);
	classes["ResourceImporterBMFont"] = ResourceImporterBMFont::__class_id;
	class_id_list.insert(ResourceImporterBMFont::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceImporterBMFont::__class_id, &resource_importer_bm_font_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceImporterBMFont::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ResourceImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceImporterBMFont::__class_id, proto);

	define_resource_importer_bm_font_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_importer_bm_font_class_constructor, "ResourceImporterBMFont", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourceImporterBMFont", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_importer_bm_font_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_importer_bm_font_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceImporterBMFont");
	return m;
}

JSModuleDef *js_init_resource_importer_bm_font_module(JSContext *ctx) {
	return _js_init_resource_importer_bm_font_module(ctx, "godot/classes/resource_importer_bm_font");
}

void register_resource_importer_bm_font() {
	ResourceImporterBMFont::__init_js_class_id();
	js_init_resource_importer_bm_font_module(ctx);
}