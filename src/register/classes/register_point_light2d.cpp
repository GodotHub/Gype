
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/classes/point_light2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void point_light2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef point_light2d_class_def = {
	"PointLight2D",
	.finalizer = point_light2d_class_finalizer
};

static JSValue point_light2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PointLight2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	PointLight2D *point_light2d_class;
	if (argc == 1) 
		point_light2d_class = static_cast<PointLight2D *>(Variant(*argv).operator Object *());
	else 
		point_light2d_class = memnew(PointLight2D);
	if (!point_light2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, point_light2d_class);
	return obj;
}
static JSValue point_light2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PointLight2D::set_texture, ctx, this_val, argc, argv);
};
static JSValue point_light2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PointLight2D::get_texture, ctx, this_val, argc, argv);
};
static JSValue point_light2d_class_set_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PointLight2D::set_texture_offset, ctx, this_val, argc, argv);
};
static JSValue point_light2d_class_get_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PointLight2D::get_texture_offset, ctx, this_val, argc, argv);
};
static JSValue point_light2d_class_set_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PointLight2D::set_texture_scale, ctx, this_val, argc, argv);
};
static JSValue point_light2d_class_get_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PointLight2D::get_texture_scale, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry point_light2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &point_light2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &point_light2d_class_get_texture),
	JS_CFUNC_DEF("set_texture_offset", 1, &point_light2d_class_set_texture_offset),
	JS_CFUNC_DEF("get_texture_offset", 0, &point_light2d_class_get_texture_offset),
	JS_CFUNC_DEF("set_texture_scale", 1, &point_light2d_class_set_texture_scale),
	JS_CFUNC_DEF("get_texture_scale", 0, &point_light2d_class_get_texture_scale),
};

static void define_point_light2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, point_light2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, point_light2d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, point_light2d_class_get_texture_offset, "get_texture_offset", 0),
        JS_NewCFunction(ctx, point_light2d_class_set_texture_offset, "set_texture_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_scale"),
        JS_NewCFunction(ctx, point_light2d_class_get_texture_scale, "get_texture_scale", 0),
        JS_NewCFunction(ctx, point_light2d_class_set_texture_scale, "set_texture_scale", 1),
        JS_PROP_GETSET
    );
	
}

static void define_point_light2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_point_light2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PointLight2D"] = PointLight2D::__class_id;
	class_id_list.insert(PointLight2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PointLight2D::__class_id, &point_light2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PointLight2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Light2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PointLight2D::__class_id, proto);

	define_point_light2d_property(ctx, proto);
	define_point_light2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, point_light2d_class_proto_funcs, _countof(point_light2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, point_light2d_class_constructor, "PointLight2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PointLight2D", ctor);

	return 0;
}

JSModuleDef *_js_init_point_light2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/light2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_point_light2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PointLight2D");
	return m;
}

JSModuleDef *js_init_point_light2d_module(JSContext *ctx) {
	return _js_init_point_light2d_module(ctx, "@godot/classes/point_light2d");
}

void register_point_light2d() {
	PointLight2D::__init_js_class_id();
	js_init_point_light2d_module(ctx);
}