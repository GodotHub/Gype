
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ref_counted_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef ref_counted_class_def = {
	"RefCounted",
	.finalizer = ref_counted_class_finalizer
};

static JSValue ref_counted_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RefCounted::__class_id);
	if (JS_IsException(obj))
		return obj;
	RefCounted *ref_counted_class = memnew(RefCounted);
	if (!ref_counted_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, ref_counted_class);	
	return obj;
}
static JSValue ref_counted_class_init_ref(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RefCounted::init_ref, ctx, this_val, argc, argv);
};
static JSValue ref_counted_class_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RefCounted::reference, ctx, this_val, argc, argv);
};
static JSValue ref_counted_class_unreference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&RefCounted::unreference, ctx, this_val, argc, argv);
};
static JSValue ref_counted_class_get_reference_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RefCounted::get_reference_count, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry ref_counted_class_proto_funcs[] = {
	JS_CFUNC_DEF("init_ref", 0, &ref_counted_class_init_ref),
	JS_CFUNC_DEF("reference", 0, &ref_counted_class_reference),
	JS_CFUNC_DEF("unreference", 0, &ref_counted_class_unreference),
	JS_CFUNC_DEF("get_reference_count", 0, &ref_counted_class_get_reference_count),
};

void define_ref_counted_property(JSContext *ctx, JSValue obj) {
}

static int js_ref_counted_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RefCounted::__class_id);
	classes["RefCounted"] = RefCounted::__class_id;
	class_id_list.insert(RefCounted::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RefCounted::__class_id, &ref_counted_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RefCounted::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RefCounted::__class_id, proto);

	define_ref_counted_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, ref_counted_class_proto_funcs, _countof(ref_counted_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, ref_counted_class_constructor, "RefCounted", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RefCounted", ctor);

	return 0;
}

JSModuleDef *_js_init_ref_counted_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	RefCounted::__init_js_class_id();
	js_init_ref_counted_module(ctx);
}