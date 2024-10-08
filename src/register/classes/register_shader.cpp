
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shader_class_finalizer(JSRuntime *rt, JSValue val) {
	Shader *shader = static_cast<Shader *>(JS_GetOpaque(val, Shader::__class_id));
	if (shader)
		Shader::free(nullptr, shader);
}

static JSClassDef shader_class_def = {
	"Shader",
	.finalizer = shader_class_finalizer
};

static JSValue shader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Shader *shader_class;
	JSValue obj = JS_NewObjectClass(ctx, Shader::__class_id);
	if (JS_IsException(obj))
		return obj;
	shader_class = memnew(Shader);
	if (!shader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, shader_class);
	return obj;
}
static JSValue shader_class_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shader::get_mode, Shader::__class_id, ctx, this_val, argv);
};
static JSValue shader_class_set_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Shader::set_code, Shader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shader_class_get_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shader::get_code, Shader::__class_id, ctx, this_val, argv);
};
static JSValue shader_class_set_default_texture_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Shader::set_default_texture_parameter, Shader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shader_class_get_default_texture_parameter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Shader::get_default_texture_parameter, Shader::__class_id, ctx, this_val, argv);
};
static JSValue shader_class_get_shader_uniform_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Shader::get_shader_uniform_list, Shader::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry shader_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_mode", 0, &shader_class_get_mode),
	JS_CFUNC_DEF("set_code", 1, &shader_class_set_code),
	JS_CFUNC_DEF("get_code", 0, &shader_class_get_code),
	JS_CFUNC_DEF("set_default_texture_parameter", 3, &shader_class_set_default_texture_parameter),
	JS_CFUNC_DEF("get_default_texture_parameter", 2, &shader_class_get_default_texture_parameter),
	JS_CFUNC_DEF("get_shader_uniform_list", 1, &shader_class_get_shader_uniform_list),
};

static int js_shader_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Shader::__class_id);
	classes["Shader"] = Shader::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Shader::__class_id, &shader_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Shader::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, shader_class_proto_funcs, _countof(shader_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, shader_class_constructor, "Shader", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Shader", ctor);

	return 0;
}

JSModuleDef *_js_init_shader_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Shader");
	return m;
}

JSModuleDef *js_init_shader_module(JSContext *ctx) {
	return _js_init_shader_module(ctx, "godot/classes/shader");
}

void register_shader() {
	js_init_shader_module(ctx);
}