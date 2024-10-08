
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/image_format_loader_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_format_loader_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	ImageFormatLoaderExtension *image_format_loader_extension = static_cast<ImageFormatLoaderExtension *>(JS_GetOpaque(val, ImageFormatLoaderExtension::__class_id));
	if (image_format_loader_extension)
		ImageFormatLoaderExtension::free(nullptr, image_format_loader_extension);
}

static JSClassDef image_format_loader_extension_class_def = {
	"ImageFormatLoaderExtension",
	.finalizer = image_format_loader_extension_class_finalizer
};

static JSValue image_format_loader_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ImageFormatLoaderExtension *image_format_loader_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, ImageFormatLoaderExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	image_format_loader_extension_class = memnew(ImageFormatLoaderExtension);
	if (!image_format_loader_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, image_format_loader_extension_class);
	return obj;
}
static JSValue image_format_loader_extension_class_add_format_loader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImageFormatLoaderExtension::add_format_loader, ImageFormatLoaderExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue image_format_loader_extension_class_remove_format_loader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImageFormatLoaderExtension::remove_format_loader, ImageFormatLoaderExtension::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry image_format_loader_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_format_loader", 0, &image_format_loader_extension_class_add_format_loader),
	JS_CFUNC_DEF("remove_format_loader", 0, &image_format_loader_extension_class_remove_format_loader),
};

static int js_image_format_loader_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ImageFormatLoaderExtension::__class_id);
	classes["ImageFormatLoaderExtension"] = ImageFormatLoaderExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ImageFormatLoaderExtension::__class_id, &image_format_loader_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ImageFormatLoader::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageFormatLoaderExtension::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_format_loader_extension_class_proto_funcs, _countof(image_format_loader_extension_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, image_format_loader_extension_class_constructor, "ImageFormatLoaderExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ImageFormatLoaderExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_image_format_loader_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_format_loader_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageFormatLoaderExtension");
	return m;
}

JSModuleDef *js_init_image_format_loader_extension_module(JSContext *ctx) {
	return _js_init_image_format_loader_extension_module(ctx, "godot/classes/image_format_loader_extension");
}

void register_image_format_loader_extension() {
	js_init_image_format_loader_extension_module(ctx);
}