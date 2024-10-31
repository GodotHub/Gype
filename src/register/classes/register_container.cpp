
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void container_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef container_class_def = {
	"Container",
	.finalizer = container_class_finalizer
};

static JSValue container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Container::__class_id);
	if (JS_IsException(obj))
		return obj;

	Container *container_class;
	if (argc == 1) 
		container_class = static_cast<Container *>(Variant(*argv).operator Object *());
	else 
		container_class = memnew(Container);
	if (!container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, container_class);
	return obj;
}
static JSValue container_class_queue_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Container::queue_sort, ctx, this_val, argc, argv);
};
static JSValue container_class_fit_child_in_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Container::fit_child_in_rect, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry container_class_proto_funcs[] = {
	JS_CFUNC_DEF("queue_sort", 0, &container_class_queue_sort),
	JS_CFUNC_DEF("fit_child_in_rect", 2, &container_class_fit_child_in_rect),
};
static JSValue container_class_get_pre_sort_children_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Container *opaque = reinterpret_cast<Container *>(JS_GetOpaque(this_val, Container::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "pre_sort_children_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "pre_sort_children").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "pre_sort_children_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue container_class_get_sort_children_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Container *opaque = reinterpret_cast<Container *>(JS_GetOpaque(this_val, Container::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "sort_children_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "sort_children").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "sort_children_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_container_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "pre_sort_children"),
		JS_NewCFunction(ctx, container_class_get_pre_sort_children_signal, "get_pre_sort_children_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "sort_children"),
		JS_NewCFunction(ctx, container_class_get_sort_children_signal, "get_sort_children_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_container_enum(JSContext *ctx, JSValue proto) {
}

static int js_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Container"] = Container::__class_id;
	class_id_list.insert(Container::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Container::__class_id, &container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Container::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Container::__class_id, proto);

	define_container_property(ctx, proto);
	define_container_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, container_class_proto_funcs, _countof(container_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, container_class_constructor, "Container", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Container", ctor);

	return 0;
}

JSModuleDef *_js_init_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Container");
	return m;
}

JSModuleDef *js_init_container_module(JSContext *ctx) {
	return _js_init_container_module(ctx, "@godot/classes/container");
}

void register_container() {
	Container::__init_js_class_id();
	js_init_container_module(ctx);
}