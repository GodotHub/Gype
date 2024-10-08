
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void material_class_finalizer(JSRuntime *rt, JSValue val) {
	Material *material = static_cast<Material *>(JS_GetOpaque(val, Material::__class_id));
	if (material)
		Material::free(nullptr, material);
}

static JSClassDef material_class_def = {
	"Material",
	.finalizer = material_class_finalizer
};

static JSValue material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Material *material_class;
	JSValue obj = JS_NewObjectClass(ctx, Material::__class_id);
	if (JS_IsException(obj))
		return obj;
	material_class = memnew(Material);
	if (!material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, material_class);
	return obj;
}
static JSValue material_class_set_next_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Material::set_next_pass, Material::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue material_class_get_next_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Material::get_next_pass, Material::__class_id, ctx, this_val, argv);
};
static JSValue material_class_set_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Material::set_render_priority, Material::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue material_class_get_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Material::get_render_priority, Material::__class_id, ctx, this_val, argv);
};
static JSValue material_class_inspect_native_shader_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Material::inspect_native_shader_code, Material::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue material_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Material::create_placeholder, Material::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_next_pass", 1, &material_class_set_next_pass),
	JS_CFUNC_DEF("get_next_pass", 0, &material_class_get_next_pass),
	JS_CFUNC_DEF("set_render_priority", 1, &material_class_set_render_priority),
	JS_CFUNC_DEF("get_render_priority", 0, &material_class_get_render_priority),
	JS_CFUNC_DEF("inspect_native_shader_code", 0, &material_class_inspect_native_shader_code),
	JS_CFUNC_DEF("create_placeholder", 0, &material_class_create_placeholder),
};

static int js_material_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Material::__class_id);
	classes["Material"] = Material::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Material::__class_id, &material_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Material::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, material_class_proto_funcs, _countof(material_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, material_class_constructor, "Material", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Material", ctor);

	return 0;
}

JSModuleDef *_js_init_material_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Material");
	return m;
}

JSModuleDef *js_init_material_module(JSContext *ctx) {
	return _js_init_material_module(ctx, "godot/classes/material");
}

void register_material() {
	js_init_material_module(ctx);
}