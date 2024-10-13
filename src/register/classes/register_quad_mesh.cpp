
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/quad_mesh.hpp>
#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void quad_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	QuadMesh *quad_mesh = static_cast<QuadMesh *>(JS_GetOpaque(val, QuadMesh::__class_id));
	if (quad_mesh)
		QuadMesh::free(nullptr, quad_mesh);
}

static JSClassDef quad_mesh_class_def = {
	"QuadMesh",
	.finalizer = quad_mesh_class_finalizer
};

static JSValue quad_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	QuadMesh *quad_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, QuadMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	quad_mesh_class = memnew(QuadMesh);
	if (!quad_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, quad_mesh_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_quad_mesh_property(JSContext *ctx, JSValue obj) {
}

static int js_quad_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&QuadMesh::__class_id);
	classes["QuadMesh"] = QuadMesh::__class_id;
	class_id_list.insert(QuadMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), QuadMesh::__class_id, &quad_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PlaneMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, QuadMesh::__class_id, proto);
	define_quad_mesh_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, quad_mesh_class_constructor, "QuadMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "QuadMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_quad_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/plane_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_quad_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "QuadMesh");
	return m;
}

JSModuleDef *js_init_quad_mesh_module(JSContext *ctx) {
	return _js_init_quad_mesh_module(ctx, "godot/classes/quad_mesh");
}

void register_quad_mesh() {
	QuadMesh::__init_js_class_id();
	js_init_quad_mesh_module(ctx);
}