
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/point_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void point_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PointMesh *point_mesh = static_cast<PointMesh *>(JS_GetOpaque(val, PointMesh::__class_id));
	if (point_mesh)
		memdelete(point_mesh);
}

static JSClassDef point_mesh_class_def = {
	"PointMesh",
	.finalizer = point_mesh_class_finalizer
};

static JSValue point_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PointMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	PointMesh *point_mesh_class;
	if (argc == 1) 
		point_mesh_class = static_cast<PointMesh *>(Variant(*argv).operator Object *());
	else 
		point_mesh_class = memnew(PointMesh);
	if (!point_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, point_mesh_class);
	return obj;
}

static void define_point_mesh_property(JSContext *ctx, JSValue proto) {
	
}

static void define_point_mesh_enum(JSContext *ctx, JSValue proto) {
}

static int js_point_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PointMesh"] = PointMesh::__class_id;
	class_id_list.insert(PointMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PointMesh::__class_id, &point_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PointMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PointMesh::__class_id, proto);

	define_point_mesh_property(ctx, proto);
	define_point_mesh_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, point_mesh_class_constructor, "PointMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PointMesh", ctor);
	constructors[PointMesh::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_point_mesh_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_point_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PointMesh");
	return m;
}

JSModuleDef *js_init_point_mesh_module(JSContext *ctx) {
	return _js_init_point_mesh_module(ctx, "@godot/classes/point_mesh");
}

void register_point_mesh() {
	PointMesh::__init_js_class_id();
	js_init_point_mesh_module(ctx);
}