
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/classes/quad_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
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
	return obj;
}

static int js_quad_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&QuadMesh::__class_id);
	classes["QuadMesh"] = QuadMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), QuadMesh::__class_id, &quad_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PlaneMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, QuadMesh::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, quad_mesh_class_constructor, "QuadMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "QuadMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_quad_mesh_module(JSContext *ctx, const char *module_name) {
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
	js_init_quad_mesh_module(ctx);
}