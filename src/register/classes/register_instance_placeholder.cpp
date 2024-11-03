
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/instance_placeholder.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void instance_placeholder_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef instance_placeholder_class_def = {
	"InstancePlaceholder",
	.finalizer = instance_placeholder_class_finalizer
};

static JSValue instance_placeholder_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InstancePlaceholder::__class_id);
	if (JS_IsException(obj))
		return obj;

	InstancePlaceholder *instance_placeholder_class;
	if (argc == 1) 
		instance_placeholder_class = static_cast<InstancePlaceholder *>(Variant(*argv).operator Object *());
	else 
		instance_placeholder_class = memnew(InstancePlaceholder);
	if (!instance_placeholder_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, instance_placeholder_class);
	return obj;
}
static JSValue instance_placeholder_class_get_stored_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&InstancePlaceholder::get_stored_values, ctx, this_val, argc, argv);
};
static JSValue instance_placeholder_class_create_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&InstancePlaceholder::create_instance, ctx, this_val, argc, argv);
};
static JSValue instance_placeholder_class_get_instance_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InstancePlaceholder::get_instance_path, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry instance_placeholder_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_stored_values", 1, &instance_placeholder_class_get_stored_values),
	JS_CFUNC_DEF("create_instance", 2, &instance_placeholder_class_create_instance),
	JS_CFUNC_DEF("get_instance_path", 0, &instance_placeholder_class_get_instance_path),
};

static void define_instance_placeholder_property(JSContext *ctx, JSValue proto) {
	
}

static void define_instance_placeholder_enum(JSContext *ctx, JSValue proto) {
}

static int js_instance_placeholder_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["InstancePlaceholder"] = InstancePlaceholder::__class_id;
	class_id_list.insert(InstancePlaceholder::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InstancePlaceholder::__class_id, &instance_placeholder_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InstancePlaceholder::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InstancePlaceholder::__class_id, proto);

	define_instance_placeholder_property(ctx, proto);
	define_instance_placeholder_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, instance_placeholder_class_proto_funcs, _countof(instance_placeholder_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, instance_placeholder_class_constructor, "InstancePlaceholder", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "InstancePlaceholder", ctor);
	constructors[InstancePlaceholder::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_instance_placeholder_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_instance_placeholder_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InstancePlaceholder");
	return m;
}

JSModuleDef *js_init_instance_placeholder_module(JSContext *ctx) {
	return _js_init_instance_placeholder_module(ctx, "@godot/classes/instance_placeholder");
}

void register_instance_placeholder() {
	InstancePlaceholder::__init_js_class_id();
	js_init_instance_placeholder_module(ctx);
}