
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/world_boundary_shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void world_boundary_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	WorldBoundaryShape2D *world_boundary_shape2d = static_cast<WorldBoundaryShape2D *>(JS_GetOpaque(val, WorldBoundaryShape2D::__class_id));
	if (world_boundary_shape2d)
		WorldBoundaryShape2D::free(nullptr, world_boundary_shape2d);
}

static JSClassDef world_boundary_shape2d_class_def = {
	"WorldBoundaryShape2D",
	.finalizer = world_boundary_shape2d_class_finalizer
};

static JSValue world_boundary_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WorldBoundaryShape2D *world_boundary_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, WorldBoundaryShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	world_boundary_shape2d_class = memnew(WorldBoundaryShape2D);
	if (!world_boundary_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, world_boundary_shape2d_class);
	return obj;
}
static JSValue world_boundary_shape2d_class_set_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WorldBoundaryShape2D::set_normal, WorldBoundaryShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue world_boundary_shape2d_class_get_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WorldBoundaryShape2D::get_normal, WorldBoundaryShape2D::__class_id, ctx, this_val, argv);
};
static JSValue world_boundary_shape2d_class_set_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WorldBoundaryShape2D::set_distance, WorldBoundaryShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue world_boundary_shape2d_class_get_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WorldBoundaryShape2D::get_distance, WorldBoundaryShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry world_boundary_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_normal", 1, &world_boundary_shape2d_class_set_normal),
	JS_CFUNC_DEF("get_normal", 0, &world_boundary_shape2d_class_get_normal),
	JS_CFUNC_DEF("set_distance", 1, &world_boundary_shape2d_class_set_distance),
	JS_CFUNC_DEF("get_distance", 0, &world_boundary_shape2d_class_get_distance),
};

static int js_world_boundary_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&WorldBoundaryShape2D::__class_id);
	classes["WorldBoundaryShape2D"] = WorldBoundaryShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WorldBoundaryShape2D::__class_id, &world_boundary_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WorldBoundaryShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, world_boundary_shape2d_class_proto_funcs, _countof(world_boundary_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, world_boundary_shape2d_class_constructor, "WorldBoundaryShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "WorldBoundaryShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_world_boundary_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world_boundary_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WorldBoundaryShape2D");
	return m;
}

JSModuleDef *js_init_world_boundary_shape2d_module(JSContext *ctx) {
	return _js_init_world_boundary_shape2d_module(ctx, "godot/classes/world_boundary_shape2d");
}

void register_world_boundary_shape2d() {
	js_init_world_boundary_shape2d_module(ctx);
}