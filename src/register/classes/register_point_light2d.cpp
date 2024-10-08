
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/classes/point_light2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void point_light2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PointLight2D *point_light2d = static_cast<PointLight2D *>(JS_GetOpaque(val, PointLight2D::__class_id));
	if (point_light2d)
		PointLight2D::free(nullptr, point_light2d);
}

static JSClassDef point_light2d_class_def = {
	"PointLight2D",
	.finalizer = point_light2d_class_finalizer
};

static JSValue point_light2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PointLight2D *point_light2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PointLight2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	point_light2d_class = memnew(PointLight2D);
	if (!point_light2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, point_light2d_class);
	return obj;
}
static JSValue point_light2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PointLight2D::set_texture, PointLight2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue point_light2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PointLight2D::get_texture, PointLight2D::__class_id, ctx, this_val, argv);
};
static JSValue point_light2d_class_set_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PointLight2D::set_texture_offset, PointLight2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue point_light2d_class_get_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PointLight2D::get_texture_offset, PointLight2D::__class_id, ctx, this_val, argv);
};
static JSValue point_light2d_class_set_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PointLight2D::set_texture_scale, PointLight2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue point_light2d_class_get_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PointLight2D::get_texture_scale, PointLight2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry point_light2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &point_light2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &point_light2d_class_get_texture),
	JS_CFUNC_DEF("set_texture_offset", 1, &point_light2d_class_set_texture_offset),
	JS_CFUNC_DEF("get_texture_offset", 0, &point_light2d_class_get_texture_offset),
	JS_CFUNC_DEF("set_texture_scale", 1, &point_light2d_class_set_texture_scale),
	JS_CFUNC_DEF("get_texture_scale", 0, &point_light2d_class_get_texture_scale),
};

static int js_point_light2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PointLight2D::__class_id);
	classes["PointLight2D"] = PointLight2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PointLight2D::__class_id, &point_light2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Light2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PointLight2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, point_light2d_class_proto_funcs, _countof(point_light2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, point_light2d_class_constructor, "PointLight2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PointLight2D", ctor);

	return 0;
}

JSModuleDef *_js_init_point_light2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_point_light2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PointLight2D");
	return m;
}

JSModuleDef *js_init_point_light2d_module(JSContext *ctx) {
	return _js_init_point_light2d_module(ctx, "godot/classes/point_light2d");
}

void register_point_light2d() {
	js_init_point_light2d_module(ctx);
}