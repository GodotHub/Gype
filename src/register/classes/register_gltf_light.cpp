
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_light.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_light_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_light_class_def = {
	"GLTFLight",
	.finalizer = gltf_light_class_finalizer
};

static JSValue gltf_light_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFLight::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFLight *gltf_light_class;
	if (argc == 1) 
		gltf_light_class = static_cast<GLTFLight *>(Variant(*argv).operator Object *());
	else 
		gltf_light_class = memnew(GLTFLight);
	if (!gltf_light_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_light_class);
	return obj;
}
static JSValue gltf_light_class_to_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFLight::to_node, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_to_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFLight::to_dictionary, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_color, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_color, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_intensity, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_intensity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_intensity, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_light_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_light_type, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_light_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_light_type, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_range, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_range, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_inner_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_inner_cone_angle, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_inner_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_inner_cone_angle, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_outer_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_outer_cone_angle, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_outer_cone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_outer_cone_angle, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFLight::get_additional_data, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFLight::set_additional_data, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFLight::from_node, ctx, this_val, argc, argv);
};
static JSValue gltf_light_class_from_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFLight::from_dictionary, ctx, this_val, argc, argv);
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

static void define_gltf_light_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, gltf_light_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, gltf_light_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "intensity"),
        JS_NewCFunction(ctx, gltf_light_class_get_intensity, "get_intensity", 0),
        JS_NewCFunction(ctx, gltf_light_class_set_intensity, "set_intensity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "light_type"),
        JS_NewCFunction(ctx, gltf_light_class_get_light_type, "get_light_type", 0),
        JS_NewCFunction(ctx, gltf_light_class_set_light_type, "set_light_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "range"),
        JS_NewCFunction(ctx, gltf_light_class_get_range, "get_range", 0),
        JS_NewCFunction(ctx, gltf_light_class_set_range, "set_range", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "inner_cone_angle"),
        JS_NewCFunction(ctx, gltf_light_class_get_inner_cone_angle, "get_inner_cone_angle", 0),
        JS_NewCFunction(ctx, gltf_light_class_set_inner_cone_angle, "set_inner_cone_angle", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "outer_cone_angle"),
        JS_NewCFunction(ctx, gltf_light_class_get_outer_cone_angle, "get_outer_cone_angle", 0),
        JS_NewCFunction(ctx, gltf_light_class_set_outer_cone_angle, "set_outer_cone_angle", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_light_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_light_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GLTFLight"] = GLTFLight::__class_id;
	class_id_list.insert(GLTFLight::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFLight::__class_id, &gltf_light_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFLight::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFLight::__class_id, proto);

	define_gltf_light_property(ctx, proto);
	define_gltf_light_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_light_class_proto_funcs, _countof(gltf_light_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_light_class_constructor, "GLTFLight", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_light_class_static_funcs, _countof(gltf_light_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFLight", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_light_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_light_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFLight");
	return m;
}

JSModuleDef *js_init_gltf_light_module(JSContext *ctx) {
	return _js_init_gltf_light_module(ctx, "@godot/classes/gltf_light");
}

void register_gltf_light() {
	GLTFLight::__init_js_class_id();
	js_init_gltf_light_module(ctx);
}