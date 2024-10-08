
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/gltf_light.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_light_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFLight *gltf_light = static_cast<GLTFLight *>(JS_GetOpaque(val, GLTFLight::__class_id));
	if (gltf_light)
		GLTFLight::free(nullptr, gltf_light);
}

static JSClassDef gltf_light_class_def = {
	"GLTFLight",
	.finalizer = gltf_light_class_finalizer
};

static JSValue gltf_light_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFLight *gltf_light_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFLight::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_light_class = memnew(GLTFLight);
	if (!gltf_light_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_light_class);
	return obj;
}
static JSValue gltf_light_class_to_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFLight::to_node, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_to_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFLight::to_dictionary, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_color, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_color, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_get_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_intensity, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_intensity, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_get_light_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_light_type, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_light_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_light_type, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_get_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_range, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_range, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_get_inner_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_inner_cone_angle, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_inner_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_inner_cone_angle, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_get_outer_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_outer_cone_angle, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_outer_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_outer_cone_angle, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFLight::get_additional_data, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFLight::set_additional_data, GLTFLight::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_light_class_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFLight::from_node, GLTFLight::__class_id, ctx, this_val, argv);
};
static JSValue gltf_light_class_from_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFLight::from_dictionary, GLTFLight::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gltf_light_class_proto_funcs[] = {
	JS_CFUNC_DEF("to_node", 0, &gltf_light_class_to_node),
	JS_CFUNC_DEF("to_dictionary", 0, &gltf_light_class_to_dictionary),
	JS_CFUNC_DEF("get_color", 0, &gltf_light_class_get_color),
	JS_CFUNC_DEF("set_color", 1, &gltf_light_class_set_color),
	JS_CFUNC_DEF("get_intensity", 0, &gltf_light_class_get_intensity),
	JS_CFUNC_DEF("set_intensity", 1, &gltf_light_class_set_intensity),
	JS_CFUNC_DEF("get_light_type", 0, &gltf_light_class_get_light_type),
	JS_CFUNC_DEF("set_light_type", 1, &gltf_light_class_set_light_type),
	JS_CFUNC_DEF("get_range", 0, &gltf_light_class_get_range),
	JS_CFUNC_DEF("set_range", 1, &gltf_light_class_set_range),
	JS_CFUNC_DEF("get_inner_cone_angle", 0, &gltf_light_class_get_inner_cone_angle),
	JS_CFUNC_DEF("set_inner_cone_angle", 1, &gltf_light_class_set_inner_cone_angle),
	JS_CFUNC_DEF("get_outer_cone_angle", 0, &gltf_light_class_get_outer_cone_angle),
	JS_CFUNC_DEF("set_outer_cone_angle", 1, &gltf_light_class_set_outer_cone_angle),
	JS_CFUNC_DEF("get_additional_data", 1, &gltf_light_class_get_additional_data),
	JS_CFUNC_DEF("set_additional_data", 2, &gltf_light_class_set_additional_data),
};
static const JSCFunctionListEntry gltf_light_class_static_funcs[] = {
	JS_CFUNC_DEF("from_node", 1, &gltf_light_class_from_node),
	JS_CFUNC_DEF("from_dictionary", 1, &gltf_light_class_from_dictionary),
};

static int js_gltf_light_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFLight::__class_id);
	classes["GLTFLight"] = GLTFLight::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFLight::__class_id, &gltf_light_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFLight::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_light_class_proto_funcs, _countof(gltf_light_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_light_class_constructor, "GLTFLight", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_light_class_static_funcs, _countof(gltf_light_class_static_funcs));

	JS_SetModuleExport(ctx, m, "GLTFLight", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_light_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_light_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFLight");
	return m;
}

JSModuleDef *js_init_gltf_light_module(JSContext *ctx) {
	return _js_init_gltf_light_module(ctx, "godot/classes/gltf_light");
}

void register_gltf_light() {
	js_init_gltf_light_module(ctx);
}