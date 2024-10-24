
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/sprite3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sprite3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef sprite3d_class_def = {
	"Sprite3D",
	.finalizer = sprite3d_class_finalizer
};

static JSValue sprite3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Sprite3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Sprite3D *sprite3d_class = memnew(Sprite3D);
	if (!sprite3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sprite3d_class);	
	return obj;
}
static JSValue sprite3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::get_texture, ctx, this_val, argc, argv);
};
static JSValue sprite3d_class_set_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_region_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_is_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::is_region_enabled, ctx, this_val, argc, argv);
};
static JSValue sprite3d_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_region_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::get_region_rect, ctx, this_val, argc, argv);
};
static JSValue sprite3d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_frame, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::get_frame, ctx, this_val, argc, argv);
};
static JSValue sprite3d_class_set_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_frame_coords, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::get_frame_coords, ctx, this_val, argc, argv);
};
static JSValue sprite3d_class_set_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_vframes, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::get_vframes, ctx, this_val, argc, argv);
};
static JSValue sprite3d_class_set_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Sprite3D::set_hframes, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sprite3d_class_get_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite3D::get_hframes, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sprite3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &sprite3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &sprite3d_class_get_texture),
	JS_CFUNC_DEF("set_region_enabled", 1, &sprite3d_class_set_region_enabled),
	JS_CFUNC_DEF("is_region_enabled", 0, &sprite3d_class_is_region_enabled),
	JS_CFUNC_DEF("set_region_rect", 1, &sprite3d_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &sprite3d_class_get_region_rect),
	JS_CFUNC_DEF("set_frame", 1, &sprite3d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &sprite3d_class_get_frame),
	JS_CFUNC_DEF("set_frame_coords", 1, &sprite3d_class_set_frame_coords),
	JS_CFUNC_DEF("get_frame_coords", 0, &sprite3d_class_get_frame_coords),
	JS_CFUNC_DEF("set_vframes", 1, &sprite3d_class_set_vframes),
	JS_CFUNC_DEF("get_vframes", 0, &sprite3d_class_get_vframes),
	JS_CFUNC_DEF("set_hframes", 1, &sprite3d_class_set_hframes),
	JS_CFUNC_DEF("get_hframes", 0, &sprite3d_class_get_hframes),
};

void define_sprite3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, sprite3d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hframes"),
        JS_NewCFunction(ctx, sprite3d_class_get_hframes, "get_hframes", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_hframes, "set_hframes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vframes"),
        JS_NewCFunction(ctx, sprite3d_class_get_vframes, "get_vframes", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_vframes, "set_vframes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "frame"),
        JS_NewCFunction(ctx, sprite3d_class_get_frame, "get_frame", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_frame, "set_frame", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "frame_coords"),
        JS_NewCFunction(ctx, sprite3d_class_get_frame_coords, "get_frame_coords", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_frame_coords, "set_frame_coords", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "region_enabled"),
        JS_NewCFunction(ctx, sprite3d_class_is_region_enabled, "is_region_enabled", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_region_enabled, "set_region_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "region_rect"),
        JS_NewCFunction(ctx, sprite3d_class_get_region_rect, "get_region_rect", 0),
        JS_NewCFunction(ctx, sprite3d_class_set_region_rect, "set_region_rect", 1),
        JS_PROP_GETSET
    );
}

static int js_sprite3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Sprite3D::__class_id);
	classes["Sprite3D"] = Sprite3D::__class_id;
	class_id_list.insert(Sprite3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Sprite3D::__class_id, &sprite3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Sprite3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SpriteBase3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Sprite3D::__class_id, proto);

	define_sprite3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sprite3d_class_proto_funcs, _countof(sprite3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sprite3d_class_constructor, "Sprite3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Sprite3D", ctor);

	return 0;
}

JSModuleDef *_js_init_sprite3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/sprite_base3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sprite3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Sprite3D");
	return m;
}

JSModuleDef *js_init_sprite3d_module(JSContext *ctx) {
	return _js_init_sprite3d_module(ctx, "godot/classes/sprite3d");
}

void register_sprite3d() {
	Sprite3D::__init_js_class_id();
	js_init_sprite3d_module(ctx);
}