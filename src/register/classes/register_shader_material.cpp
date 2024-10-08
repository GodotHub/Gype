
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/shader_material.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void shader_material_class_finalizer(JSRuntime *rt, JSValue val) {
	ShaderMaterial *shader_material = static_cast<ShaderMaterial *>(JS_GetOpaque(val, ShaderMaterial::__class_id));
	if (shader_material)
		ShaderMaterial::free(nullptr, shader_material);
}

static JSClassDef shader_material_class_def = {
	"ShaderMaterial",
	.finalizer = shader_material_class_finalizer
};

static JSValue shader_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ShaderMaterial *shader_material_class;
	JSValue obj = JS_NewObjectClass(ctx, ShaderMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;
	shader_material_class = memnew(ShaderMaterial);
	if (!shader_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, shader_material_class);
	return obj;
}
static JSValue shader_material_class_set_shader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShaderMaterial::set_shader, ShaderMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shader_material_class_get_shader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShaderMaterial::get_shader, ShaderMaterial::__class_id, ctx, this_val, argv);
};
static JSValue shader_material_class_set_shader_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShaderMaterial::set_shader_parameter, ShaderMaterial::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shader_material_class_get_shader_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShaderMaterial::get_shader_parameter, ShaderMaterial::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry shader_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shader", 1, &shader_material_class_set_shader),
	JS_CFUNC_DEF("get_shader", 0, &shader_material_class_get_shader),
	JS_CFUNC_DEF("set_shader_parameter", 2, &shader_material_class_set_shader_parameter),
	JS_CFUNC_DEF("get_shader_parameter", 1, &shader_material_class_get_shader_parameter),
};

static int js_shader_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ShaderMaterial::__class_id);
	classes["ShaderMaterial"] = ShaderMaterial::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ShaderMaterial::__class_id, &shader_material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShaderMaterial::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, shader_material_class_proto_funcs, _countof(shader_material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, shader_material_class_constructor, "ShaderMaterial", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ShaderMaterial", ctor);

	return 0;
}

JSModuleDef *_js_init_shader_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShaderMaterial");
	return m;
}

JSModuleDef *js_init_shader_material_module(JSContext *ctx) {
	return _js_init_shader_material_module(ctx, "godot/classes/shader_material");
}

void register_shader_material() {
	js_init_shader_material_module(ctx);
}