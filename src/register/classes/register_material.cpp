
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void material_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef material_class_def = {
	"Material",
	.finalizer = material_class_finalizer
};

static JSValue material_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Material::__class_id);
	if (JS_IsException(obj))
		return obj;

	Material *material_class;
	if (argc == 1) 
		material_class = static_cast<Material *>(static_cast<Object *>(Variant(*argv)));
	else 
		material_class = memnew(Material);
	if (!material_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, material_class);	
	return obj;
}
static JSValue material_class_set_next_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Material::set_next_pass, ctx, this_val, argc, argv);
};
static JSValue material_class_get_next_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Material::get_next_pass, ctx, this_val, argc, argv);
};
static JSValue material_class_set_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Material::set_render_priority, ctx, this_val, argc, argv);
};
static JSValue material_class_get_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Material::get_render_priority, ctx, this_val, argc, argv);
};
static JSValue material_class_inspect_native_shader_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Material::inspect_native_shader_code, ctx, this_val, argc, argv);
};
static JSValue material_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Material::create_placeholder, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry material_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_next_pass", 1, &material_class_set_next_pass),
	JS_CFUNC_DEF("get_next_pass", 0, &material_class_get_next_pass),
	JS_CFUNC_DEF("set_render_priority", 1, &material_class_set_render_priority),
	JS_CFUNC_DEF("get_render_priority", 0, &material_class_get_render_priority),
	JS_CFUNC_DEF("inspect_native_shader_code", 0, &material_class_inspect_native_shader_code),
	JS_CFUNC_DEF("create_placeholder", 0, &material_class_create_placeholder),
};

static void define_material_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "render_priority"),
        JS_NewCFunction(ctx, material_class_get_render_priority, "get_render_priority", 0),
        JS_NewCFunction(ctx, material_class_set_render_priority, "set_render_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "next_pass"),
        JS_NewCFunction(ctx, material_class_get_next_pass, "get_next_pass", 0),
        JS_NewCFunction(ctx, material_class_set_next_pass, "set_next_pass", 1),
        JS_PROP_GETSET
    );
	
}

static void define_material_enum(JSContext *ctx, JSValue proto) {
}

static int js_material_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Material::__class_id);
	classes["Material"] = Material::__class_id;
	class_id_list.insert(Material::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Material::__class_id, &material_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Material::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Material::__class_id, proto);

	define_material_property(ctx, proto);
	define_material_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, material_class_proto_funcs, _countof(material_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, material_class_constructor, "Material", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Material", ctor);

	return 0;
}

JSModuleDef *_js_init_material_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_material_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Material");
	return m;
}

JSModuleDef *js_init_material_module(JSContext *ctx) {
	return _js_init_material_module(ctx, "@godot/classes/material");
}

void register_material() {
	Material::__init_js_class_id();
	js_init_material_module(ctx);
}