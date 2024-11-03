
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shader_material.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shader_material_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef shader_material_class_def = {
	"ShaderMaterial",
	.finalizer = shader_material_class_finalizer
};

static JSValue shader_material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ShaderMaterial::__class_id);
	if (JS_IsException(obj))
		return obj;

	ShaderMaterial *shader_material_class;
	if (argc == 1) 
		shader_material_class = static_cast<ShaderMaterial *>(Variant(*argv).operator Object *());
	else 
		shader_material_class = memnew(ShaderMaterial);
	if (!shader_material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shader_material_class);
	return obj;
}
static JSValue shader_material_class_set_shader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShaderMaterial::set_shader, ctx, this_val, argc, argv);
};
static JSValue shader_material_class_get_shader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShaderMaterial::get_shader, ctx, this_val, argc, argv);
};
static JSValue shader_material_class_set_shader_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShaderMaterial::set_shader_parameter, ctx, this_val, argc, argv);
};
static JSValue shader_material_class_get_shader_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShaderMaterial::get_shader_parameter, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shader_material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shader", 1, &shader_material_class_set_shader),
	JS_CFUNC_DEF("get_shader", 0, &shader_material_class_get_shader),
	JS_CFUNC_DEF("set_shader_parameter", 2, &shader_material_class_set_shader_parameter),
	JS_CFUNC_DEF("get_shader_parameter", 1, &shader_material_class_get_shader_parameter),
};

static void define_shader_material_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shader"),
        JS_NewCFunction(ctx, shader_material_class_get_shader, "get_shader", 0),
        JS_NewCFunction(ctx, shader_material_class_set_shader, "set_shader", 1),
        JS_PROP_GETSET
    );
	
}

static void define_shader_material_enum(JSContext *ctx, JSValue proto) {
}

static int js_shader_material_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ShaderMaterial"] = ShaderMaterial::__class_id;
	class_id_list.insert(ShaderMaterial::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ShaderMaterial::__class_id, &shader_material_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ShaderMaterial::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Material::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShaderMaterial::__class_id, proto);

	define_shader_material_property(ctx, proto);
	define_shader_material_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shader_material_class_proto_funcs, _countof(shader_material_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shader_material_class_constructor, "ShaderMaterial", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ShaderMaterial", ctor);
	constructors[ShaderMaterial::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_shader_material_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/material';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShaderMaterial");
	return m;
}

JSModuleDef *js_init_shader_material_module(JSContext *ctx) {
	return _js_init_shader_material_module(ctx, "@godot/classes/shader_material");
}

void register_shader_material() {
	ShaderMaterial::__init_js_class_id();
	js_init_shader_material_module(ctx);
}