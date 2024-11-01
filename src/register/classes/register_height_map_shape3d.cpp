
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/height_map_shape3d.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void height_map_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef height_map_shape3d_class_def = {
	"HeightMapShape3D",
	.finalizer = height_map_shape3d_class_finalizer
};

static JSValue height_map_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, HeightMapShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	HeightMapShape3D *height_map_shape3d_class;
	if (argc == 1) 
		height_map_shape3d_class = static_cast<HeightMapShape3D *>(Variant(*argv).operator Object *());
	else 
		height_map_shape3d_class = memnew(HeightMapShape3D);
	if (!height_map_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, height_map_shape3d_class);
	return obj;
}
static JSValue height_map_shape3d_class_set_map_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&HeightMapShape3D::set_map_width, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_get_map_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HeightMapShape3D::get_map_width, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_set_map_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&HeightMapShape3D::set_map_depth, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_get_map_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HeightMapShape3D::get_map_depth, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_set_map_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&HeightMapShape3D::set_map_data, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_get_map_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HeightMapShape3D::get_map_data, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_get_min_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HeightMapShape3D::get_min_height, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_get_max_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HeightMapShape3D::get_max_height, ctx, this_val, argc, argv);
};
static JSValue height_map_shape3d_class_update_map_data_from_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&HeightMapShape3D::update_map_data_from_image, ctx, this_val, argc, argv);
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

static void define_height_map_shape3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "map_width"),
        JS_NewCFunction(ctx, height_map_shape3d_class_get_map_width, "get_map_width", 0),
        JS_NewCFunction(ctx, height_map_shape3d_class_set_map_width, "set_map_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "map_depth"),
        JS_NewCFunction(ctx, height_map_shape3d_class_get_map_depth, "get_map_depth", 0),
        JS_NewCFunction(ctx, height_map_shape3d_class_set_map_depth, "set_map_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "map_data"),
        JS_NewCFunction(ctx, height_map_shape3d_class_get_map_data, "get_map_data", 0),
        JS_NewCFunction(ctx, height_map_shape3d_class_set_map_data, "set_map_data", 1),
        JS_PROP_GETSET
    );
	
}

static void define_height_map_shape3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_height_map_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["HeightMapShape3D"] = HeightMapShape3D::__class_id;
	class_id_list.insert(HeightMapShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HeightMapShape3D::__class_id, &height_map_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, HeightMapShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HeightMapShape3D::__class_id, proto);

	define_height_map_shape3d_property(ctx, proto);
	define_height_map_shape3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, height_map_shape3d_class_proto_funcs, _countof(height_map_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, height_map_shape3d_class_constructor, "HeightMapShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HeightMapShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_height_map_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_height_map_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HeightMapShape3D");
	return m;
}

JSModuleDef *js_init_height_map_shape3d_module(JSContext *ctx) {
	return _js_init_height_map_shape3d_module(ctx, "@godot/classes/height_map_shape3d");
}

void register_height_map_shape3d() {
	HeightMapShape3D::__init_js_class_id();
	js_init_height_map_shape3d_module(ctx);
}