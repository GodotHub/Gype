
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/packed_data_container_ref.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packed_data_container_ref_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef packed_data_container_ref_class_def = {
	"PackedDataContainerRef",
	.finalizer = packed_data_container_ref_class_finalizer
};

static JSValue packed_data_container_ref_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PackedDataContainerRef::__class_id);
	if (JS_IsException(obj))
		return obj;
	PackedDataContainerRef *packed_data_container_ref_class = memnew(PackedDataContainerRef);
	if (!packed_data_container_ref_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packed_data_container_ref_class);	
	return obj;
}
static JSValue packed_data_container_ref_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PackedDataContainerRef::size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry packed_data_container_ref_class_proto_funcs[] = {
	JS_CFUNC_DEF("size", 0, &packed_data_container_ref_class_size),
};

void define_packed_data_container_ref_property(JSContext *ctx, JSValue obj) {
}

static int js_packed_data_container_ref_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedDataContainerRef::__class_id);
	classes["PackedDataContainerRef"] = PackedDataContainerRef::__class_id;
	class_id_list.insert(PackedDataContainerRef::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedDataContainerRef::__class_id, &packed_data_container_ref_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PackedDataContainerRef::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PackedDataContainerRef::__class_id, proto);

	define_packed_data_container_ref_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_data_container_ref_class_proto_funcs, _countof(packed_data_container_ref_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packed_data_container_ref_class_constructor, "PackedDataContainerRef", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedDataContainerRef", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_data_container_ref_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_data_container_ref_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedDataContainerRef");
	return m;
}

JSModuleDef *js_init_packed_data_container_ref_module(JSContext *ctx) {
	return _js_init_packed_data_container_ref_module(ctx, "godot/classes/packed_data_container_ref");
}

void register_packed_data_container_ref() {
	PackedDataContainerRef::__init_js_class_id();
	js_init_packed_data_container_ref_module(ctx);
}