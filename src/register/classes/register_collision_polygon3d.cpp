
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/collision_polygon3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_polygon3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef collision_polygon3d_class_def = {
	"CollisionPolygon3D",
	.finalizer = collision_polygon3d_class_finalizer
};

static JSValue collision_polygon3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CollisionPolygon3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CollisionPolygon3D *collision_polygon3d_class;
	if (argc == 1) {
		Variant vobj = *argv;
		collision_polygon3d_class = static_cast<CollisionPolygon3D *>(static_cast<Object *>(vobj));
	} else {
		collision_polygon3d_class = memnew(CollisionPolygon3D);
	}
	if (!collision_polygon3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, collision_polygon3d_class);	
	return obj;
}
static JSValue collision_polygon3d_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionPolygon3D::set_depth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon3D::get_depth, ctx, this_val, argc, argv);
};
static JSValue collision_polygon3d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionPolygon3D::set_polygon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon3D::get_polygon, ctx, this_val, argc, argv);
};
static JSValue collision_polygon3d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionPolygon3D::set_disabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon3D::is_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_polygon3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionPolygon3D::set_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon3D::get_margin, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry collision_polygon3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_depth", 1, &collision_polygon3d_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &collision_polygon3d_class_get_depth),
	JS_CFUNC_DEF("set_polygon", 1, &collision_polygon3d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &collision_polygon3d_class_get_polygon),
	JS_CFUNC_DEF("set_disabled", 1, &collision_polygon3d_class_set_disabled),
	JS_CFUNC_DEF("is_disabled", 0, &collision_polygon3d_class_is_disabled),
	JS_CFUNC_DEF("set_margin", 1, &collision_polygon3d_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &collision_polygon3d_class_get_margin),
};

void define_collision_polygon3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "depth"),
        JS_NewCFunction(ctx, collision_polygon3d_class_get_depth, "get_depth", 0),
        JS_NewCFunction(ctx, collision_polygon3d_class_set_depth, "set_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disabled"),
        JS_NewCFunction(ctx, collision_polygon3d_class_is_disabled, "is_disabled", 0),
        JS_NewCFunction(ctx, collision_polygon3d_class_set_disabled, "set_disabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "polygon"),
        JS_NewCFunction(ctx, collision_polygon3d_class_get_polygon, "get_polygon", 0),
        JS_NewCFunction(ctx, collision_polygon3d_class_set_polygon, "set_polygon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "margin"),
        JS_NewCFunction(ctx, collision_polygon3d_class_get_margin, "get_margin", 0),
        JS_NewCFunction(ctx, collision_polygon3d_class_set_margin, "set_margin", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_collision_polygon3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CollisionPolygon3D::__class_id);
	classes["CollisionPolygon3D"] = CollisionPolygon3D::__class_id;
	class_id_list.insert(CollisionPolygon3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CollisionPolygon3D::__class_id, &collision_polygon3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CollisionPolygon3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionPolygon3D::__class_id, proto);

	define_collision_polygon3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_polygon3d_class_proto_funcs, _countof(collision_polygon3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, collision_polygon3d_class_constructor, "CollisionPolygon3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CollisionPolygon3D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_polygon3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_polygon3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionPolygon3D");
	return m;
}

JSModuleDef *js_init_collision_polygon3d_module(JSContext *ctx) {
	return _js_init_collision_polygon3d_module(ctx, "@godot/classes/collision_polygon3d");
}

void register_collision_polygon3d() {
	CollisionPolygon3D::__init_js_class_id();
	js_init_collision_polygon3d_module(ctx);
}