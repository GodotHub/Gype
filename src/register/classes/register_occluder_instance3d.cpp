
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/occluder_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void occluder_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef occluder_instance3d_class_def = {
	"OccluderInstance3D",
	.finalizer = occluder_instance3d_class_finalizer
};

static JSValue occluder_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OccluderInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	OccluderInstance3D *occluder_instance3d_class;
	if (argc == 1) 
		occluder_instance3d_class = static_cast<OccluderInstance3D *>(Variant(*argv).operator Object *());
	else 
		occluder_instance3d_class = memnew(OccluderInstance3D);
	if (!occluder_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, occluder_instance3d_class);
	return obj;
}
static JSValue occluder_instance3d_class_set_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OccluderInstance3D::set_bake_mask, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_get_bake_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OccluderInstance3D::get_bake_mask, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_set_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OccluderInstance3D::set_bake_mask_value, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_get_bake_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OccluderInstance3D::get_bake_mask_value, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_set_bake_simplification_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OccluderInstance3D::set_bake_simplification_distance, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_get_bake_simplification_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OccluderInstance3D::get_bake_simplification_distance, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_set_occluder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OccluderInstance3D::set_occluder, ctx, this_val, argc, argv);
};
static JSValue occluder_instance3d_class_get_occluder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OccluderInstance3D::get_occluder, ctx, this_val, argc, argv);
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

static void define_occluder_instance3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "occluder"),
        JS_NewCFunction(ctx, occluder_instance3d_class_get_occluder, "get_occluder", 0),
        JS_NewCFunction(ctx, occluder_instance3d_class_set_occluder, "set_occluder", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bake_mask"),
        JS_NewCFunction(ctx, occluder_instance3d_class_get_bake_mask, "get_bake_mask", 0),
        JS_NewCFunction(ctx, occluder_instance3d_class_set_bake_mask, "set_bake_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bake_simplification_distance"),
        JS_NewCFunction(ctx, occluder_instance3d_class_get_bake_simplification_distance, "get_bake_simplification_distance", 0),
        JS_NewCFunction(ctx, occluder_instance3d_class_set_bake_simplification_distance, "set_bake_simplification_distance", 1),
        JS_PROP_GETSET
    );
	
}

static void define_occluder_instance3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_occluder_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OccluderInstance3D"] = OccluderInstance3D::__class_id;
	class_id_list.insert(OccluderInstance3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OccluderInstance3D::__class_id, &occluder_instance3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OccluderInstance3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OccluderInstance3D::__class_id, proto);

	define_occluder_instance3d_property(ctx, proto);
	define_occluder_instance3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, occluder_instance3d_class_proto_funcs, _countof(occluder_instance3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, occluder_instance3d_class_constructor, "OccluderInstance3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OccluderInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_occluder_instance3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_occluder_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OccluderInstance3D");
	return m;
}

JSModuleDef *js_init_occluder_instance3d_module(JSContext *ctx) {
	return _js_init_occluder_instance3d_module(ctx, "@godot/classes/occluder_instance3d");
}

void register_occluder_instance3d() {
	OccluderInstance3D::__init_js_class_id();
	js_init_occluder_instance3d_module(ctx);
}