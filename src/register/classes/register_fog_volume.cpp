
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/fog_volume.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void fog_volume_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef fog_volume_class_def = {
	"FogVolume",
	.finalizer = fog_volume_class_finalizer
};

static JSValue fog_volume_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FogVolume::__class_id);
	if (JS_IsException(obj))
		return obj;
	FogVolume *fog_volume_class = memnew(FogVolume);
	if (!fog_volume_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, fog_volume_class);	
	return obj;
}
static JSValue fog_volume_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FogVolume::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_volume_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FogVolume::get_size, ctx, this_val, argc, argv);
};
static JSValue fog_volume_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FogVolume::set_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_volume_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FogVolume::get_shape, ctx, this_val, argc, argv);
};
static JSValue fog_volume_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FogVolume::set_material, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue fog_volume_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FogVolume::get_material, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry fog_volume_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &fog_volume_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &fog_volume_class_get_size),
	JS_CFUNC_DEF("set_shape", 1, &fog_volume_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &fog_volume_class_get_shape),
	JS_CFUNC_DEF("set_material", 1, &fog_volume_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &fog_volume_class_get_material),
};

void define_fog_volume_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, fog_volume_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, fog_volume_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, fog_volume_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, fog_volume_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "material"),
        JS_NewCFunction(ctx, fog_volume_class_get_material, "get_material", 0),
        JS_NewCFunction(ctx, fog_volume_class_set_material, "set_material", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_fog_volume_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&FogVolume::__class_id);
	classes["FogVolume"] = FogVolume::__class_id;
	class_id_list.insert(FogVolume::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FogVolume::__class_id, &fog_volume_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FogVolume::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FogVolume::__class_id, proto);

	define_fog_volume_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, fog_volume_class_proto_funcs, _countof(fog_volume_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, fog_volume_class_constructor, "FogVolume", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "FogVolume", ctor);

	return 0;
}

JSModuleDef *_js_init_fog_volume_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fog_volume_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FogVolume");
	return m;
}

JSModuleDef *js_init_fog_volume_module(JSContext *ctx) {
	return _js_init_fog_volume_module(ctx, "godot/classes/fog_volume");
}

void register_fog_volume() {
	FogVolume::__init_js_class_id();
	js_init_fog_volume_module(ctx);
}