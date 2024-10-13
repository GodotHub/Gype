
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shader_include.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shader_include_class_finalizer(JSRuntime *rt, JSValue val) {
	ShaderInclude *shader_include = static_cast<ShaderInclude *>(JS_GetOpaque(val, ShaderInclude::__class_id));
	if (shader_include)
		ShaderInclude::free(nullptr, shader_include);
}

static JSClassDef shader_include_class_def = {
	"ShaderInclude",
	.finalizer = shader_include_class_finalizer
};

static JSValue shader_include_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ShaderInclude *shader_include_class;
	JSValue obj = JS_NewObjectClass(ctx, ShaderInclude::__class_id);
	if (JS_IsException(obj))
		return obj;
	shader_include_class = memnew(ShaderInclude);
	if (!shader_include_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, shader_include_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue shader_include_class_set_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShaderInclude::set_code, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shader_include_class_get_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShaderInclude::get_code, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shader_include_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_code", 1, &shader_include_class_set_code),
	JS_CFUNC_DEF("get_code", 0, &shader_include_class_get_code),
};

void define_shader_include_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "code"),
        JS_NewCFunction(ctx, shader_include_class_get_code, "get_code", 0),
        JS_NewCFunction(ctx, shader_include_class_set_code, "set_code", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_shader_include_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ShaderInclude::__class_id);
	classes["ShaderInclude"] = ShaderInclude::__class_id;
	class_id_list.insert(ShaderInclude::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ShaderInclude::__class_id, &shader_include_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShaderInclude::__class_id, proto);
	define_shader_include_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shader_include_class_proto_funcs, _countof(shader_include_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, shader_include_class_constructor, "ShaderInclude", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ShaderInclude", ctor);

	return 0;
}

JSModuleDef *_js_init_shader_include_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_include_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShaderInclude");
	return m;
}

JSModuleDef *js_init_shader_include_module(JSContext *ctx) {
	return _js_init_shader_include_module(ctx, "godot/classes/shader_include");
}

void register_shader_include() {
	ShaderInclude::__init_js_class_id();
	js_init_shader_include_module(ctx);
}