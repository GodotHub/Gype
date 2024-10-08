
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void image_format_loader_class_finalizer(JSRuntime *rt, JSValue val) {
	ImageFormatLoader *image_format_loader = static_cast<ImageFormatLoader *>(JS_GetOpaque(val, ImageFormatLoader::__class_id));
	if (image_format_loader)
		ImageFormatLoader::free(nullptr, image_format_loader);
}

static JSClassDef image_format_loader_class_def = {
	"ImageFormatLoader",
	.finalizer = image_format_loader_class_finalizer
};

static JSValue image_format_loader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ImageFormatLoader *image_format_loader_class;
	JSValue obj = JS_NewObjectClass(ctx, ImageFormatLoader::__class_id);
	if (JS_IsException(obj))
		return obj;
	image_format_loader_class = memnew(ImageFormatLoader);
	if (!image_format_loader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, image_format_loader_class);
	return obj;
}

static int js_image_format_loader_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ImageFormatLoader::__class_id);
	classes["ImageFormatLoader"] = ImageFormatLoader::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ImageFormatLoader::__class_id, &image_format_loader_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageFormatLoader::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, image_format_loader_class_constructor, "ImageFormatLoader", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ImageFormatLoader", ctor);

	return 0;
}

JSModuleDef *_js_init_image_format_loader_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_format_loader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageFormatLoader");
	return m;
}

JSModuleDef *js_init_image_format_loader_module(JSContext *ctx) {
	return _js_init_image_format_loader_module(ctx, "godot/classes/image_format_loader");
}

void register_image_format_loader() {
	js_init_image_format_loader_module(ctx);
}