
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_object2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionObject2D *collision_object2d = static_cast<CollisionObject2D *>(JS_GetOpaque(val, CollisionObject2D::__class_id));
	if (collision_object2d)
		memdelete(collision_object2d);
}

static JSClassDef collision_object2d_class_def = {
	"CollisionObject2D",
	.finalizer = collision_object2d_class_finalizer
};

static JSValue collision_object2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CollisionObject2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	CollisionObject2D *collision_object2d_class;
	if (argc == 1) 
		collision_object2d_class = static_cast<CollisionObject2D *>(Variant(*argv).operator Object *());
	else 
		collision_object2d_class = memnew(CollisionObject2D);
	if (!collision_object2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, collision_object2d_class);
	return obj;
}
static JSValue collision_object2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_rid, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_collision_layer, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_layer, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_collision_mask, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_collision_layer_value, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_layer_value, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_collision_priority, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_priority, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_disable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_disable_mode, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_disable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_disable_mode, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_set_pickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::set_pickable, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_is_pickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::is_pickable, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_create_shape_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CollisionObject2D::create_shape_owner, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_remove_shape_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::remove_shape_owner, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_shape_owners(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CollisionObject2D::get_shape_owners, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_transform, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_transform, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_get_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_owner, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_is_shape_owner_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::is_shape_owner_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_set_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_one_way_collision, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_is_shape_owner_one_way_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::is_shape_owner_one_way_collision_enabled, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_set_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_one_way_collision_margin, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_get_shape_owner_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::get_shape_owner_one_way_collision_margin, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_add_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_add_shape, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_get_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_shape_count, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_shape, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_get_shape_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_shape_index, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_remove_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_remove_shape, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_owner_clear_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CollisionObject2D::shape_owner_clear_shapes, ctx, this_val, argc, argv);
};
static JSValue collision_object2d_class_shape_find_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionObject2D::shape_find_owner, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry collision_object2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &collision_object2d_class_get_rid),
	JS_CFUNC_DEF("set_collision_layer", 1, &collision_object2d_class_set_collision_layer),
	JS_CFUNC_DEF("get_collision_layer", 0, &collision_object2d_class_get_collision_layer),
	JS_CFUNC_DEF("set_collision_mask", 1, &collision_object2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &collision_object2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_layer_value", 2, &collision_object2d_class_set_collision_layer_value),
	JS_CFUNC_DEF("get_collision_layer_value", 1, &collision_object2d_class_get_collision_layer_value),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &collision_object2d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &collision_object2d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_collision_priority", 1, &collision_object2d_class_set_collision_priority),
	JS_CFUNC_DEF("get_collision_priority", 0, &collision_object2d_class_get_collision_priority),
	JS_CFUNC_DEF("set_disable_mode", 1, &collision_object2d_class_set_disable_mode),
	JS_CFUNC_DEF("get_disable_mode", 0, &collision_object2d_class_get_disable_mode),
	JS_CFUNC_DEF("set_pickable", 1, &collision_object2d_class_set_pickable),
	JS_CFUNC_DEF("is_pickable", 0, &collision_object2d_class_is_pickable),
	JS_CFUNC_DEF("create_shape_owner", 1, &collision_object2d_class_create_shape_owner),
	JS_CFUNC_DEF("remove_shape_owner", 1, &collision_object2d_class_remove_shape_owner),
	JS_CFUNC_DEF("get_shape_owners", 0, &collision_object2d_class_get_shape_owners),
	JS_CFUNC_DEF("shape_owner_set_transform", 2, &collision_object2d_class_shape_owner_set_transform),
	JS_CFUNC_DEF("shape_owner_get_transform", 1, &collision_object2d_class_shape_owner_get_transform),
	JS_CFUNC_DEF("shape_owner_get_owner", 1, &collision_object2d_class_shape_owner_get_owner),
	JS_CFUNC_DEF("shape_owner_set_disabled", 2, &collision_object2d_class_shape_owner_set_disabled),
	JS_CFUNC_DEF("is_shape_owner_disabled", 1, &collision_object2d_class_is_shape_owner_disabled),
	JS_CFUNC_DEF("shape_owner_set_one_way_collision", 2, &collision_object2d_class_shape_owner_set_one_way_collision),
	JS_CFUNC_DEF("is_shape_owner_one_way_collision_enabled", 1, &collision_object2d_class_is_shape_owner_one_way_collision_enabled),
	JS_CFUNC_DEF("shape_owner_set_one_way_collision_margin", 2, &collision_object2d_class_shape_owner_set_one_way_collision_margin),
	JS_CFUNC_DEF("get_shape_owner_one_way_collision_margin", 1, &collision_object2d_class_get_shape_owner_one_way_collision_margin),
	JS_CFUNC_DEF("shape_owner_add_shape", 2, &collision_object2d_class_shape_owner_add_shape),
	JS_CFUNC_DEF("shape_owner_get_shape_count", 1, &collision_object2d_class_shape_owner_get_shape_count),
	JS_CFUNC_DEF("shape_owner_get_shape", 2, &collision_object2d_class_shape_owner_get_shape),
	JS_CFUNC_DEF("shape_owner_get_shape_index", 2, &collision_object2d_class_shape_owner_get_shape_index),
	JS_CFUNC_DEF("shape_owner_remove_shape", 2, &collision_object2d_class_shape_owner_remove_shape),
	JS_CFUNC_DEF("shape_owner_clear_shapes", 1, &collision_object2d_class_shape_owner_clear_shapes),
	JS_CFUNC_DEF("shape_find_owner", 1, &collision_object2d_class_shape_find_owner),
};
static JSValue collision_object2d_class_get_input_event_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	CollisionObject2D *opaque = reinterpret_cast<CollisionObject2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "input_event_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "input_event").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "input_event_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue collision_object2d_class_get_mouse_entered_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	CollisionObject2D *opaque = reinterpret_cast<CollisionObject2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "mouse_entered_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "mouse_entered").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "mouse_entered_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue collision_object2d_class_get_mouse_exited_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	CollisionObject2D *opaque = reinterpret_cast<CollisionObject2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "mouse_exited_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "mouse_exited").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "mouse_exited_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue collision_object2d_class_get_mouse_shape_entered_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	CollisionObject2D *opaque = reinterpret_cast<CollisionObject2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "mouse_shape_entered_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "mouse_shape_entered").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "mouse_shape_entered_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue collision_object2d_class_get_mouse_shape_exited_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	CollisionObject2D *opaque = reinterpret_cast<CollisionObject2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "mouse_shape_exited_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "mouse_shape_exited").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "mouse_shape_exited_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_collision_object2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "disable_mode"),
        JS_NewCFunction(ctx, collision_object2d_class_get_disable_mode, "get_disable_mode", 0),
        JS_NewCFunction(ctx, collision_object2d_class_set_disable_mode, "set_disable_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_layer"),
        JS_NewCFunction(ctx, collision_object2d_class_get_collision_layer, "get_collision_layer", 0),
        JS_NewCFunction(ctx, collision_object2d_class_set_collision_layer, "set_collision_layer", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, collision_object2d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, collision_object2d_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_priority"),
        JS_NewCFunction(ctx, collision_object2d_class_get_collision_priority, "get_collision_priority", 0),
        JS_NewCFunction(ctx, collision_object2d_class_set_collision_priority, "set_collision_priority", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "input_pickable"),
        JS_NewCFunction(ctx, collision_object2d_class_is_pickable, "is_pickable", 0),
        JS_NewCFunction(ctx, collision_object2d_class_set_pickable, "set_pickable", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "input_event"),
		JS_NewCFunction(ctx, collision_object2d_class_get_input_event_signal, "get_input_event_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "mouse_entered"),
		JS_NewCFunction(ctx, collision_object2d_class_get_mouse_entered_signal, "get_mouse_entered_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "mouse_exited"),
		JS_NewCFunction(ctx, collision_object2d_class_get_mouse_exited_signal, "get_mouse_exited_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "mouse_shape_entered"),
		JS_NewCFunction(ctx, collision_object2d_class_get_mouse_shape_entered_signal, "get_mouse_shape_entered_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "mouse_shape_exited"),
		JS_NewCFunction(ctx, collision_object2d_class_get_mouse_shape_exited_signal, "get_mouse_shape_exited_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_collision_object2d_enum(JSContext *ctx, JSValue proto) {
	JSValue DisableMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DisableMode_obj, "DISABLE_MODE_REMOVE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DisableMode_obj, "DISABLE_MODE_MAKE_STATIC", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, DisableMode_obj, "DISABLE_MODE_KEEP_ACTIVE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "DisableMode", DisableMode_obj);
}

static int js_collision_object2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CollisionObject2D"] = CollisionObject2D::__class_id;
	class_id_list.insert(CollisionObject2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CollisionObject2D::__class_id, &collision_object2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CollisionObject2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionObject2D::__class_id, proto);

	define_collision_object2d_property(ctx, proto);
	define_collision_object2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_object2d_class_proto_funcs, _countof(collision_object2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, collision_object2d_class_constructor, "CollisionObject2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CollisionObject2D", ctor);
	constructors[CollisionObject2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_collision_object2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_object2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionObject2D");
	return m;
}

JSModuleDef *js_init_collision_object2d_module(JSContext *ctx) {
	return _js_init_collision_object2d_module(ctx, "@godot/classes/collision_object2d");
}

void register_collision_object2d() {
	CollisionObject2D::__init_js_class_id();
	js_init_collision_object2d_module(ctx);
}