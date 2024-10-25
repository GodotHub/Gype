
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/spot_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void spot_light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef spot_light3d_class_def = {
	"SpotLight3D",
	.finalizer = spot_light3d_class_finalizer
};

static JSValue spot_light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SpotLight3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	SpotLight3D *spot_light3d_class = memnew(SpotLight3D);
	if (!spot_light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, spot_light3d_class);	
	return obj;
}

void define_spot_light3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_spot_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SpotLight3D::__class_id);
	classes["SpotLight3D"] = SpotLight3D::__class_id;
	class_id_list.insert(SpotLight3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SpotLight3D::__class_id, &spot_light3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SpotLight3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Light3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpotLight3D::__class_id, proto);

	define_spot_light3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, spot_light3d_class_constructor, "SpotLight3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SpotLight3D", ctor);

	return 0;
}

JSModuleDef *_js_init_spot_light3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/light3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_spot_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SpotLight3D");
	return m;
}

JSModuleDef *js_init_spot_light3d_module(JSContext *ctx) {
	return _js_init_spot_light3d_module(ctx, "godot/classes/spot_light3d");
}

void register_spot_light3d() {
	SpotLight3D::__init_js_class_id();
	js_init_spot_light3d_module(ctx);
}