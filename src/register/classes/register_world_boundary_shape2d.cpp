
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/world_boundary_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void world_boundary_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef world_boundary_shape2d_class_def = {
	"WorldBoundaryShape2D",
	.finalizer = world_boundary_shape2d_class_finalizer
};

static JSValue world_boundary_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WorldBoundaryShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	WorldBoundaryShape2D *world_boundary_shape2d_class = memnew(WorldBoundaryShape2D);
	if (!world_boundary_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, world_boundary_shape2d_class);	
	return obj;
}
static JSValue world_boundary_shape2d_class_set_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&WorldBoundaryShape2D::set_normal, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue world_boundary_shape2d_class_get_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WorldBoundaryShape2D::get_normal, ctx, this_val, argc, argv);
};
static JSValue world_boundary_shape2d_class_set_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&WorldBoundaryShape2D::set_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue world_boundary_shape2d_class_get_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WorldBoundaryShape2D::get_distance, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry world_boundary_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_normal", 1, &world_boundary_shape2d_class_set_normal),
	JS_CFUNC_DEF("get_normal", 0, &world_boundary_shape2d_class_get_normal),
	JS_CFUNC_DEF("set_distance", 1, &world_boundary_shape2d_class_set_distance),
	JS_CFUNC_DEF("get_distance", 0, &world_boundary_shape2d_class_get_distance),
};

void define_world_boundary_shape2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "normal"),
        JS_NewCFunction(ctx, world_boundary_shape2d_class_get_normal, "get_normal", 0),
        JS_NewCFunction(ctx, world_boundary_shape2d_class_set_normal, "set_normal", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "distance"),
        JS_NewCFunction(ctx, world_boundary_shape2d_class_get_distance, "get_distance", 0),
        JS_NewCFunction(ctx, world_boundary_shape2d_class_set_distance, "set_distance", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_world_boundary_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WorldBoundaryShape2D::__class_id);
	classes["WorldBoundaryShape2D"] = WorldBoundaryShape2D::__class_id;
	class_id_list.insert(WorldBoundaryShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WorldBoundaryShape2D::__class_id, &world_boundary_shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WorldBoundaryShape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WorldBoundaryShape2D::__class_id, proto);

	define_world_boundary_shape2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, world_boundary_shape2d_class_proto_funcs, _countof(world_boundary_shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, world_boundary_shape2d_class_constructor, "WorldBoundaryShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WorldBoundaryShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_world_boundary_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world_boundary_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WorldBoundaryShape2D");
	return m;
}

JSModuleDef *js_init_world_boundary_shape2d_module(JSContext *ctx) {
	return _js_init_world_boundary_shape2d_module(ctx, "@godot/classes/world_boundary_shape2d");
}

void register_world_boundary_shape2d() {
	WorldBoundaryShape2D::__init_js_class_id();
	js_init_world_boundary_shape2d_module(ctx);
}