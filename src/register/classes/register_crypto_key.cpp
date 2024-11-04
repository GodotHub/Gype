
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void crypto_key_class_finalizer(JSRuntime *rt, JSValue val) {
	CryptoKey *crypto_key = static_cast<CryptoKey *>(JS_GetOpaque(val, CryptoKey::__class_id));
	if (crypto_key)
		memdelete(crypto_key);
}

static JSClassDef crypto_key_class_def = {
	"CryptoKey",
	.finalizer = crypto_key_class_finalizer
};

static JSValue crypto_key_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CryptoKey::__class_id);
	if (JS_IsException(obj))
		return obj;

	CryptoKey *crypto_key_class;
	if (argc == 1) 
		crypto_key_class = static_cast<CryptoKey *>(Variant(*argv).operator Object *());
	else 
		crypto_key_class = memnew(CryptoKey);
	if (!crypto_key_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, crypto_key_class);
	return obj;
}
static JSValue crypto_key_class_save(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CryptoKey::save, ctx, this_val, argc, argv);
};
static JSValue crypto_key_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CryptoKey::load, ctx, this_val, argc, argv);
};
static JSValue crypto_key_class_is_public_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CryptoKey::is_public_only, ctx, this_val, argc, argv);
};
static JSValue crypto_key_class_save_to_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CryptoKey::save_to_string, ctx, this_val, argc, argv);
};
static JSValue crypto_key_class_load_from_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CryptoKey::load_from_string, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry crypto_key_class_proto_funcs[] = {
	JS_CFUNC_DEF("save", 2, &crypto_key_class_save),
	JS_CFUNC_DEF("load", 2, &crypto_key_class_load),
	JS_CFUNC_DEF("is_public_only", 0, &crypto_key_class_is_public_only),
	JS_CFUNC_DEF("save_to_string", 1, &crypto_key_class_save_to_string),
	JS_CFUNC_DEF("load_from_string", 2, &crypto_key_class_load_from_string),
};

static void define_crypto_key_property(JSContext *ctx, JSValue proto) {
	
}

static void define_crypto_key_enum(JSContext *ctx, JSValue proto) {
}

static int js_crypto_key_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CryptoKey"] = CryptoKey::__class_id;
	class_id_list.insert(CryptoKey::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CryptoKey::__class_id, &crypto_key_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CryptoKey::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CryptoKey::__class_id, proto);

	define_crypto_key_property(ctx, proto);
	define_crypto_key_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, crypto_key_class_proto_funcs, _countof(crypto_key_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, crypto_key_class_constructor, "CryptoKey", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CryptoKey", ctor);
	constructors[CryptoKey::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_crypto_key_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_crypto_key_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CryptoKey");
	return m;
}

JSModuleDef *js_init_crypto_key_module(JSContext *ctx) {
	return _js_init_crypto_key_module(ctx, "@godot/classes/crypto_key");
}

void register_crypto_key() {
	CryptoKey::__init_js_class_id();
	js_init_crypto_key_module(ctx);
}