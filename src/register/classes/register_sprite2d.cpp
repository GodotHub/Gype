
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sprite2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef sprite2d_class_def = {
	"Sprite2D",
	.finalizer = sprite2d_class_finalizer
};

static JSValue sprite2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Sprite2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Sprite2D *sprite2d_class;
	if (argc == 1) 
		sprite2d_class = static_cast<Sprite2D *>(static_cast<Object *>(Variant(*argv)));
	else 
		sprite2d_class = memnew(Sprite2D);
	if (!sprite2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sprite2d_class);	
	return obj;
}
static JSValue sprite2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_texture, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_texture, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_centered, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_is_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::is_centered, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_offset, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_offset, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_flip_h, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::is_flipped_h, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_flip_v, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::is_flipped_v, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_region_enabled, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_is_region_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::is_region_enabled, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_is_pixel_opaque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::is_pixel_opaque, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_region_rect, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_region_rect, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_region_filter_clip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_region_filter_clip_enabled, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_is_region_filter_clip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::is_region_filter_clip_enabled, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_frame, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_frame, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_frame_coords, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_frame_coords(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_frame_coords, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_vframes, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_vframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_vframes, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_set_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Sprite2D::set_hframes, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_hframes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_hframes, ctx, this_val, argc, argv);
};
static JSValue sprite2d_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Sprite2D::get_rect, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sprite2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &sprite2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &sprite2d_class_get_texture),
	JS_CFUNC_DEF("set_centered", 1, &sprite2d_class_set_centered),
	JS_CFUNC_DEF("is_centered", 0, &sprite2d_class_is_centered),
	JS_CFUNC_DEF("set_offset", 1, &sprite2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &sprite2d_class_get_offset),
	JS_CFUNC_DEF("set_flip_h", 1, &sprite2d_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &sprite2d_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &sprite2d_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &sprite2d_class_is_flipped_v),
	JS_CFUNC_DEF("set_region_enabled", 1, &sprite2d_class_set_region_enabled),
	JS_CFUNC_DEF("is_region_enabled", 0, &sprite2d_class_is_region_enabled),
	JS_CFUNC_DEF("is_pixel_opaque", 1, &sprite2d_class_is_pixel_opaque),
	JS_CFUNC_DEF("set_region_rect", 1, &sprite2d_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &sprite2d_class_get_region_rect),
	JS_CFUNC_DEF("set_region_filter_clip_enabled", 1, &sprite2d_class_set_region_filter_clip_enabled),
	JS_CFUNC_DEF("is_region_filter_clip_enabled", 0, &sprite2d_class_is_region_filter_clip_enabled),
	JS_CFUNC_DEF("set_frame", 1, &sprite2d_class_set_frame),
	JS_CFUNC_DEF("get_frame", 0, &sprite2d_class_get_frame),
	JS_CFUNC_DEF("set_frame_coords", 1, &sprite2d_class_set_frame_coords),
	JS_CFUNC_DEF("get_frame_coords", 0, &sprite2d_class_get_frame_coords),
	JS_CFUNC_DEF("set_vframes", 1, &sprite2d_class_set_vframes),
	JS_CFUNC_DEF("get_vframes", 0, &sprite2d_class_get_vframes),
	JS_CFUNC_DEF("set_hframes", 1, &sprite2d_class_set_hframes),
	JS_CFUNC_DEF("get_hframes", 0, &sprite2d_class_get_hframes),
	JS_CFUNC_DEF("get_rect", 0, &sprite2d_class_get_rect),
};
static JSValue sprite2d_class_get_frame_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Sprite2D *opaque = reinterpret_cast<Sprite2D *>(JS_GetOpaque(this_val, Sprite2D::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "frame_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "frame_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "frame_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue sprite2d_class_get_texture_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Sprite2D *opaque = reinterpret_cast<Sprite2D *>(JS_GetOpaque(this_val, Sprite2D::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "texture_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "texture_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "texture_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_sprite2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, sprite2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "centered"),
        JS_NewCFunction(ctx, sprite2d_class_is_centered, "is_centered", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_centered, "set_centered", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, sprite2d_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "flip_h"),
        JS_NewCFunction(ctx, sprite2d_class_is_flipped_h, "is_flipped_h", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_flip_h, "set_flip_h", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "flip_v"),
        JS_NewCFunction(ctx, sprite2d_class_is_flipped_v, "is_flipped_v", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_flip_v, "set_flip_v", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hframes"),
        JS_NewCFunction(ctx, sprite2d_class_get_hframes, "get_hframes", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_hframes, "set_hframes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "vframes"),
        JS_NewCFunction(ctx, sprite2d_class_get_vframes, "get_vframes", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_vframes, "set_vframes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "frame"),
        JS_NewCFunction(ctx, sprite2d_class_get_frame, "get_frame", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_frame, "set_frame", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "frame_coords"),
        JS_NewCFunction(ctx, sprite2d_class_get_frame_coords, "get_frame_coords", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_frame_coords, "set_frame_coords", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "region_enabled"),
        JS_NewCFunction(ctx, sprite2d_class_is_region_enabled, "is_region_enabled", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_region_enabled, "set_region_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "region_rect"),
        JS_NewCFunction(ctx, sprite2d_class_get_region_rect, "get_region_rect", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_region_rect, "set_region_rect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "region_filter_clip_enabled"),
        JS_NewCFunction(ctx, sprite2d_class_is_region_filter_clip_enabled, "is_region_filter_clip_enabled", 0),
        JS_NewCFunction(ctx, sprite2d_class_set_region_filter_clip_enabled, "set_region_filter_clip_enabled", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "frame_changed"),
		JS_NewCFunction(ctx, sprite2d_class_get_frame_changed_signal, "get_frame_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "texture_changed"),
		JS_NewCFunction(ctx, sprite2d_class_get_texture_changed_signal, "get_texture_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_sprite2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_sprite2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Sprite2D::__class_id);
	classes["Sprite2D"] = Sprite2D::__class_id;
	class_id_list.insert(Sprite2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Sprite2D::__class_id, &sprite2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Sprite2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Sprite2D::__class_id, proto);

	define_sprite2d_property(ctx, proto);
	define_sprite2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sprite2d_class_proto_funcs, _countof(sprite2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sprite2d_class_constructor, "Sprite2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Sprite2D", ctor);

	return 0;
}

JSModuleDef *_js_init_sprite2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sprite2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Sprite2D");
	return m;
}

JSModuleDef *js_init_sprite2d_module(JSContext *ctx) {
	return _js_init_sprite2d_module(ctx, "@godot/classes/sprite2d");
}

void register_sprite2d() {
	Sprite2D::__init_js_class_id();
	js_init_sprite2d_module(ctx);
}