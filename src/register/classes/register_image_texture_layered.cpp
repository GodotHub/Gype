
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	ImageTextureLayered *image_texture_layered = static_cast<ImageTextureLayered *>(JS_GetOpaque(val, ImageTextureLayered::__class_id));
	if (image_texture_layered)
		memdelete(image_texture_layered);
}

static JSClassDef image_texture_layered_class_def = {
	"ImageTextureLayered",
	.finalizer = image_texture_layered_class_finalizer
};

static JSValue image_texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ImageTextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;

	ImageTextureLayered *image_texture_layered_class;
	if (argc == 1) 
		image_texture_layered_class = static_cast<ImageTextureLayered *>(Variant(*argv).operator Object *());
	else 
		image_texture_layered_class = memnew(ImageTextureLayered);
	if (!image_texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, image_texture_layered_class);
	return obj;
}
static JSValue image_texture_layered_class_create_from_images(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ImageTextureLayered::create_from_images, ctx, this_val, argc, argv);
};
static JSValue image_texture_layered_class_update_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ImageTextureLayered::update_layer, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry image_texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_from_images", 1, &image_texture_layered_class_create_from_images),
	JS_CFUNC_DEF("update_layer", 2, &image_texture_layered_class_update_layer),
};

static void define_image_texture_layered_property(JSContext *ctx, JSValue proto) {
	
}

static void define_image_texture_layered_enum(JSContext *ctx, JSValue proto) {
}

static int js_image_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ImageTextureLayered"] = ImageTextureLayered::__class_id;
	class_id_list.insert(ImageTextureLayered::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ImageTextureLayered::__class_id, &image_texture_layered_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ImageTextureLayered::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageTextureLayered::__class_id, proto);

	define_image_texture_layered_property(ctx, proto);
	define_image_texture_layered_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_texture_layered_class_proto_funcs, _countof(image_texture_layered_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, image_texture_layered_class_constructor, "ImageTextureLayered", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ImageTextureLayered", ctor);
	constructors[ImageTextureLayered::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_image_texture_layered_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_texture_layered_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageTextureLayered");
	return m;
}

JSModuleDef *js_init_image_texture_layered_module(JSContext *ctx) {
	return _js_init_image_texture_layered_module(ctx, "@godot/classes/image_texture_layered");
}

void register_image_texture_layered() {
	ImageTextureLayered::__init_js_class_id();
	js_init_image_texture_layered_module(ctx);
}