
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packed_data_container.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packed_data_container_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef packed_data_container_class_def = {
	"PackedDataContainer",
	.finalizer = packed_data_container_class_finalizer
};

static JSValue packed_data_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PackedDataContainer::__class_id);
	if (JS_IsException(obj))
		return obj;

	PackedDataContainer *packed_data_container_class;
	if (argc == 1) 
		packed_data_container_class = static_cast<PackedDataContainer *>(static_cast<Object *>(Variant(*argv)));
	else 
		packed_data_container_class = memnew(PackedDataContainer);
	if (!packed_data_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packed_data_container_class);	
	return obj;
}
static JSValue packed_data_container_class_pack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PackedDataContainer::pack, ctx, this_val, argc, argv);
};
static JSValue packed_data_container_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PackedDataContainer::size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry packed_data_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("pack", 1, &packed_data_container_class_pack),
	JS_CFUNC_DEF("size", 0, &packed_data_container_class_size),
};

static void define_packed_data_container_property(JSContext *ctx, JSValue proto) {
	
}

static void define_packed_data_container_enum(JSContext *ctx, JSValue proto) {
}

static int js_packed_data_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedDataContainer::__class_id);
	classes["PackedDataContainer"] = PackedDataContainer::__class_id;
	class_id_list.insert(PackedDataContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedDataContainer::__class_id, &packed_data_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PackedDataContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PackedDataContainer::__class_id, proto);

	define_packed_data_container_property(ctx, proto);
	define_packed_data_container_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_data_container_class_proto_funcs, _countof(packed_data_container_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packed_data_container_class_constructor, "PackedDataContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedDataContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_data_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_data_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedDataContainer");
	return m;
}

JSModuleDef *js_init_packed_data_container_module(JSContext *ctx) {
	return _js_init_packed_data_container_module(ctx, "@godot/classes/packed_data_container");
}

void register_packed_data_container() {
	PackedDataContainer::__init_js_class_id();
	js_init_packed_data_container_module(ctx);
}