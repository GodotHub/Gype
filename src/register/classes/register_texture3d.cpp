
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef texture3d_class_def = {
	"Texture3D",
	.finalizer = texture3d_class_finalizer
};

static JSValue texture3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Texture3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Texture3D *texture3d_class;
	if (argc == 1) 
		texture3d_class = static_cast<Texture3D *>(Variant(*argv).operator Object *());
	else 
		texture3d_class = memnew(Texture3D);
	if (!texture3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture3d_class);
	return obj;
}
static JSValue texture3d_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::get_format, ctx, this_val, argc, argv);
};
static JSValue texture3d_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::get_width, ctx, this_val, argc, argv);
};
static JSValue texture3d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::get_height, ctx, this_val, argc, argv);
};
static JSValue texture3d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::get_depth, ctx, this_val, argc, argv);
};
static JSValue texture3d_class_has_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::has_mipmaps, ctx, this_val, argc, argv);
};
static JSValue texture3d_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::get_data, ctx, this_val, argc, argv);
};
static JSValue texture3d_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Texture3D::create_placeholder, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry texture3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_format", 0, &texture3d_class_get_format),
	JS_CFUNC_DEF("get_width", 0, &texture3d_class_get_width),
	JS_CFUNC_DEF("get_height", 0, &texture3d_class_get_height),
	JS_CFUNC_DEF("get_depth", 0, &texture3d_class_get_depth),
	JS_CFUNC_DEF("has_mipmaps", 0, &texture3d_class_has_mipmaps),
	JS_CFUNC_DEF("get_data", 0, &texture3d_class_get_data),
	JS_CFUNC_DEF("create_placeholder", 0, &texture3d_class_create_placeholder),
};

static void define_texture3d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_texture3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_texture3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Texture3D"] = Texture3D::__class_id;
	class_id_list.insert(Texture3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Texture3D::__class_id, &texture3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Texture3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture3D::__class_id, proto);

	define_texture3d_property(ctx, proto);
	define_texture3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture3d_class_proto_funcs, _countof(texture3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture3d_class_constructor, "Texture3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Texture3D", ctor);

	return 0;
}

JSModuleDef *_js_init_texture3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture3D");
	return m;
}

JSModuleDef *js_init_texture3d_module(JSContext *ctx) {
	return _js_init_texture3d_module(ctx, "@godot/classes/texture3d");
}

void register_texture3d() {
	Texture3D::__init_js_class_id();
	js_init_texture3d_module(ctx);
}