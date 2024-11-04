
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shader_globals_override.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shader_globals_override_class_finalizer(JSRuntime *rt, JSValue val) {
	ShaderGlobalsOverride *shader_globals_override = static_cast<ShaderGlobalsOverride *>(JS_GetOpaque(val, ShaderGlobalsOverride::__class_id));
	if (shader_globals_override)
		memdelete(shader_globals_override);
}

static JSClassDef shader_globals_override_class_def = {
	"ShaderGlobalsOverride",
	.finalizer = shader_globals_override_class_finalizer
};

static JSValue shader_globals_override_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ShaderGlobalsOverride::__class_id);
	if (JS_IsException(obj))
		return obj;

	ShaderGlobalsOverride *shader_globals_override_class;
	if (argc == 1) 
		shader_globals_override_class = static_cast<ShaderGlobalsOverride *>(Variant(*argv).operator Object *());
	else 
		shader_globals_override_class = memnew(ShaderGlobalsOverride);
	if (!shader_globals_override_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shader_globals_override_class);
	return obj;
}

static void define_shader_globals_override_property(JSContext *ctx, JSValue proto) {
	
}

static void define_shader_globals_override_enum(JSContext *ctx, JSValue proto) {
}

static int js_shader_globals_override_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ShaderGlobalsOverride"] = ShaderGlobalsOverride::__class_id;
	class_id_list.insert(ShaderGlobalsOverride::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ShaderGlobalsOverride::__class_id, &shader_globals_override_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ShaderGlobalsOverride::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShaderGlobalsOverride::__class_id, proto);

	define_shader_globals_override_property(ctx, proto);
	define_shader_globals_override_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, shader_globals_override_class_constructor, "ShaderGlobalsOverride", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ShaderGlobalsOverride", ctor);
	constructors[ShaderGlobalsOverride::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_shader_globals_override_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_globals_override_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShaderGlobalsOverride");
	return m;
}

JSModuleDef *js_init_shader_globals_override_module(JSContext *ctx) {
	return _js_init_shader_globals_override_module(ctx, "@godot/classes/shader_globals_override");
}

void register_shader_globals_override() {
	ShaderGlobalsOverride::__init_js_class_id();
	js_init_shader_globals_override_module(ctx);
}