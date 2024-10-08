
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d_array.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	Texture2DArray *texture2d_array = static_cast<Texture2DArray *>(JS_GetOpaque(val, Texture2DArray::__class_id));
	if (texture2d_array)
		Texture2DArray::free(nullptr, texture2d_array);
}

static JSClassDef texture2d_array_class_def = {
	"Texture2DArray",
	.finalizer = texture2d_array_class_finalizer
};

static JSValue texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Texture2DArray *texture2d_array_class;
	JSValue obj = JS_NewObjectClass(ctx, Texture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture2d_array_class = memnew(Texture2DArray);
	if (!texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture2d_array_class);
	return obj;
}
static JSValue texture2d_array_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2DArray::create_placeholder, Texture2DArray::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture2d_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_placeholder", 0, &texture2d_array_class_create_placeholder),
};

static int js_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Texture2DArray::__class_id);
	classes["Texture2DArray"] = Texture2DArray::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Texture2DArray::__class_id, &texture2d_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ImageTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture2DArray::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture2d_array_class_proto_funcs, _countof(texture2d_array_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture2d_array_class_constructor, "Texture2DArray", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Texture2DArray", ctor);

	return 0;
}

JSModuleDef *_js_init_texture2d_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture2DArray");
	return m;
}

JSModuleDef *js_init_texture2d_array_module(JSContext *ctx) {
	return _js_init_texture2d_array_module(ctx, "godot/classes/texture2d_array");
}

void register_texture2d_array() {
	js_init_texture2d_array_module(ctx);
}