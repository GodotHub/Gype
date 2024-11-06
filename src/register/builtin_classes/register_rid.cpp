
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/rid.hpp>

using namespace godot;

static void rid_class_finalizer(JSRuntime *rt, JSValue val) {
	RID *rid = static_cast<RID *>(JS_GetOpaque(val, RID::__class_id));
	if (rid)
		memfree(rid);
}

static JSClassDef rid_class_def = {
	"RID",
	.finalizer = rid_class_finalizer
};

static JSValue rid_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, RID::__class_id);
	if (JS_IsException(obj))
		return obj;

	RID *rid_class = nullptr;

	if (argc == 0) {
		rid_class = memnew(RID());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::RID) {
		RID v0 = Variant(argv[0]);
		rid_class = memnew(RID(v0));
	}

	if (!rid_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rid_class);
	return obj;
}
static JSValue rid_class_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RID::is_valid, ctx, this_val, argc, argv);
};
static JSValue rid_class_get_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RID::get_id, ctx, this_val, argc, argv);
};

static const JSCFunctionListEntry rid_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_valid", 0, &rid_class_is_valid),
	JS_CFUNC_DEF("get_id", 0, &rid_class_get_id),
};

static int js_rid_class_init(JSContext *ctx) {
	classes["RID"] = RID::__class_id;
	class_id_list.insert(RID::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RID::__class_id, &rid_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, RID::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rid_class_proto_funcs, _countof(rid_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rid_class_constructor, "RID", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "RID", ctor);

	return 0;
}

void js_init_rid_module(JSContext *ctx) {
	js_rid_class_init(ctx);
}

void register_rid() {
	RID::__init_js_class_id();
	js_init_rid_module(ctx);
}