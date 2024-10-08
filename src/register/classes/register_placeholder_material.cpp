
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/placeholder_material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void placeholder_material_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderMaterial *placeholder_material = static_cast<PlaceholderMaterial *>(JS_GetOpaque(val, PlaceholderMaterial::__class_id));
	if (placeholder_material)
		PlaceholderMaterial::free(nullptr, placeholder_material);
}

static JSClassDef placeholder_material_class_def = {
	"PlaceholderMaterial",
	.finalizer = placeholder_material_class_finalizer
};

static JSValue placeholder_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderMaterial *placeholder_material_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_material_class = memnew(PlaceholderMaterial);
	if (!placeholder_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_material_class);
	return obj;
}

static int js_placeholder_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderMaterial::__class_id);
	classes["PlaceholderMaterial"] = PlaceholderMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderMaterial::__class_id, &placeholder_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderMaterial::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_material_class_constructor, "PlaceholderMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderMaterial");
	return m;
}

JSModuleDef *js_init_placeholder_material_module(JSContext *ctx) {
	return _js_init_placeholder_material_module(ctx, "godot/classes/placeholder_material");
}

void register_placeholder_material() {
	js_init_placeholder_material_module(ctx);
}