
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/height_map_shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void height_map_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	HeightMapShape3D *height_map_shape3d = static_cast<HeightMapShape3D *>(JS_GetOpaque(val, HeightMapShape3D::__class_id));
	if (height_map_shape3d)
		HeightMapShape3D::free(nullptr, height_map_shape3d);
}

static JSClassDef height_map_shape3d_class_def = {
	"HeightMapShape3D",
	.finalizer = height_map_shape3d_class_finalizer
};

static JSValue height_map_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HeightMapShape3D *height_map_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, HeightMapShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	height_map_shape3d_class = memnew(HeightMapShape3D);
	if (!height_map_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, height_map_shape3d_class);
	return obj;
}
static JSValue height_map_shape3d_class_set_map_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HeightMapShape3D::set_map_width, HeightMapShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue height_map_shape3d_class_get_map_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HeightMapShape3D::get_map_width, HeightMapShape3D::__class_id, ctx, this_val, argv);
};
static JSValue height_map_shape3d_class_set_map_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HeightMapShape3D::set_map_depth, HeightMapShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue height_map_shape3d_class_get_map_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HeightMapShape3D::get_map_depth, HeightMapShape3D::__class_id, ctx, this_val, argv);
};
static JSValue height_map_shape3d_class_set_map_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HeightMapShape3D::set_map_data, HeightMapShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue height_map_shape3d_class_get_map_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HeightMapShape3D::get_map_data, HeightMapShape3D::__class_id, ctx, this_val, argv);
};
static JSValue height_map_shape3d_class_get_min_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HeightMapShape3D::get_min_height, HeightMapShape3D::__class_id, ctx, this_val, argv);
};
static JSValue height_map_shape3d_class_get_max_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HeightMapShape3D::get_max_height, HeightMapShape3D::__class_id, ctx, this_val, argv);
};
static JSValue height_map_shape3d_class_update_map_data_from_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HeightMapShape3D::update_map_data_from_image, HeightMapShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry height_map_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_map_width", 1, &height_map_shape3d_class_set_map_width),
	JS_CFUNC_DEF("get_map_width", 0, &height_map_shape3d_class_get_map_width),
	JS_CFUNC_DEF("set_map_depth", 1, &height_map_shape3d_class_set_map_depth),
	JS_CFUNC_DEF("get_map_depth", 0, &height_map_shape3d_class_get_map_depth),
	JS_CFUNC_DEF("set_map_data", 1, &height_map_shape3d_class_set_map_data),
	JS_CFUNC_DEF("get_map_data", 0, &height_map_shape3d_class_get_map_data),
	JS_CFUNC_DEF("get_min_height", 0, &height_map_shape3d_class_get_min_height),
	JS_CFUNC_DEF("get_max_height", 0, &height_map_shape3d_class_get_max_height),
	JS_CFUNC_DEF("update_map_data_from_image", 3, &height_map_shape3d_class_update_map_data_from_image),
};

static int js_height_map_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HeightMapShape3D::__class_id);
	classes["HeightMapShape3D"] = HeightMapShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HeightMapShape3D::__class_id, &height_map_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HeightMapShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, height_map_shape3d_class_proto_funcs, _countof(height_map_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, height_map_shape3d_class_constructor, "HeightMapShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HeightMapShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_height_map_shape3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_height_map_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HeightMapShape3D");
	return m;
}

JSModuleDef *js_init_height_map_shape3d_module(JSContext *ctx) {
	return _js_init_height_map_shape3d_module(ctx, "godot/classes/height_map_shape3d");
}

void register_height_map_shape3d() {
	js_init_height_map_shape3d_module(ctx);
}