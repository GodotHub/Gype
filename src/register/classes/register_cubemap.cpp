
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/cubemap.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	Cubemap *cubemap = static_cast<Cubemap *>(JS_GetOpaque(val, Cubemap::__class_id));
	if (cubemap)
		Cubemap::free(nullptr, cubemap);
}

static JSClassDef cubemap_class_def = {
	"Cubemap",
	.finalizer = cubemap_class_finalizer
};

static JSValue cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Cubemap *cubemap_class;
	JSValue obj = JS_NewObjectClass(ctx, Cubemap::__class_id);
	if (JS_IsException(obj))
		return obj;
	cubemap_class = memnew(Cubemap);
	if (!cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, cubemap_class);
	return obj;
}
static JSValue cubemap_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Cubemap::create_placeholder, Cubemap::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry cubemap_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_placeholder", 0, &cubemap_class_create_placeholder),
};

static int js_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Cubemap::__class_id);
	classes["Cubemap"] = Cubemap::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Cubemap::__class_id, &cubemap_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ImageTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Cubemap::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, cubemap_class_proto_funcs, _countof(cubemap_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, cubemap_class_constructor, "Cubemap", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Cubemap", ctor);

	return 0;
}

JSModuleDef *_js_init_cubemap_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cubemap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Cubemap");
	return m;
}

JSModuleDef *js_init_cubemap_module(JSContext *ctx) {
	return _js_init_cubemap_module(ctx, "godot/classes/cubemap");
}

void register_cubemap() {
	js_init_cubemap_module(ctx);
}