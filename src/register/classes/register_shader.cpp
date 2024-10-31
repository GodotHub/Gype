
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shader_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef shader_class_def = {
	"Shader",
	.finalizer = shader_class_finalizer
};

static JSValue shader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Shader::__class_id);
	if (JS_IsException(obj))
		return obj;

	Shader *shader_class;
	if (argc == 1) 
		shader_class = static_cast<Shader *>(static_cast<Object *>(Variant(*argv)));
	else 
		shader_class = memnew(Shader);
	if (!shader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shader_class);	
	return obj;
}
static JSValue shader_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shader::get_mode, ctx, this_val, argc, argv);
};
static JSValue shader_class_set_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Shader::set_code, ctx, this_val, argc, argv);
};
static JSValue shader_class_get_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shader::get_code, ctx, this_val, argc, argv);
};
static JSValue shader_class_set_default_texture_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Shader::set_default_texture_parameter, ctx, this_val, argc, argv);
};
static JSValue shader_class_get_default_texture_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shader::get_default_texture_parameter, ctx, this_val, argc, argv);
};
static JSValue shader_class_get_shader_uniform_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Shader::get_shader_uniform_list, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shader_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_mode", 0, &shader_class_get_mode),
	JS_CFUNC_DEF("set_code", 1, &shader_class_set_code),
	JS_CFUNC_DEF("get_code", 0, &shader_class_get_code),
	JS_CFUNC_DEF("set_default_texture_parameter", 3, &shader_class_set_default_texture_parameter),
	JS_CFUNC_DEF("get_default_texture_parameter", 2, &shader_class_get_default_texture_parameter),
	JS_CFUNC_DEF("get_shader_uniform_list", 1, &shader_class_get_shader_uniform_list),
};

static void define_shader_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "code"),
        JS_NewCFunction(ctx, shader_class_get_code, "get_code", 0),
        JS_NewCFunction(ctx, shader_class_set_code, "set_code", 1),
        JS_PROP_GETSET
    );
	
}

static void define_shader_enum(JSContext *ctx, JSValue proto) {
	JSValue Mode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_SPATIAL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_CANVAS_ITEM", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_PARTICLES", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_SKY", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Mode_obj, "MODE_FOG", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Mode", Mode_obj);
}

static int js_shader_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Shader::__class_id);
	classes["Shader"] = Shader::__class_id;
	class_id_list.insert(Shader::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Shader::__class_id, &shader_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Shader::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Shader::__class_id, proto);

	define_shader_property(ctx, proto);
	define_shader_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shader_class_proto_funcs, _countof(shader_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shader_class_constructor, "Shader", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Shader", ctor);

	return 0;
}

JSModuleDef *_js_init_shader_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Shader");
	return m;
}

JSModuleDef *js_init_shader_module(JSContext *ctx) {
	return _js_init_shader_module(ctx, "@godot/classes/shader");
}

void register_shader() {
	Shader::__init_js_class_id();
	js_init_shader_module(ctx);
}