
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/placeholder_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderMesh *placeholder_mesh = static_cast<PlaceholderMesh *>(JS_GetOpaque(val, PlaceholderMesh::__class_id));
	if (placeholder_mesh)
		PlaceholderMesh::free(nullptr, placeholder_mesh);
}

static JSClassDef placeholder_mesh_class_def = {
	"PlaceholderMesh",
	.finalizer = placeholder_mesh_class_finalizer
};

static JSValue placeholder_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderMesh *placeholder_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_mesh_class = memnew(PlaceholderMesh);
	if (!placeholder_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_mesh_class);
	return obj;
}
static JSValue placeholder_mesh_class_set_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaceholderMesh::set_aabb, PlaceholderMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry placeholder_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_aabb", 1, &placeholder_mesh_class_set_aabb),
};

static int js_placeholder_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderMesh::__class_id);
	classes["PlaceholderMesh"] = PlaceholderMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderMesh::__class_id, &placeholder_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Mesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, placeholder_mesh_class_proto_funcs, _countof(placeholder_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_mesh_class_constructor, "PlaceholderMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderMesh");
	return m;
}

JSModuleDef *js_init_placeholder_mesh_module(JSContext *ctx) {
	return _js_init_placeholder_mesh_module(ctx, "godot/classes/placeholder_mesh");
}

void register_placeholder_mesh() {
	js_init_placeholder_mesh_module(ctx);
}