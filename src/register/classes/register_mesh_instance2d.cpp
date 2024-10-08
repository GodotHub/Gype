
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_instance2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void mesh_instance2d_class_finalizer(JSRuntime *rt, JSValue val) {
	MeshInstance2D *mesh_instance2d = static_cast<MeshInstance2D *>(JS_GetOpaque(val, MeshInstance2D::__class_id));
	if (mesh_instance2d)
		MeshInstance2D::free(nullptr, mesh_instance2d);
}

static JSClassDef mesh_instance2d_class_def = {
	"MeshInstance2D",
	.finalizer = mesh_instance2d_class_finalizer
};

static JSValue mesh_instance2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MeshInstance2D *mesh_instance2d_class;
	JSValue obj = JS_NewObjectClass(ctx, MeshInstance2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	mesh_instance2d_class = memnew(MeshInstance2D);
	if (!mesh_instance2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mesh_instance2d_class);
	return obj;
}
static JSValue mesh_instance2d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshInstance2D::set_mesh, MeshInstance2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance2d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance2D::get_mesh, MeshInstance2D::__class_id, ctx, this_val, argv);
};
static JSValue mesh_instance2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshInstance2D::set_texture, MeshInstance2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshInstance2D::get_texture, MeshInstance2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry mesh_instance2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &mesh_instance2d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &mesh_instance2d_class_get_mesh),
	JS_CFUNC_DEF("set_texture", 1, &mesh_instance2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &mesh_instance2d_class_get_texture),
};

static int js_mesh_instance2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MeshInstance2D::__class_id);
	classes["MeshInstance2D"] = MeshInstance2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MeshInstance2D::__class_id, &mesh_instance2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshInstance2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_instance2d_class_proto_funcs, _countof(mesh_instance2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mesh_instance2d_class_constructor, "MeshInstance2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MeshInstance2D", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_instance2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_instance2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshInstance2D");
	return m;
}

JSModuleDef *js_init_mesh_instance2d_module(JSContext *ctx) {
	return _js_init_mesh_instance2d_module(ctx, "godot/classes/mesh_instance2d");
}

void register_mesh_instance2d() {
	js_init_mesh_instance2d_module(ctx);
}