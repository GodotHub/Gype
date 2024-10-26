
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/csg_combiner3d.hpp>
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void csg_combiner3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef csg_combiner3d_class_def = {
	"CSGCombiner3D",
	.finalizer = csg_combiner3d_class_finalizer
};

static JSValue csg_combiner3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CSGCombiner3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CSGCombiner3D *csg_combiner3d_class = memnew(CSGCombiner3D);
	if (!csg_combiner3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, csg_combiner3d_class);	
	return obj;
}

void define_csg_combiner3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_csg_combiner3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CSGCombiner3D::__class_id);
	classes["CSGCombiner3D"] = CSGCombiner3D::__class_id;
	class_id_list.insert(CSGCombiner3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CSGCombiner3D::__class_id, &csg_combiner3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CSGCombiner3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CSGShape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CSGCombiner3D::__class_id, proto);

	define_csg_combiner3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, csg_combiner3d_class_constructor, "CSGCombiner3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CSGCombiner3D", ctor);

	return 0;
}

JSModuleDef *_js_init_csg_combiner3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/csg_shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_csg_combiner3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CSGCombiner3D");
	return m;
}

JSModuleDef *js_init_csg_combiner3d_module(JSContext *ctx) {
	return _js_init_csg_combiner3d_module(ctx, "godot/classes/csg_combiner3d");
}

void register_csg_combiner3d() {
	CSGCombiner3D::__init_js_class_id();
	js_init_csg_combiner3d_module(ctx);
}