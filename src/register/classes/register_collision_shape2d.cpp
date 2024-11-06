
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/collision_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionShape2D *collision_shape2d = static_cast<CollisionShape2D *>(JS_GetOpaque(val, CollisionShape2D::__class_id));
	if (collision_shape2d)
		memdelete(collision_shape2d);
}

static JSClassDef collision_shape2d_class_def = {
	"CollisionShape2D",
	.finalizer = collision_shape2d_class_finalizer
};

static JSValue collision_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CollisionShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	CollisionShape2D *collision_shape2d_class;
	if (argc == 1) 
		collision_shape2d_class = static_cast<CollisionShape2D *>(Variant(*argv).operator Object *());
	else 
		collision_shape2d_class = memnew(CollisionShape2D);
	if (!collision_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, collision_shape2d_class);
	return obj;
}
static JSValue collision_shape2d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionShape2D::set_shape, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape2D::get_shape, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionShape2D::set_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape2D::is_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_set_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionShape2D::set_one_way_collision, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_is_one_way_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape2D::is_one_way_collision_enabled, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_set_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionShape2D::set_one_way_collision_margin, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_get_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape2D::get_one_way_collision_margin, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_set_debug_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionShape2D::set_debug_color, ctx, this_val, argc, argv);
};
static JSValue collision_shape2d_class_get_debug_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape2D::get_debug_color, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry collision_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shape", 1, &collision_shape2d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &collision_shape2d_class_get_shape),
	JS_CFUNC_DEF("set_disabled", 1, &collision_shape2d_class_set_disabled),
	JS_CFUNC_DEF("is_disabled", 0, &collision_shape2d_class_is_disabled),
	JS_CFUNC_DEF("set_one_way_collision", 1, &collision_shape2d_class_set_one_way_collision),
	JS_CFUNC_DEF("is_one_way_collision_enabled", 0, &collision_shape2d_class_is_one_way_collision_enabled),
	JS_CFUNC_DEF("set_one_way_collision_margin", 1, &collision_shape2d_class_set_one_way_collision_margin),
	JS_CFUNC_DEF("get_one_way_collision_margin", 0, &collision_shape2d_class_get_one_way_collision_margin),
	JS_CFUNC_DEF("set_debug_color", 1, &collision_shape2d_class_set_debug_color),
	JS_CFUNC_DEF("get_debug_color", 0, &collision_shape2d_class_get_debug_color),
};

static void define_collision_shape2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, collision_shape2d_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, collision_shape2d_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "disabled"),
        JS_NewCFunction(ctx, collision_shape2d_class_is_disabled, "is_disabled", 0),
        JS_NewCFunction(ctx, collision_shape2d_class_set_disabled, "set_disabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "one_way_collision"),
        JS_NewCFunction(ctx, collision_shape2d_class_is_one_way_collision_enabled, "is_one_way_collision_enabled", 0),
        JS_NewCFunction(ctx, collision_shape2d_class_set_one_way_collision, "set_one_way_collision", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "one_way_collision_margin"),
        JS_NewCFunction(ctx, collision_shape2d_class_get_one_way_collision_margin, "get_one_way_collision_margin", 0),
        JS_NewCFunction(ctx, collision_shape2d_class_set_one_way_collision_margin, "set_one_way_collision_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "debug_color"),
        JS_NewCFunction(ctx, collision_shape2d_class_get_debug_color, "get_debug_color", 0),
        JS_NewCFunction(ctx, collision_shape2d_class_set_debug_color, "set_debug_color", 1),
        JS_PROP_GETSET
    );
	
}

static void define_collision_shape2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_collision_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CollisionShape2D"] = CollisionShape2D::__class_id;
	class_id_list.insert(CollisionShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CollisionShape2D::__class_id, &collision_shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CollisionShape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionShape2D::__class_id, proto);

	define_collision_shape2d_property(ctx, proto);
	define_collision_shape2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_shape2d_class_proto_funcs, _countof(collision_shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, collision_shape2d_class_constructor, "CollisionShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CollisionShape2D", ctor);
	constructors[CollisionShape2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_collision_shape2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionShape2D");
	return m;
}

JSModuleDef *js_init_collision_shape2d_module(JSContext *ctx) {
	return _js_init_collision_shape2d_module(ctx, "@godot/classes/collision_shape2d");
}

void register_collision_shape2d() {
	CollisionShape2D::__init_js_class_id();
	js_init_collision_shape2d_module(ctx);
}