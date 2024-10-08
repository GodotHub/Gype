
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_texture3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_texture3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ImageTexture3D *image_texture3d = static_cast<ImageTexture3D *>(JS_GetOpaque(val, ImageTexture3D::__class_id));
	if (image_texture3d)
		ImageTexture3D::free(nullptr, image_texture3d);
}

static JSClassDef image_texture3d_class_def = {
	"ImageTexture3D",
	.finalizer = image_texture3d_class_finalizer
};

static JSValue image_texture3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ImageTexture3D *image_texture3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ImageTexture3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	image_texture3d_class = memnew(ImageTexture3D);
	if (!image_texture3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, image_texture3d_class);
	return obj;
}
static JSValue image_texture3d_class_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ImageTexture3D::create, ImageTexture3D::__class_id, ctx, this_val, argv);
};
static JSValue image_texture3d_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ImageTexture3D::update, ImageTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry image_texture3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("create", 6, &image_texture3d_class_create),
	JS_CFUNC_DEF("update", 1, &image_texture3d_class_update),
};

static int js_image_texture3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ImageTexture3D::__class_id);
	classes["ImageTexture3D"] = ImageTexture3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ImageTexture3D::__class_id, &image_texture3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageTexture3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_texture3d_class_proto_funcs, _countof(image_texture3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, image_texture3d_class_constructor, "ImageTexture3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ImageTexture3D", ctor);

	return 0;
}

JSModuleDef *_js_init_image_texture3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_texture3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageTexture3D");
	return m;
}

JSModuleDef *js_init_image_texture3d_module(JSContext *ctx) {
	return _js_init_image_texture3d_module(ctx, "godot/classes/image_texture3d");
}

void register_image_texture3d() {
	js_init_image_texture3d_module(ctx);
}