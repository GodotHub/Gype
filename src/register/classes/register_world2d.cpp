
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void world2d_class_finalizer(JSRuntime *rt, JSValue val) {
	World2D *world2d = static_cast<World2D *>(JS_GetOpaque(val, World2D::__class_id));
	if (world2d)
		World2D::free(nullptr, world2d);
}

static JSClassDef world2d_class_def = {
	"World2D",
	.finalizer = world2d_class_finalizer
};

static JSValue world2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	World2D *world2d_class;
	JSValue obj = JS_NewObjectClass(ctx, World2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	world2d_class = memnew(World2D);
	if (!world2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, world2d_class);
	return obj;
}
static JSValue world2d_class_get_canvas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World2D::get_canvas, World2D::__class_id, ctx, this_val, argv);
};
static JSValue world2d_class_get_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World2D::get_space, World2D::__class_id, ctx, this_val, argv);
};
static JSValue world2d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World2D::get_navigation_map, World2D::__class_id, ctx, this_val, argv);
};
static JSValue world2d_class_get_direct_space_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&World2D::get_direct_space_state, World2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry world2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_canvas", 0, &world2d_class_get_canvas),
	JS_CFUNC_DEF("get_space", 0, &world2d_class_get_space),
	JS_CFUNC_DEF("get_navigation_map", 0, &world2d_class_get_navigation_map),
	JS_CFUNC_DEF("get_direct_space_state", 0, &world2d_class_get_direct_space_state),
};

static int js_world2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&World2D::__class_id);
	classes["World2D"] = World2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), World2D::__class_id, &world2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, World2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, world2d_class_proto_funcs, _countof(world2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, world2d_class_constructor, "World2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "World2D", ctor);

	return 0;
}

JSModuleDef *_js_init_world2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "World2D");
	return m;
}

JSModuleDef *js_init_world2d_module(JSContext *ctx) {
	return _js_init_world2d_module(ctx, "godot/classes/world2d");
}

void register_world2d() {
	js_init_world2d_module(ctx);
}