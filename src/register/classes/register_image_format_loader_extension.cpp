
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/image_format_loader_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_format_loader_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef image_format_loader_extension_class_def = {
	"ImageFormatLoaderExtension",
	.finalizer = image_format_loader_extension_class_finalizer
};

static JSValue image_format_loader_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ImageFormatLoaderExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	ImageFormatLoaderExtension *image_format_loader_extension_class;
	if (argc == 1) 
		image_format_loader_extension_class = static_cast<ImageFormatLoaderExtension *>(Variant(*argv).operator Object *());
	else 
		image_format_loader_extension_class = memnew(ImageFormatLoaderExtension);
	if (!image_format_loader_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, image_format_loader_extension_class);
	return obj;
}
static JSValue image_format_loader_extension_class_add_format_loader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ImageFormatLoaderExtension::add_format_loader, ctx, this_val, argc, argv);
};
static JSValue image_format_loader_extension_class_remove_format_loader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ImageFormatLoaderExtension::remove_format_loader, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry image_format_loader_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_format_loader", 0, &image_format_loader_extension_class_add_format_loader),
	JS_CFUNC_DEF("remove_format_loader", 0, &image_format_loader_extension_class_remove_format_loader),
};

static void define_image_format_loader_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_image_format_loader_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_image_format_loader_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ImageFormatLoaderExtension"] = ImageFormatLoaderExtension::__class_id;
	class_id_list.insert(ImageFormatLoaderExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ImageFormatLoaderExtension::__class_id, &image_format_loader_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ImageFormatLoaderExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ImageFormatLoader::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageFormatLoaderExtension::__class_id, proto);

	define_image_format_loader_extension_property(ctx, proto);
	define_image_format_loader_extension_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_format_loader_extension_class_proto_funcs, _countof(image_format_loader_extension_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, image_format_loader_extension_class_constructor, "ImageFormatLoaderExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ImageFormatLoaderExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_image_format_loader_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/image_format_loader';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_format_loader_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageFormatLoaderExtension");
	return m;
}

JSModuleDef *js_init_image_format_loader_extension_module(JSContext *ctx) {
	return _js_init_image_format_loader_extension_module(ctx, "@godot/classes/image_format_loader_extension");
}

void register_image_format_loader_extension() {
	ImageFormatLoaderExtension::__init_js_class_id();
	js_init_image_format_loader_extension_module(ctx);
}