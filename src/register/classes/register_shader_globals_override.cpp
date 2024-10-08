
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/shader_globals_override.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shader_globals_override_class_finalizer(JSRuntime *rt, JSValue val) {
	ShaderGlobalsOverride *shader_globals_override = static_cast<ShaderGlobalsOverride *>(JS_GetOpaque(val, ShaderGlobalsOverride::__class_id));
	if (shader_globals_override)
		ShaderGlobalsOverride::free(nullptr, shader_globals_override);
}

static JSClassDef shader_globals_override_class_def = {
	"ShaderGlobalsOverride",
	.finalizer = shader_globals_override_class_finalizer
};

static JSValue shader_globals_override_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ShaderGlobalsOverride *shader_globals_override_class;
	JSValue obj = JS_NewObjectClass(ctx, ShaderGlobalsOverride::__class_id);
	if (JS_IsException(obj))
		return obj;
	shader_globals_override_class = memnew(ShaderGlobalsOverride);
	if (!shader_globals_override_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, shader_globals_override_class);
	return obj;
}

static int js_shader_globals_override_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ShaderGlobalsOverride::__class_id);
	classes["ShaderGlobalsOverride"] = ShaderGlobalsOverride::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ShaderGlobalsOverride::__class_id, &shader_globals_override_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShaderGlobalsOverride::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, shader_globals_override_class_constructor, "ShaderGlobalsOverride", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ShaderGlobalsOverride", ctor);

	return 0;
}

JSModuleDef *_js_init_shader_globals_override_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shader_globals_override_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShaderGlobalsOverride");
	return m;
}

JSModuleDef *js_init_shader_globals_override_module(JSContext *ctx) {
	return _js_init_shader_globals_override_module(ctx, "godot/classes/shader_globals_override");
}

void register_shader_globals_override() {
	js_init_shader_globals_override_module(ctx);
}