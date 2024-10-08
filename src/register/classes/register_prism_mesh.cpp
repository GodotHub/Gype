
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/prism_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void prism_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PrismMesh *prism_mesh = static_cast<PrismMesh *>(JS_GetOpaque(val, PrismMesh::__class_id));
	if (prism_mesh)
		PrismMesh::free(nullptr, prism_mesh);
}

static JSClassDef prism_mesh_class_def = {
	"PrismMesh",
	.finalizer = prism_mesh_class_finalizer
};

static JSValue prism_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PrismMesh *prism_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, PrismMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	prism_mesh_class = memnew(PrismMesh);
	if (!prism_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, prism_mesh_class);
	return obj;
}
static JSValue prism_mesh_class_set_left_to_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrismMesh::set_left_to_right, PrismMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue prism_mesh_class_get_left_to_right(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrismMesh::get_left_to_right, PrismMesh::__class_id, ctx, this_val, argv);
};
static JSValue prism_mesh_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrismMesh::set_size, PrismMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue prism_mesh_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrismMesh::get_size, PrismMesh::__class_id, ctx, this_val, argv);
};
static JSValue prism_mesh_class_set_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrismMesh::set_subdivide_width, PrismMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue prism_mesh_class_get_subdivide_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrismMesh::get_subdivide_width, PrismMesh::__class_id, ctx, this_val, argv);
};
static JSValue prism_mesh_class_set_subdivide_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrismMesh::set_subdivide_height, PrismMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue prism_mesh_class_get_subdivide_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrismMesh::get_subdivide_height, PrismMesh::__class_id, ctx, this_val, argv);
};
static JSValue prism_mesh_class_set_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrismMesh::set_subdivide_depth, PrismMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue prism_mesh_class_get_subdivide_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrismMesh::get_subdivide_depth, PrismMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry prism_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_left_to_right", 1, &prism_mesh_class_set_left_to_right),
	JS_CFUNC_DEF("get_left_to_right", 0, &prism_mesh_class_get_left_to_right),
	JS_CFUNC_DEF("set_size", 1, &prism_mesh_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &prism_mesh_class_get_size),
	JS_CFUNC_DEF("set_subdivide_width", 1, &prism_mesh_class_set_subdivide_width),
	JS_CFUNC_DEF("get_subdivide_width", 0, &prism_mesh_class_get_subdivide_width),
	JS_CFUNC_DEF("set_subdivide_height", 1, &prism_mesh_class_set_subdivide_height),
	JS_CFUNC_DEF("get_subdivide_height", 0, &prism_mesh_class_get_subdivide_height),
	JS_CFUNC_DEF("set_subdivide_depth", 1, &prism_mesh_class_set_subdivide_depth),
	JS_CFUNC_DEF("get_subdivide_depth", 0, &prism_mesh_class_get_subdivide_depth),
};

static int js_prism_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PrismMesh::__class_id);
	classes["PrismMesh"] = PrismMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PrismMesh::__class_id, &prism_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PrismMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, prism_mesh_class_proto_funcs, _countof(prism_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, prism_mesh_class_constructor, "PrismMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PrismMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_prism_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_prism_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PrismMesh");
	return m;
}

JSModuleDef *js_init_prism_mesh_module(JSContext *ctx) {
	return _js_init_prism_mesh_module(ctx, "godot/classes/prism_mesh");
}

void register_prism_mesh() {
	js_init_prism_mesh_module(ctx);
}