
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void light2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef light2d_class_def = {
	"Light2D",
	.finalizer = light2d_class_finalizer
};

static JSValue light2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Light2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Light2D *light2d_class = memnew(Light2D);
	if (!light2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, light2d_class);	
	return obj;
}
static JSValue light2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_editor_only, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_is_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::is_editor_only, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_color, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_energy, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_energy, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_z_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_z_range_min, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_z_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_z_range_min, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_z_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_z_range_max, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_z_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_z_range_max, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_layer_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_layer_range_min, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_layer_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_layer_range_min, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_layer_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_layer_range_max, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_layer_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_layer_range_max, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_item_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_item_cull_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_item_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_item_cull_mask, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_item_shadow_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_item_shadow_cull_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_item_shadow_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_item_shadow_cull_mask, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_shadow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_shadow_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_is_shadow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::is_shadow_enabled, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_shadow_smooth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_shadow_smooth, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_shadow_smooth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_shadow_smooth, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_shadow_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_shadow_filter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_shadow_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_shadow_filter, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_shadow_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_shadow_color, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_blend_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_blend_mode, ctx, this_val, argc, argv);
};
static JSValue light2d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Light2D::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Light2D::get_height, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry light2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &light2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &light2d_class_is_enabled),
	JS_CFUNC_DEF("set_editor_only", 1, &light2d_class_set_editor_only),
	JS_CFUNC_DEF("is_editor_only", 0, &light2d_class_is_editor_only),
	JS_CFUNC_DEF("set_color", 1, &light2d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &light2d_class_get_color),
	JS_CFUNC_DEF("set_energy", 1, &light2d_class_set_energy),
	JS_CFUNC_DEF("get_energy", 0, &light2d_class_get_energy),
	JS_CFUNC_DEF("set_z_range_min", 1, &light2d_class_set_z_range_min),
	JS_CFUNC_DEF("get_z_range_min", 0, &light2d_class_get_z_range_min),
	JS_CFUNC_DEF("set_z_range_max", 1, &light2d_class_set_z_range_max),
	JS_CFUNC_DEF("get_z_range_max", 0, &light2d_class_get_z_range_max),
	JS_CFUNC_DEF("set_layer_range_min", 1, &light2d_class_set_layer_range_min),
	JS_CFUNC_DEF("get_layer_range_min", 0, &light2d_class_get_layer_range_min),
	JS_CFUNC_DEF("set_layer_range_max", 1, &light2d_class_set_layer_range_max),
	JS_CFUNC_DEF("get_layer_range_max", 0, &light2d_class_get_layer_range_max),
	JS_CFUNC_DEF("set_item_cull_mask", 1, &light2d_class_set_item_cull_mask),
	JS_CFUNC_DEF("get_item_cull_mask", 0, &light2d_class_get_item_cull_mask),
	JS_CFUNC_DEF("set_item_shadow_cull_mask", 1, &light2d_class_set_item_shadow_cull_mask),
	JS_CFUNC_DEF("get_item_shadow_cull_mask", 0, &light2d_class_get_item_shadow_cull_mask),
	JS_CFUNC_DEF("set_shadow_enabled", 1, &light2d_class_set_shadow_enabled),
	JS_CFUNC_DEF("is_shadow_enabled", 0, &light2d_class_is_shadow_enabled),
	JS_CFUNC_DEF("set_shadow_smooth", 1, &light2d_class_set_shadow_smooth),
	JS_CFUNC_DEF("get_shadow_smooth", 0, &light2d_class_get_shadow_smooth),
	JS_CFUNC_DEF("set_shadow_filter", 1, &light2d_class_set_shadow_filter),
	JS_CFUNC_DEF("get_shadow_filter", 0, &light2d_class_get_shadow_filter),
	JS_CFUNC_DEF("set_shadow_color", 1, &light2d_class_set_shadow_color),
	JS_CFUNC_DEF("get_shadow_color", 0, &light2d_class_get_shadow_color),
	JS_CFUNC_DEF("set_blend_mode", 1, &light2d_class_set_blend_mode),
	JS_CFUNC_DEF("get_blend_mode", 0, &light2d_class_get_blend_mode),
	JS_CFUNC_DEF("set_height", 1, &light2d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &light2d_class_get_height),
};

void define_light2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, light2d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, light2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "editor_only"),
        JS_NewCFunction(ctx, light2d_class_is_editor_only, "is_editor_only", 0),
        JS_NewCFunction(ctx, light2d_class_set_editor_only, "set_editor_only", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, light2d_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, light2d_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "energy"),
        JS_NewCFunction(ctx, light2d_class_get_energy, "get_energy", 0),
        JS_NewCFunction(ctx, light2d_class_set_energy, "set_energy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "blend_mode"),
        JS_NewCFunction(ctx, light2d_class_get_blend_mode, "get_blend_mode", 0),
        JS_NewCFunction(ctx, light2d_class_set_blend_mode, "set_blend_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_z_min"),
        JS_NewCFunction(ctx, light2d_class_get_z_range_min, "get_z_range_min", 0),
        JS_NewCFunction(ctx, light2d_class_set_z_range_min, "set_z_range_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_z_max"),
        JS_NewCFunction(ctx, light2d_class_get_z_range_max, "get_z_range_max", 0),
        JS_NewCFunction(ctx, light2d_class_set_z_range_max, "set_z_range_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_layer_min"),
        JS_NewCFunction(ctx, light2d_class_get_layer_range_min, "get_layer_range_min", 0),
        JS_NewCFunction(ctx, light2d_class_set_layer_range_min, "set_layer_range_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_layer_max"),
        JS_NewCFunction(ctx, light2d_class_get_layer_range_max, "get_layer_range_max", 0),
        JS_NewCFunction(ctx, light2d_class_set_layer_range_max, "set_layer_range_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range_item_cull_mask"),
        JS_NewCFunction(ctx, light2d_class_get_item_cull_mask, "get_item_cull_mask", 0),
        JS_NewCFunction(ctx, light2d_class_set_item_cull_mask, "set_item_cull_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_enabled"),
        JS_NewCFunction(ctx, light2d_class_is_shadow_enabled, "is_shadow_enabled", 0),
        JS_NewCFunction(ctx, light2d_class_set_shadow_enabled, "set_shadow_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_color"),
        JS_NewCFunction(ctx, light2d_class_get_shadow_color, "get_shadow_color", 0),
        JS_NewCFunction(ctx, light2d_class_set_shadow_color, "set_shadow_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_filter"),
        JS_NewCFunction(ctx, light2d_class_get_shadow_filter, "get_shadow_filter", 0),
        JS_NewCFunction(ctx, light2d_class_set_shadow_filter, "set_shadow_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_filter_smooth"),
        JS_NewCFunction(ctx, light2d_class_get_shadow_smooth, "get_shadow_smooth", 0),
        JS_NewCFunction(ctx, light2d_class_set_shadow_smooth, "set_shadow_smooth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_item_cull_mask"),
        JS_NewCFunction(ctx, light2d_class_get_item_shadow_cull_mask, "get_item_shadow_cull_mask", 0),
        JS_NewCFunction(ctx, light2d_class_set_item_shadow_cull_mask, "set_item_shadow_cull_mask", 1),
        JS_PROP_GETSET
    );
}

static int js_light2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Light2D::__class_id);
	classes["Light2D"] = Light2D::__class_id;
	class_id_list.insert(Light2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Light2D::__class_id, &light2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Light2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Light2D::__class_id, proto);

	define_light2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, light2d_class_proto_funcs, _countof(light2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, light2d_class_constructor, "Light2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Light2D", ctor);

	return 0;
}

JSModuleDef *_js_init_light2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_light2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Light2D");
	return m;
}

JSModuleDef *js_init_light2d_module(JSContext *ctx) {
	return _js_init_light2d_module(ctx, "godot/classes/light2d");
}

void register_light2d() {
	Light2D::__init_js_class_id();
	js_init_light2d_module(ctx);
}