
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/point_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void point_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PointMesh *point_mesh = static_cast<PointMesh *>(JS_GetOpaque(val, PointMesh::__class_id));
	if (point_mesh)
		PointMesh::free(nullptr, point_mesh);
}

static JSClassDef point_mesh_class_def = {
	"PointMesh",
	.finalizer = point_mesh_class_finalizer
};

static JSValue point_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PointMesh *point_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, PointMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	point_mesh_class = memnew(PointMesh);
	if (!point_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, point_mesh_class);
	return obj;
}

static int js_point_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PointMesh::__class_id);
	classes["PointMesh"] = PointMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PointMesh::__class_id, &point_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PointMesh::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, point_mesh_class_constructor, "PointMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PointMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_point_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_point_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PointMesh");
	return m;
}

JSModuleDef *js_init_point_mesh_module(JSContext *ctx) {
	return _js_init_point_mesh_module(ctx, "godot/classes/point_mesh");
}

void register_point_mesh() {
	js_init_point_mesh_module(ctx);
}