
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image_texture3d.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void image_texture3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef image_texture3d_class_def = {
	"ImageTexture3D",
	.finalizer = image_texture3d_class_finalizer
};

static JSValue image_texture3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ImageTexture3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	ImageTexture3D *image_texture3d_class;
	if (argc == 1) {
		Variant vobj = *argv;
		image_texture3d_class = static_cast<ImageTexture3D *>(static_cast<Object *>(vobj));
	} else {
		image_texture3d_class = memnew(ImageTexture3D);
	}
	if (!image_texture3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, image_texture3d_class);	
	return obj;
}
static JSValue image_texture3d_class_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ImageTexture3D::create, ctx, this_val, argc, argv);
};
static JSValue image_texture3d_class_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ImageTexture3D::update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry image_texture3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("create", 6, &image_texture3d_class_create),
	JS_CFUNC_DEF("update", 1, &image_texture3d_class_update),
};

void define_image_texture3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_image_texture3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ImageTexture3D::__class_id);
	classes["ImageTexture3D"] = ImageTexture3D::__class_id;
	class_id_list.insert(ImageTexture3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ImageTexture3D::__class_id, &image_texture3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ImageTexture3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ImageTexture3D::__class_id, proto);

	define_image_texture3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, image_texture3d_class_proto_funcs, _countof(image_texture3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, image_texture3d_class_constructor, "ImageTexture3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ImageTexture3D", ctor);

	return 0;
}

JSModuleDef *_js_init_image_texture3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_image_texture3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ImageTexture3D");
	return m;
}

JSModuleDef *js_init_image_texture3d_module(JSContext *ctx) {
	return _js_init_image_texture3d_module(ctx, "@godot/classes/image_texture3d");
}

void register_image_texture3d() {
	ImageTexture3D::__init_js_class_id();
	js_init_image_texture3d_module(ctx);
}