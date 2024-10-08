
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void image_texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	ImageTextureLayered *image_texture_layered = static_cast<ImageTextureLayered *>(JS_GetOpaque(val, ImageTextureLayered::__class_id));
	if (image_texture_layered)
		ImageTextureLayered::free(nullptr, image_texture_layered);
}

static JSClassDef image_texture_layered_class_def = {
	"ImageTextureLayered",
	.finalizer = image_texture_layered_class_finalizer
};

static JSValue image_texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ImageTextureLayered *image_texture_layered_class;
	JSValue obj = JS_NewObjectClass(ctx, ImageTextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;
	image_texture_layered_class = memnew(ImageTextureLayered);
	if (!image_texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, image_texture_layered_class);
	return obj;
}
static JSValue image_texture_layered_class_create_from_images(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ImageTextureLayered::create_from_images, ImageTextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue image_texture_layered_class_update_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ImageTextureLayered::update_layer, ImageTextureLayered::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry image_texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_from_images", 1, &image_texture_layered_class_create_from_images),
	JS_CFUNC_DEF("update_layer", 2, &image_texture_layered_class_update_layer),
};

static int js_image_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ImageTextureLayered::__class_id);
	classes["ImageTextureLayered"] = ImageTextureLayered::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ImageTextureLayered::__class_id, &image_texture_layered_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageTextureLayered::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_texture_layered_class_proto_funcs, _countof(image_texture_layered_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, image_texture_layered_class_constructor, "ImageTextureLayered", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ImageTextureLayered", ctor);

	return 0;
}

JSModuleDef *_js_init_image_texture_layered_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_texture_layered_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageTextureLayered");
	return m;
}

JSModuleDef *js_init_image_texture_layered_module(JSContext *ctx) {
	return _js_init_image_texture_layered_module(ctx, "godot/classes/image_texture_layered");
}

void register_image_texture_layered() {
	js_init_image_texture_layered_module(ctx);
}