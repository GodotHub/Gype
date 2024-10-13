
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/encoded_object_as_id.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void encoded_object_as_id_class_finalizer(JSRuntime *rt, JSValue val) {
	EncodedObjectAsID *encoded_object_as_id = static_cast<EncodedObjectAsID *>(JS_GetOpaque(val, EncodedObjectAsID::__class_id));
	if (encoded_object_as_id)
		EncodedObjectAsID::free(nullptr, encoded_object_as_id);
}

static JSClassDef encoded_object_as_id_class_def = {
	"EncodedObjectAsID",
	.finalizer = encoded_object_as_id_class_finalizer
};

static JSValue encoded_object_as_id_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EncodedObjectAsID *encoded_object_as_id_class;
	JSValue obj = JS_NewObjectClass(ctx, EncodedObjectAsID::__class_id);
	if (JS_IsException(obj))
		return obj;
	encoded_object_as_id_class = memnew(EncodedObjectAsID);
	if (!encoded_object_as_id_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, encoded_object_as_id_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue encoded_object_as_id_class_set_object_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EncodedObjectAsID::set_object_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue encoded_object_as_id_class_get_object_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EncodedObjectAsID::get_object_id, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry encoded_object_as_id_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_object_id", 1, &encoded_object_as_id_class_set_object_id),
	JS_CFUNC_DEF("get_object_id", 0, &encoded_object_as_id_class_get_object_id),
};

void define_encoded_object_as_id_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "object_id"),
        JS_NewCFunction(ctx, encoded_object_as_id_class_get_object_id, "get_object_id", 0),
        JS_NewCFunction(ctx, encoded_object_as_id_class_set_object_id, "set_object_id", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_encoded_object_as_id_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EncodedObjectAsID::__class_id);
	classes["EncodedObjectAsID"] = EncodedObjectAsID::__class_id;
	class_id_list.insert(EncodedObjectAsID::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EncodedObjectAsID::__class_id, &encoded_object_as_id_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EncodedObjectAsID::__class_id, proto);
	define_encoded_object_as_id_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, encoded_object_as_id_class_proto_funcs, _countof(encoded_object_as_id_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, encoded_object_as_id_class_constructor, "EncodedObjectAsID", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EncodedObjectAsID", ctor);

	return 0;
}

JSModuleDef *_js_init_encoded_object_as_id_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_encoded_object_as_id_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EncodedObjectAsID");
	return m;
}

JSModuleDef *js_init_encoded_object_as_id_module(JSContext *ctx) {
	return _js_init_encoded_object_as_id_module(ctx, "godot/classes/encoded_object_as_id");
}

void register_encoded_object_as_id() {
	EncodedObjectAsID::__init_js_class_id();
	js_init_encoded_object_as_id_module(ctx);
}