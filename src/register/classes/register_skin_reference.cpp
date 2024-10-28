
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skin_reference_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef skin_reference_class_def = {
	"SkinReference",
	.finalizer = skin_reference_class_finalizer
};

static JSValue skin_reference_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkinReference::__class_id);
	if (JS_IsException(obj))
		return obj;
	SkinReference *skin_reference_class = memnew(SkinReference);
	if (!skin_reference_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skin_reference_class);
	return obj;
}
static JSValue skin_reference_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkinReference::get_skeleton, ctx, this_val, argc, argv);
};
static JSValue skin_reference_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkinReference::get_skin, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skin_reference_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_skeleton", 0, &skin_reference_class_get_skeleton),
	JS_CFUNC_DEF("get_skin", 0, &skin_reference_class_get_skin),
};

void define_skin_reference_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_skin_reference_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkinReference::__class_id);
	classes["SkinReference"] = SkinReference::__class_id;
	class_id_list.insert(SkinReference::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkinReference::__class_id, &skin_reference_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkinReference::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkinReference::__class_id, proto);

	define_skin_reference_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skin_reference_class_proto_funcs, _countof(skin_reference_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skin_reference_class_constructor, "SkinReference", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkinReference", ctor);

	return 0;
}

JSModuleDef *_js_init_skin_reference_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	SkinReference::__init_js_class_id();
	js_init_skin_reference_module(ctx);
}