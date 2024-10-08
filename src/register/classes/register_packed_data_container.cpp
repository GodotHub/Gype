
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/packed_data_container.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void packed_data_container_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedDataContainer *packed_data_container = static_cast<PackedDataContainer *>(JS_GetOpaque(val, PackedDataContainer::__class_id));
	if (packed_data_container)
		PackedDataContainer::free(nullptr, packed_data_container);
}

static JSClassDef packed_data_container_class_def = {
	"PackedDataContainer",
	.finalizer = packed_data_container_class_finalizer
};

static JSValue packed_data_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedDataContainer *packed_data_container_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedDataContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_data_container_class = memnew(PackedDataContainer);
	if (!packed_data_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_data_container_class);
	return obj;
}
static JSValue packed_data_container_class_pack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedDataContainer::pack, PackedDataContainer::__class_id, ctx, this_val, argv);
};
static JSValue packed_data_container_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedDataContainer::size, PackedDataContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry packed_data_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("pack", 1, &packed_data_container_class_pack),
	JS_CFUNC_DEF("size", 0, &packed_data_container_class_size),
};

static int js_packed_data_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PackedDataContainer::__class_id);
	classes["PackedDataContainer"] = PackedDataContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PackedDataContainer::__class_id, &packed_data_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PackedDataContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_data_container_class_proto_funcs, _countof(packed_data_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packed_data_container_class_constructor, "PackedDataContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PackedDataContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_data_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_data_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedDataContainer");
	return m;
}

JSModuleDef *js_init_packed_data_container_module(JSContext *ctx) {
	return _js_init_packed_data_container_module(ctx, "godot/classes/packed_data_container");
}

void register_packed_data_container() {
	js_init_packed_data_container_module(ctx);
}