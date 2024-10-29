
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/placeholder_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_material_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef placeholder_material_class_def = {
	"PlaceholderMaterial",
	.finalizer = placeholder_material_class_finalizer
};

static JSValue placeholder_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaceholderMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	PlaceholderMaterial *placeholder_material_class = memnew(PlaceholderMaterial);
	if (!placeholder_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, placeholder_material_class);	
	return obj;
}

void define_placeholder_material_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_placeholder_material_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PlaceholderMaterial::__class_id);
	classes["PlaceholderMaterial"] = PlaceholderMaterial::__class_id;
	class_id_list.insert(PlaceholderMaterial::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderMaterial::__class_id, &placeholder_material_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaceholderMaterial::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderMaterial::__class_id, proto);

	define_placeholder_material_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, placeholder_material_class_constructor, "PlaceholderMaterial", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PlaceholderMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_material_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/material';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderMaterial");
	return m;
}

JSModuleDef *js_init_placeholder_material_module(JSContext *ctx) {
	return _js_init_placeholder_material_module(ctx, "@godot/classes/placeholder_material");
}

void register_placeholder_material() {
	PlaceholderMaterial::__init_js_class_id();
	js_init_placeholder_material_module(ctx);
}