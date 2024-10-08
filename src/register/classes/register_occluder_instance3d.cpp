
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/occluder_instance3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void occluder_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	OccluderInstance3D *occluder_instance3d = static_cast<OccluderInstance3D *>(JS_GetOpaque(val, OccluderInstance3D::__class_id));
	if (occluder_instance3d)
		OccluderInstance3D::free(nullptr, occluder_instance3d);
}

static JSClassDef occluder_instance3d_class_def = {
	"OccluderInstance3D",
	.finalizer = occluder_instance3d_class_finalizer
};

static JSValue occluder_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OccluderInstance3D *occluder_instance3d_class;
	JSValue obj = JS_NewObjectClass(ctx, OccluderInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	occluder_instance3d_class = memnew(OccluderInstance3D);
	if (!occluder_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, occluder_instance3d_class);
	return obj;
}
static JSValue occluder_instance3d_class_set_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderInstance3D::set_bake_mask, OccluderInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_instance3d_class_get_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderInstance3D::get_bake_mask, OccluderInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue occluder_instance3d_class_set_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderInstance3D::set_bake_mask_value, OccluderInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_instance3d_class_get_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderInstance3D::get_bake_mask_value, OccluderInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue occluder_instance3d_class_set_bake_simplification_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderInstance3D::set_bake_simplification_distance, OccluderInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_instance3d_class_get_bake_simplification_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderInstance3D::get_bake_simplification_distance, OccluderInstance3D::__class_id, ctx, this_val, argv);
};
static JSValue occluder_instance3d_class_set_occluder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderInstance3D::set_occluder, OccluderInstance3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_instance3d_class_get_occluder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderInstance3D::get_occluder, OccluderInstance3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry occluder_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bake_mask", 1, &occluder_instance3d_class_set_bake_mask),
	JS_CFUNC_DEF("get_bake_mask", 0, &occluder_instance3d_class_get_bake_mask),
	JS_CFUNC_DEF("set_bake_mask_value", 2, &occluder_instance3d_class_set_bake_mask_value),
	JS_CFUNC_DEF("get_bake_mask_value", 1, &occluder_instance3d_class_get_bake_mask_value),
	JS_CFUNC_DEF("set_bake_simplification_distance", 1, &occluder_instance3d_class_set_bake_simplification_distance),
	JS_CFUNC_DEF("get_bake_simplification_distance", 0, &occluder_instance3d_class_get_bake_simplification_distance),
	JS_CFUNC_DEF("set_occluder", 1, &occluder_instance3d_class_set_occluder),
	JS_CFUNC_DEF("get_occluder", 0, &occluder_instance3d_class_get_occluder),
};

static int js_occluder_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OccluderInstance3D::__class_id);
	classes["OccluderInstance3D"] = OccluderInstance3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OccluderInstance3D::__class_id, &occluder_instance3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OccluderInstance3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, occluder_instance3d_class_proto_funcs, _countof(occluder_instance3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, occluder_instance3d_class_constructor, "OccluderInstance3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OccluderInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_occluder_instance3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_occluder_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OccluderInstance3D");
	return m;
}

JSModuleDef *js_init_occluder_instance3d_module(JSContext *ctx) {
	return _js_init_occluder_instance3d_module(ctx, "godot/classes/occluder_instance3d");
}

void register_occluder_instance3d() {
	js_init_occluder_instance3d_module(ctx);
}