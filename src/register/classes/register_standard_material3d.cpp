
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void standard_material3d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef standard_material3d_class_def = {
	"StandardMaterial3D",
	.finalizer = standard_material3d_class_finalizer
};

static JSValue standard_material3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StandardMaterial3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	StandardMaterial3D *standard_material3d_class = memnew(StandardMaterial3D);
	if (!standard_material3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, standard_material3d_class);
	return obj;
}

void define_standard_material3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_standard_material3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StandardMaterial3D::__class_id);
	classes["StandardMaterial3D"] = StandardMaterial3D::__class_id;
	class_id_list.insert(StandardMaterial3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StandardMaterial3D::__class_id, &standard_material3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StandardMaterial3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, BaseMaterial3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StandardMaterial3D::__class_id, proto);

	define_standard_material3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, standard_material3d_class_constructor, "StandardMaterial3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StandardMaterial3D", ctor);

	return 0;
}

JSModuleDef *_js_init_standard_material3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/base_material3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_standard_material3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StandardMaterial3D");
	return m;
}

JSModuleDef *js_init_standard_material3d_module(JSContext *ctx) {
	return _js_init_standard_material3d_module(ctx, "godot/classes/standard_material3d");
}

void register_standard_material3d() {
	StandardMaterial3D::__init_js_class_id();
	js_init_standard_material3d_module(ctx);
}