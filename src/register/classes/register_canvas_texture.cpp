
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/canvas_texture.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef canvas_texture_class_def = {
	"CanvasTexture",
	.finalizer = canvas_texture_class_finalizer
};

static JSValue canvas_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CanvasTexture::__class_id);
	if (JS_IsException(obj))
		return obj;

	CanvasTexture *canvas_texture_class;
	if (argc == 1) 
		canvas_texture_class = static_cast<CanvasTexture *>(Variant(*argv).operator Object *());
	else 
		canvas_texture_class = memnew(CanvasTexture);
	if (!canvas_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, canvas_texture_class);
	return obj;
}
static JSValue canvas_texture_class_set_diffuse_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_diffuse_texture, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_diffuse_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_diffuse_texture, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_set_normal_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_normal_texture, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_normal_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_normal_texture, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_set_specular_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_specular_texture, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_specular_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_specular_texture, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_set_specular_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_specular_color, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_specular_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_specular_color, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_set_specular_shininess(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_specular_shininess, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_specular_shininess(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_specular_shininess, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_texture_filter, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_texture_filter, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_set_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CanvasTexture::set_texture_repeat, ctx, this_val, argc, argv);
};
static JSValue canvas_texture_class_get_texture_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CanvasTexture::get_texture_repeat, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry canvas_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_diffuse_texture", 1, &canvas_texture_class_set_diffuse_texture),
	JS_CFUNC_DEF("get_diffuse_texture", 0, &canvas_texture_class_get_diffuse_texture),
	JS_CFUNC_DEF("set_normal_texture", 1, &canvas_texture_class_set_normal_texture),
	JS_CFUNC_DEF("get_normal_texture", 0, &canvas_texture_class_get_normal_texture),
	JS_CFUNC_DEF("set_specular_texture", 1, &canvas_texture_class_set_specular_texture),
	JS_CFUNC_DEF("get_specular_texture", 0, &canvas_texture_class_get_specular_texture),
	JS_CFUNC_DEF("set_specular_color", 1, &canvas_texture_class_set_specular_color),
	JS_CFUNC_DEF("get_specular_color", 0, &canvas_texture_class_get_specular_color),
	JS_CFUNC_DEF("set_specular_shininess", 1, &canvas_texture_class_set_specular_shininess),
	JS_CFUNC_DEF("get_specular_shininess", 0, &canvas_texture_class_get_specular_shininess),
	JS_CFUNC_DEF("set_texture_filter", 1, &canvas_texture_class_set_texture_filter),
	JS_CFUNC_DEF("get_texture_filter", 0, &canvas_texture_class_get_texture_filter),
	JS_CFUNC_DEF("set_texture_repeat", 1, &canvas_texture_class_set_texture_repeat),
	JS_CFUNC_DEF("get_texture_repeat", 0, &canvas_texture_class_get_texture_repeat),
};

static void define_canvas_texture_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "diffuse_texture"),
        JS_NewCFunction(ctx, canvas_texture_class_get_diffuse_texture, "get_diffuse_texture", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_diffuse_texture, "set_diffuse_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "normal_texture"),
        JS_NewCFunction(ctx, canvas_texture_class_get_normal_texture, "get_normal_texture", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_normal_texture, "set_normal_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "specular_texture"),
        JS_NewCFunction(ctx, canvas_texture_class_get_specular_texture, "get_specular_texture", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_specular_texture, "set_specular_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "specular_color"),
        JS_NewCFunction(ctx, canvas_texture_class_get_specular_color, "get_specular_color", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_specular_color, "set_specular_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "specular_shininess"),
        JS_NewCFunction(ctx, canvas_texture_class_get_specular_shininess, "get_specular_shininess", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_specular_shininess, "set_specular_shininess", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_filter"),
        JS_NewCFunction(ctx, canvas_texture_class_get_texture_filter, "get_texture_filter", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_texture_filter, "set_texture_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_repeat"),
        JS_NewCFunction(ctx, canvas_texture_class_get_texture_repeat, "get_texture_repeat", 0),
        JS_NewCFunction(ctx, canvas_texture_class_set_texture_repeat, "set_texture_repeat", 1),
        JS_PROP_GETSET
    );
	
}

static void define_canvas_texture_enum(JSContext *ctx, JSValue proto) {
}

static int js_canvas_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CanvasTexture"] = CanvasTexture::__class_id;
	class_id_list.insert(CanvasTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CanvasTexture::__class_id, &canvas_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CanvasTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasTexture::__class_id, proto);

	define_canvas_texture_property(ctx, proto);
	define_canvas_texture_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_texture_class_proto_funcs, _countof(canvas_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, canvas_texture_class_constructor, "CanvasTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CanvasTexture", ctor);
	constructors[CanvasTexture::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_canvas_texture_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_canvas_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CanvasTexture");
	return m;
}

JSModuleDef *js_init_canvas_texture_module(JSContext *ctx) {
	return _js_init_canvas_texture_module(ctx, "@godot/classes/canvas_texture");
}

void register_canvas_texture() {
	CanvasTexture::__init_js_class_id();
	js_init_canvas_texture_module(ctx);
}