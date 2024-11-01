
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/light_occluder2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void light_occluder2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef light_occluder2d_class_def = {
	"LightOccluder2D",
	.finalizer = light_occluder2d_class_finalizer
};

static JSValue light_occluder2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, LightOccluder2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	LightOccluder2D *light_occluder2d_class;
	if (argc == 1) 
		light_occluder2d_class = static_cast<LightOccluder2D *>(Variant(*argv).operator Object *());
	else 
		light_occluder2d_class = memnew(LightOccluder2D);
	if (!light_occluder2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, light_occluder2d_class);
	return obj;
}
static JSValue light_occluder2d_class_set_occluder_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightOccluder2D::set_occluder_polygon, ctx, this_val, argc, argv);
};
static JSValue light_occluder2d_class_get_occluder_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightOccluder2D::get_occluder_polygon, ctx, this_val, argc, argv);
};
static JSValue light_occluder2d_class_set_occluder_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightOccluder2D::set_occluder_light_mask, ctx, this_val, argc, argv);
};
static JSValue light_occluder2d_class_get_occluder_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightOccluder2D::get_occluder_light_mask, ctx, this_val, argc, argv);
};
static JSValue light_occluder2d_class_set_as_sdf_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightOccluder2D::set_as_sdf_collision, ctx, this_val, argc, argv);
};
static JSValue light_occluder2d_class_is_set_as_sdf_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightOccluder2D::is_set_as_sdf_collision, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry light_occluder2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_occluder_polygon", 1, &light_occluder2d_class_set_occluder_polygon),
	JS_CFUNC_DEF("get_occluder_polygon", 0, &light_occluder2d_class_get_occluder_polygon),
	JS_CFUNC_DEF("set_occluder_light_mask", 1, &light_occluder2d_class_set_occluder_light_mask),
	JS_CFUNC_DEF("get_occluder_light_mask", 0, &light_occluder2d_class_get_occluder_light_mask),
	JS_CFUNC_DEF("set_as_sdf_collision", 1, &light_occluder2d_class_set_as_sdf_collision),
	JS_CFUNC_DEF("is_set_as_sdf_collision", 0, &light_occluder2d_class_is_set_as_sdf_collision),
};

static void define_light_occluder2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "occluder"),
        JS_NewCFunction(ctx, light_occluder2d_class_get_occluder_polygon, "get_occluder_polygon", 0),
        JS_NewCFunction(ctx, light_occluder2d_class_set_occluder_polygon, "set_occluder_polygon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sdf_collision"),
        JS_NewCFunction(ctx, light_occluder2d_class_is_set_as_sdf_collision, "is_set_as_sdf_collision", 0),
        JS_NewCFunction(ctx, light_occluder2d_class_set_as_sdf_collision, "set_as_sdf_collision", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "occluder_light_mask"),
        JS_NewCFunction(ctx, light_occluder2d_class_get_occluder_light_mask, "get_occluder_light_mask", 0),
        JS_NewCFunction(ctx, light_occluder2d_class_set_occluder_light_mask, "set_occluder_light_mask", 1),
        JS_PROP_GETSET
    );
	
}

static void define_light_occluder2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_light_occluder2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["LightOccluder2D"] = LightOccluder2D::__class_id;
	class_id_list.insert(LightOccluder2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LightOccluder2D::__class_id, &light_occluder2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, LightOccluder2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightOccluder2D::__class_id, proto);

	define_light_occluder2d_property(ctx, proto);
	define_light_occluder2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, light_occluder2d_class_proto_funcs, _countof(light_occluder2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, light_occluder2d_class_constructor, "LightOccluder2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "LightOccluder2D", ctor);

	return 0;
}

JSModuleDef *_js_init_light_occluder2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_light_occluder2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightOccluder2D");
	return m;
}

JSModuleDef *js_init_light_occluder2d_module(JSContext *ctx) {
	return _js_init_light_occluder2d_module(ctx, "@godot/classes/light_occluder2d");
}

void register_light_occluder2d() {
	LightOccluder2D::__init_js_class_id();
	js_init_light_occluder2d_module(ctx);
}