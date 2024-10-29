
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef image_texture_class_def = {
	"ImageTexture",
	.finalizer = image_texture_class_finalizer
};

static JSValue image_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ImageTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	ImageTexture *image_texture_class = memnew(ImageTexture);
	if (!image_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, image_texture_class);	
	return obj;
}
static JSValue image_texture_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ImageTexture::get_format, ctx, this_val, argc, argv);
};
static JSValue image_texture_class_set_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ImageTexture::set_image, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue image_texture_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ImageTexture::update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue image_texture_class_set_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ImageTexture::set_size_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue image_texture_class_create_from_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&ImageTexture::create_from_image, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry image_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_format", 0, &image_texture_class_get_format),
	JS_CFUNC_DEF("set_image", 1, &image_texture_class_set_image),
	JS_CFUNC_DEF("update", 1, &image_texture_class_update),
	JS_CFUNC_DEF("set_size_override", 1, &image_texture_class_set_size_override),
};
static const JSCFunctionListEntry image_texture_class_static_funcs[] = {
	JS_CFUNC_DEF("create_from_image", 1, &image_texture_class_create_from_image),
};

void define_image_texture_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_image_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ImageTexture::__class_id);
	classes["ImageTexture"] = ImageTexture::__class_id;
	class_id_list.insert(ImageTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ImageTexture::__class_id, &image_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ImageTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageTexture::__class_id, proto);

	define_image_texture_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_texture_class_proto_funcs, _countof(image_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, image_texture_class_constructor, "ImageTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, image_texture_class_static_funcs, _countof(image_texture_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ImageTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_image_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageTexture");
	return m;
}

JSModuleDef *js_init_image_texture_module(JSContext *ctx) {
	return _js_init_image_texture_module(ctx, "@godot/classes/image_texture");
}

void register_image_texture() {
	ImageTexture::__init_js_class_id();
	js_init_image_texture_module(ctx);
}