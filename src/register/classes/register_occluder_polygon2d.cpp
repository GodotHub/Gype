
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void occluder_polygon2d_class_finalizer(JSRuntime *rt, JSValue val) {
	OccluderPolygon2D *occluder_polygon2d = static_cast<OccluderPolygon2D *>(JS_GetOpaque(val, OccluderPolygon2D::__class_id));
	if (occluder_polygon2d)
		OccluderPolygon2D::free(nullptr, occluder_polygon2d);
}

static JSClassDef occluder_polygon2d_class_def = {
	"OccluderPolygon2D",
	.finalizer = occluder_polygon2d_class_finalizer
};

static JSValue occluder_polygon2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OccluderPolygon2D *occluder_polygon2d_class;
	JSValue obj = JS_NewObjectClass(ctx, OccluderPolygon2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	occluder_polygon2d_class = memnew(OccluderPolygon2D);
	if (!occluder_polygon2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, occluder_polygon2d_class);
	return obj;
}
static JSValue occluder_polygon2d_class_set_closed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderPolygon2D::set_closed, OccluderPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_polygon2d_class_is_closed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderPolygon2D::is_closed, OccluderPolygon2D::__class_id, ctx, this_val, argv);
};
static JSValue occluder_polygon2d_class_set_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderPolygon2D::set_cull_mode, OccluderPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_polygon2d_class_get_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderPolygon2D::get_cull_mode, OccluderPolygon2D::__class_id, ctx, this_val, argv);
};
static JSValue occluder_polygon2d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderPolygon2D::set_polygon, OccluderPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_polygon2d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderPolygon2D::get_polygon, OccluderPolygon2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry occluder_polygon2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_closed", 1, &occluder_polygon2d_class_set_closed),
	JS_CFUNC_DEF("is_closed", 0, &occluder_polygon2d_class_is_closed),
	JS_CFUNC_DEF("set_cull_mode", 1, &occluder_polygon2d_class_set_cull_mode),
	JS_CFUNC_DEF("get_cull_mode", 0, &occluder_polygon2d_class_get_cull_mode),
	JS_CFUNC_DEF("set_polygon", 1, &occluder_polygon2d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &occluder_polygon2d_class_get_polygon),
};

static int js_occluder_polygon2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OccluderPolygon2D::__class_id);
	classes["OccluderPolygon2D"] = OccluderPolygon2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OccluderPolygon2D::__class_id, &occluder_polygon2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OccluderPolygon2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, occluder_polygon2d_class_proto_funcs, _countof(occluder_polygon2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, occluder_polygon2d_class_constructor, "OccluderPolygon2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OccluderPolygon2D", ctor);

	return 0;
}

JSModuleDef *_js_init_occluder_polygon2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_occluder_polygon2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OccluderPolygon2D");
	return m;
}

JSModuleDef *js_init_occluder_polygon2d_module(JSContext *ctx) {
	return _js_init_occluder_polygon2d_module(ctx, "godot/classes/occluder_polygon2d");
}

void register_occluder_polygon2d() {
	js_init_occluder_polygon2d_module(ctx);
}