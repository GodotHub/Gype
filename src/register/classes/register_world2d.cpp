
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void world2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef world2d_class_def = {
	"World2D",
	.finalizer = world2d_class_finalizer
};

static JSValue world2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, World2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	World2D *world2d_class;
	if (argc == 1) 
		world2d_class = static_cast<World2D *>(static_cast<Object *>(Variant(*argv)));
	else 
		world2d_class = memnew(World2D);
	if (!world2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, world2d_class);	
	return obj;
}
static JSValue world2d_class_get_canvas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World2D::get_canvas, ctx, this_val, argc, argv);
};
static JSValue world2d_class_get_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World2D::get_space, ctx, this_val, argc, argv);
};
static JSValue world2d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World2D::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue world2d_class_get_direct_space_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&World2D::get_direct_space_state, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry world2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_canvas", 0, &world2d_class_get_canvas),
	JS_CFUNC_DEF("get_space", 0, &world2d_class_get_space),
	JS_CFUNC_DEF("get_navigation_map", 0, &world2d_class_get_navigation_map),
	JS_CFUNC_DEF("get_direct_space_state", 0, &world2d_class_get_direct_space_state),
};

static void define_world2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "canvas"),
        JS_NewCFunction(ctx, world2d_class_get_canvas, "get_canvas", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "space"),
        JS_NewCFunction(ctx, world2d_class_get_space, "get_space", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "navigation_map"),
        JS_NewCFunction(ctx, world2d_class_get_navigation_map, "get_navigation_map", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "direct_space_state"),
        JS_NewCFunction(ctx, world2d_class_get_direct_space_state, "get_direct_space_state", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
	
}

static void define_world2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_world2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&World2D::__class_id);
	classes["World2D"] = World2D::__class_id;
	class_id_list.insert(World2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), World2D::__class_id, &world2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, World2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, World2D::__class_id, proto);

	define_world2d_property(ctx, proto);
	define_world2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, world2d_class_proto_funcs, _countof(world2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, world2d_class_constructor, "World2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "World2D", ctor);

	return 0;
}

JSModuleDef *_js_init_world2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "World2D");
	return m;
}

JSModuleDef *js_init_world2d_module(JSContext *ctx) {
	return _js_init_world2d_module(ctx, "@godot/classes/world2d");
}

void register_world2d() {
	World2D::__init_js_class_id();
	js_init_world2d_module(ctx);
}