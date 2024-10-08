
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/weak_ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void weak_ref_class_finalizer(JSRuntime *rt, JSValue val) {
	WeakRef *weak_ref = static_cast<WeakRef *>(JS_GetOpaque(val, WeakRef::__class_id));
	if (weak_ref)
		WeakRef::free(nullptr, weak_ref);
}

static JSClassDef weak_ref_class_def = {
	"WeakRef",
	.finalizer = weak_ref_class_finalizer
};

static JSValue weak_ref_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WeakRef *weak_ref_class;
	JSValue obj = JS_NewObjectClass(ctx, WeakRef::__class_id);
	if (JS_IsException(obj))
		return obj;
	weak_ref_class = memnew(WeakRef);
	if (!weak_ref_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, weak_ref_class);
	return obj;
}
static JSValue weak_ref_class_get_ref(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WeakRef::get_ref, WeakRef::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry weak_ref_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_ref", 0, &weak_ref_class_get_ref),
};

static int js_weak_ref_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&WeakRef::__class_id);
	classes["WeakRef"] = WeakRef::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WeakRef::__class_id, &weak_ref_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WeakRef::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, weak_ref_class_proto_funcs, _countof(weak_ref_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, weak_ref_class_constructor, "WeakRef", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "WeakRef", ctor);

	return 0;
}

JSModuleDef *_js_init_weak_ref_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_weak_ref_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WeakRef");
	return m;
}

JSModuleDef *js_init_weak_ref_module(JSContext *ctx) {
	return _js_init_weak_ref_module(ctx, "godot/classes/weak_ref");
}

void register_weak_ref() {
	js_init_weak_ref_module(ctx);
}