
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skin_reference_class_finalizer(JSRuntime *rt, JSValue val) {
	SkinReference *skin_reference = static_cast<SkinReference *>(JS_GetOpaque(val, SkinReference::__class_id));
	if (skin_reference)
		SkinReference::free(nullptr, skin_reference);
}

static JSClassDef skin_reference_class_def = {
	"SkinReference",
	.finalizer = skin_reference_class_finalizer
};

static JSValue skin_reference_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkinReference *skin_reference_class;
	JSValue obj = JS_NewObjectClass(ctx, SkinReference::__class_id);
	if (JS_IsException(obj))
		return obj;
	skin_reference_class = memnew(SkinReference);
	if (!skin_reference_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skin_reference_class);
	return obj;
}
static JSValue skin_reference_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkinReference::get_skeleton, SkinReference::__class_id, ctx, this_val, argv);
};
static JSValue skin_reference_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkinReference::get_skin, SkinReference::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skin_reference_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_skeleton", 0, &skin_reference_class_get_skeleton),
	JS_CFUNC_DEF("get_skin", 0, &skin_reference_class_get_skin),
};

static int js_skin_reference_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkinReference::__class_id);
	classes["SkinReference"] = SkinReference::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkinReference::__class_id, &skin_reference_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkinReference::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skin_reference_class_proto_funcs, _countof(skin_reference_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skin_reference_class_constructor, "SkinReference", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkinReference", ctor);

	return 0;
}

JSModuleDef *_js_init_skin_reference_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skin_reference_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkinReference");
	return m;
}

JSModuleDef *js_init_skin_reference_module(JSContext *ctx) {
	return _js_init_skin_reference_module(ctx, "godot/classes/skin_reference");
}

void register_skin_reference() {
	js_init_skin_reference_module(ctx);
}