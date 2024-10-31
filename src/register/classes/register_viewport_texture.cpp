
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void viewport_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef viewport_texture_class_def = {
	"ViewportTexture",
	.finalizer = viewport_texture_class_finalizer
};

static JSValue viewport_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ViewportTexture::__class_id);
	if (JS_IsException(obj))
		return obj;

	ViewportTexture *viewport_texture_class;
	if (argc == 1) 
		viewport_texture_class = static_cast<ViewportTexture *>(static_cast<Object *>(Variant(*argv)));
	else 
		viewport_texture_class = memnew(ViewportTexture);
	if (!viewport_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, viewport_texture_class);	
	return obj;
}
static JSValue viewport_texture_class_set_viewport_path_in_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ViewportTexture::set_viewport_path_in_scene, ctx, this_val, argc, argv);
};
static JSValue viewport_texture_class_get_viewport_path_in_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ViewportTexture::get_viewport_path_in_scene, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry viewport_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_viewport_path_in_scene", 1, &viewport_texture_class_set_viewport_path_in_scene),
	JS_CFUNC_DEF("get_viewport_path_in_scene", 0, &viewport_texture_class_get_viewport_path_in_scene),
};

static void define_viewport_texture_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "viewport_path"),
        JS_NewCFunction(ctx, viewport_texture_class_get_viewport_path_in_scene, "get_viewport_path_in_scene", 0),
        JS_NewCFunction(ctx, viewport_texture_class_set_viewport_path_in_scene, "set_viewport_path_in_scene", 1),
        JS_PROP_GETSET
    );
	
}

static void define_viewport_texture_enum(JSContext *ctx, JSValue proto) {
}

static int js_viewport_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ViewportTexture::__class_id);
	classes["ViewportTexture"] = ViewportTexture::__class_id;
	class_id_list.insert(ViewportTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ViewportTexture::__class_id, &viewport_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ViewportTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ViewportTexture::__class_id, proto);

	define_viewport_texture_property(ctx, proto);
	define_viewport_texture_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, viewport_texture_class_proto_funcs, _countof(viewport_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, viewport_texture_class_constructor, "ViewportTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ViewportTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_viewport_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_viewport_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ViewportTexture");
	return m;
}

JSModuleDef *js_init_viewport_texture_module(JSContext *ctx) {
	return _js_init_viewport_texture_module(ctx, "@godot/classes/viewport_texture");
}

void register_viewport_texture() {
	ViewportTexture::__init_js_class_id();
	js_init_viewport_texture_module(ctx);
}