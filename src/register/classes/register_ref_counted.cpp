
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ref_counted_class_finalizer(JSRuntime *rt, JSValue val) {
	RefCounted *ref_counted = static_cast<RefCounted *>(JS_GetOpaque(val, RefCounted::__class_id));
	if (ref_counted)
		RefCounted::free(nullptr, ref_counted);
}

static JSClassDef ref_counted_class_def = {
	"RefCounted",
	.finalizer = ref_counted_class_finalizer
};

static JSValue ref_counted_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RefCounted *ref_counted_class;
	JSValue obj = JS_NewObjectClass(ctx, RefCounted::__class_id);
	if (JS_IsException(obj))
		return obj;
	ref_counted_class = memnew(RefCounted);
	if (!ref_counted_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, ref_counted_class);
	return obj;
}
static JSValue ref_counted_class_init_ref(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RefCounted::init_ref, RefCounted::__class_id, ctx, this_val, argv);
};
static JSValue ref_counted_class_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RefCounted::reference, RefCounted::__class_id, ctx, this_val, argv);
};
static JSValue ref_counted_class_unreference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RefCounted::unreference, RefCounted::__class_id, ctx, this_val, argv);
};
static JSValue ref_counted_class_get_reference_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RefCounted::get_reference_count, RefCounted::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry ref_counted_class_proto_funcs[] = {
	JS_CFUNC_DEF("init_ref", 0, &ref_counted_class_init_ref),
	JS_CFUNC_DEF("reference", 0, &ref_counted_class_reference),
	JS_CFUNC_DEF("unreference", 0, &ref_counted_class_unreference),
	JS_CFUNC_DEF("get_reference_count", 0, &ref_counted_class_get_reference_count),
};

static int js_ref_counted_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RefCounted::__class_id);
	classes["RefCounted"] = RefCounted::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RefCounted::__class_id, &ref_counted_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RefCounted::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, ref_counted_class_proto_funcs, _countof(ref_counted_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, ref_counted_class_constructor, "RefCounted", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RefCounted", ctor);

	return 0;
}

JSModuleDef *_js_init_ref_counted_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ref_counted_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RefCounted");
	return m;
}

JSModuleDef *js_init_ref_counted_module(JSContext *ctx) {
	return _js_init_ref_counted_module(ctx, "godot/classes/ref_counted");
}

void register_ref_counted() {
	js_init_ref_counted_module(ctx);
}