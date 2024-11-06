
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_format_loader_class_finalizer(JSRuntime *rt, JSValue val) {
	ImageFormatLoader *image_format_loader = static_cast<ImageFormatLoader *>(JS_GetOpaque(val, ImageFormatLoader::__class_id));
	if (image_format_loader)
		memdelete(image_format_loader);
}

static JSClassDef image_format_loader_class_def = {
	"ImageFormatLoader",
	.finalizer = image_format_loader_class_finalizer
};

static JSValue image_format_loader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ImageFormatLoader::__class_id);
	if (JS_IsException(obj))
		return obj;

	ImageFormatLoader *image_format_loader_class;
	if (argc == 1) 
		image_format_loader_class = static_cast<ImageFormatLoader *>(Variant(*argv).operator Object *());
	else 
		image_format_loader_class = memnew(ImageFormatLoader);
	if (!image_format_loader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, image_format_loader_class);
	return obj;
}

static void define_image_format_loader_property(JSContext *ctx, JSValue proto) {
	
}

static void define_image_format_loader_enum(JSContext *ctx, JSValue proto) {
	JSValue LoaderFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, LoaderFlags_obj, "FLAG_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, LoaderFlags_obj, "FLAG_FORCE_LINEAR", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, LoaderFlags_obj, "FLAG_CONVERT_COLORS", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "LoaderFlags", LoaderFlags_obj);
}

static int js_image_format_loader_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ImageFormatLoader"] = ImageFormatLoader::__class_id;
	class_id_list.insert(ImageFormatLoader::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ImageFormatLoader::__class_id, &image_format_loader_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ImageFormatLoader::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageFormatLoader::__class_id, proto);

	define_image_format_loader_property(ctx, proto);
	define_image_format_loader_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, image_format_loader_class_constructor, "ImageFormatLoader", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ImageFormatLoader", ctor);
	constructors[ImageFormatLoader::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_image_format_loader_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_format_loader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageFormatLoader");
	return m;
}

JSModuleDef *js_init_image_format_loader_module(JSContext *ctx) {
	return _js_init_image_format_loader_module(ctx, "@godot/classes/image_format_loader");
}

void register_image_format_loader() {
	ImageFormatLoader::__init_js_class_id();
	js_init_image_format_loader_module(ctx);
}