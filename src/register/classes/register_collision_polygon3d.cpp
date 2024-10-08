
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/collision_polygon3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_polygon3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionPolygon3D *collision_polygon3d = static_cast<CollisionPolygon3D *>(JS_GetOpaque(val, CollisionPolygon3D::__class_id));
	if (collision_polygon3d)
		CollisionPolygon3D::free(nullptr, collision_polygon3d);
}

static JSClassDef collision_polygon3d_class_def = {
	"CollisionPolygon3D",
	.finalizer = collision_polygon3d_class_finalizer
};

static JSValue collision_polygon3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CollisionPolygon3D *collision_polygon3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CollisionPolygon3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	collision_polygon3d_class = memnew(CollisionPolygon3D);
	if (!collision_polygon3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, collision_polygon3d_class);
	return obj;
}
static JSValue collision_polygon3d_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionPolygon3D::set_depth, CollisionPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon3D::get_depth, CollisionPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon3d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionPolygon3D::set_polygon, CollisionPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon3D::get_polygon, CollisionPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon3d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionPolygon3D::set_disabled, CollisionPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon3D::is_disabled, CollisionPolygon3D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionPolygon3D::set_margin, CollisionPolygon3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon3D::get_margin, CollisionPolygon3D::__class_id, ctx, this_val, argv);
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

static int js_collision_polygon3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CollisionPolygon3D::__class_id);
	classes["CollisionPolygon3D"] = CollisionPolygon3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CollisionPolygon3D::__class_id, &collision_polygon3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionPolygon3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_polygon3d_class_proto_funcs, _countof(collision_polygon3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, collision_polygon3d_class_constructor, "CollisionPolygon3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CollisionPolygon3D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_polygon3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_polygon3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionPolygon3D");
	return m;
}

JSModuleDef *js_init_collision_polygon3d_module(JSContext *ctx) {
	return _js_init_collision_polygon3d_module(ctx, "godot/classes/collision_polygon3d");
}

void register_collision_polygon3d() {
	js_init_collision_polygon3d_module(ctx);
}