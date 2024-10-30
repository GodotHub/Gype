
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/nine_patch_rect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void nine_patch_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef nine_patch_rect_class_def = {
	"NinePatchRect",
	.finalizer = nine_patch_rect_class_finalizer
};

static JSValue nine_patch_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NinePatchRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	NinePatchRect *nine_patch_rect_class;
	if (argc == 1) {
		Variant vobj = *argv;
		nine_patch_rect_class = static_cast<NinePatchRect *>(static_cast<Object *>(vobj));
	} else {
		nine_patch_rect_class = memnew(NinePatchRect);
	}
	if (!nine_patch_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, nine_patch_rect_class);	
	return obj;
}
static JSValue nine_patch_rect_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NinePatchRect::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NinePatchRect::get_texture, ctx, this_val, argc, argv);
};
static JSValue nine_patch_rect_class_set_patch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NinePatchRect::set_patch_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_patch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NinePatchRect::get_patch_margin, ctx, this_val, argc, argv);
};
static JSValue nine_patch_rect_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NinePatchRect::set_region_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NinePatchRect::get_region_rect, ctx, this_val, argc, argv);
};
static JSValue nine_patch_rect_class_set_draw_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NinePatchRect::set_draw_center, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_is_draw_center_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NinePatchRect::is_draw_center_enabled, ctx, this_val, argc, argv);
};
static JSValue nine_patch_rect_class_set_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NinePatchRect::set_h_axis_stretch_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NinePatchRect::get_h_axis_stretch_mode, ctx, this_val, argc, argv);
};
static JSValue nine_patch_rect_class_set_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NinePatchRect::set_v_axis_stretch_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue nine_patch_rect_class_get_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NinePatchRect::get_v_axis_stretch_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry nine_patch_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &nine_patch_rect_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &nine_patch_rect_class_get_texture),
	JS_CFUNC_DEF("set_patch_margin", 2, &nine_patch_rect_class_set_patch_margin),
	JS_CFUNC_DEF("get_patch_margin", 1, &nine_patch_rect_class_get_patch_margin),
	JS_CFUNC_DEF("set_region_rect", 1, &nine_patch_rect_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &nine_patch_rect_class_get_region_rect),
	JS_CFUNC_DEF("set_draw_center", 1, &nine_patch_rect_class_set_draw_center),
	JS_CFUNC_DEF("is_draw_center_enabled", 0, &nine_patch_rect_class_is_draw_center_enabled),
	JS_CFUNC_DEF("set_h_axis_stretch_mode", 1, &nine_patch_rect_class_set_h_axis_stretch_mode),
	JS_CFUNC_DEF("get_h_axis_stretch_mode", 0, &nine_patch_rect_class_get_h_axis_stretch_mode),
	JS_CFUNC_DEF("set_v_axis_stretch_mode", 1, &nine_patch_rect_class_set_v_axis_stretch_mode),
	JS_CFUNC_DEF("get_v_axis_stretch_mode", 0, &nine_patch_rect_class_get_v_axis_stretch_mode),
};

void define_nine_patch_rect_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "draw_center"),
        JS_NewCFunction(ctx, nine_patch_rect_class_is_draw_center_enabled, "is_draw_center_enabled", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_draw_center, "set_draw_center", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "region_rect"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_region_rect, "get_region_rect", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_region_rect, "set_region_rect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "patch_margin_left"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_patch_margin, "get_patch_margin", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_patch_margin, "set_patch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "patch_margin_top"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_patch_margin, "get_patch_margin", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_patch_margin, "set_patch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "patch_margin_right"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_patch_margin, "get_patch_margin", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_patch_margin, "set_patch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "patch_margin_bottom"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_patch_margin, "get_patch_margin", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_patch_margin, "set_patch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "axis_stretch_horizontal"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_h_axis_stretch_mode, "get_h_axis_stretch_mode", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_h_axis_stretch_mode, "set_h_axis_stretch_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "axis_stretch_vertical"),
        JS_NewCFunction(ctx, nine_patch_rect_class_get_v_axis_stretch_mode, "get_v_axis_stretch_mode", 0),
        JS_NewCFunction(ctx, nine_patch_rect_class_set_v_axis_stretch_mode, "set_v_axis_stretch_mode", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue AxisStretchMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AxisStretchMode_obj, "AXIS_STRETCH_MODE_STRETCH", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AxisStretchMode_obj, "AXIS_STRETCH_MODE_TILE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AxisStretchMode_obj, "AXIS_STRETCH_MODE_TILE_FIT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "AxisStretchMode", AxisStretchMode_obj);
}

static int js_nine_patch_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NinePatchRect::__class_id);
	classes["NinePatchRect"] = NinePatchRect::__class_id;
	class_id_list.insert(NinePatchRect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NinePatchRect::__class_id, &nine_patch_rect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NinePatchRect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NinePatchRect::__class_id, proto);

	define_nine_patch_rect_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, nine_patch_rect_class_proto_funcs, _countof(nine_patch_rect_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, nine_patch_rect_class_constructor, "NinePatchRect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NinePatchRect", ctor);

	return 0;
}

JSModuleDef *_js_init_nine_patch_rect_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_nine_patch_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NinePatchRect");
	return m;
}

JSModuleDef *js_init_nine_patch_rect_module(JSContext *ctx) {
	return _js_init_nine_patch_rect_module(ctx, "@godot/classes/nine_patch_rect");
}

void register_nine_patch_rect() {
	NinePatchRect::__init_js_class_id();
	js_init_nine_patch_rect_module(ctx);
}