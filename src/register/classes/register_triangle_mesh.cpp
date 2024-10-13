
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void triangle_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	TriangleMesh *triangle_mesh = static_cast<TriangleMesh *>(JS_GetOpaque(val, TriangleMesh::__class_id));
	if (triangle_mesh)
		TriangleMesh::free(nullptr, triangle_mesh);
}

static JSClassDef triangle_mesh_class_def = {
	"TriangleMesh",
	.finalizer = triangle_mesh_class_finalizer
};

static JSValue triangle_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TriangleMesh *triangle_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, TriangleMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	triangle_mesh_class = memnew(TriangleMesh);
	if (!triangle_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, triangle_mesh_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_triangle_mesh_property(JSContext *ctx, JSValue obj) {
}

static int js_triangle_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TriangleMesh::__class_id);
	classes["TriangleMesh"] = TriangleMesh::__class_id;
	class_id_list.insert(TriangleMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TriangleMesh::__class_id, &triangle_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TriangleMesh::__class_id, proto);
	define_triangle_mesh_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, triangle_mesh_class_constructor, "TriangleMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TriangleMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_triangle_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_triangle_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TriangleMesh");
	return m;
}

JSModuleDef *js_init_triangle_mesh_module(JSContext *ctx) {
	return _js_init_triangle_mesh_module(ctx, "godot/classes/triangle_mesh");
}

void register_triangle_mesh() {
	TriangleMesh::__init_js_class_id();
	js_init_triangle_mesh_module(ctx);
}