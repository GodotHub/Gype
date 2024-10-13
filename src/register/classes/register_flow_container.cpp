
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/flow_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void flow_container_class_finalizer(JSRuntime *rt, JSValue val) {
	FlowContainer *flow_container = static_cast<FlowContainer *>(JS_GetOpaque(val, FlowContainer::__class_id));
	if (flow_container)
		FlowContainer::free(nullptr, flow_container);
}

static JSClassDef flow_container_class_def = {
	"FlowContainer",
	.finalizer = flow_container_class_finalizer
};

static JSValue flow_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FlowContainer *flow_container_class;
	JSValue obj = JS_NewObjectClass(ctx, FlowContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	flow_container_class = memnew(FlowContainer);
	if (!flow_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, flow_container_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue flow_container_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FlowContainer::get_line_count, ctx, this_val, argc, argv);
};
static JSValue flow_container_class_set_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FlowContainer::set_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue flow_container_class_get_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FlowContainer::get_alignment, ctx, this_val, argc, argv);
};
static JSValue flow_container_class_set_last_wrap_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FlowContainer::set_last_wrap_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue flow_container_class_get_last_wrap_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FlowContainer::get_last_wrap_alignment, ctx, this_val, argc, argv);
};
static JSValue flow_container_class_set_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FlowContainer::set_vertical, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue flow_container_class_is_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FlowContainer::is_vertical, ctx, this_val, argc, argv);
};
static JSValue flow_container_class_set_reverse_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FlowContainer::set_reverse_fill, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue flow_container_class_is_reverse_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FlowContainer::is_reverse_fill, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry flow_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_line_count", 0, &flow_container_class_get_line_count),
	JS_CFUNC_DEF("set_alignment", 1, &flow_container_class_set_alignment),
	JS_CFUNC_DEF("get_alignment", 0, &flow_container_class_get_alignment),
	JS_CFUNC_DEF("set_last_wrap_alignment", 1, &flow_container_class_set_last_wrap_alignment),
	JS_CFUNC_DEF("get_last_wrap_alignment", 0, &flow_container_class_get_last_wrap_alignment),
	JS_CFUNC_DEF("set_vertical", 1, &flow_container_class_set_vertical),
	JS_CFUNC_DEF("is_vertical", 0, &flow_container_class_is_vertical),
	JS_CFUNC_DEF("set_reverse_fill", 1, &flow_container_class_set_reverse_fill),
	JS_CFUNC_DEF("is_reverse_fill", 0, &flow_container_class_is_reverse_fill),
};

void define_flow_container_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alignment"),
        JS_NewCFunction(ctx, flow_container_class_get_alignment, "get_alignment", 0),
        JS_NewCFunction(ctx, flow_container_class_set_alignment, "set_alignment", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "last_wrap_alignment"),
        JS_NewCFunction(ctx, flow_container_class_get_last_wrap_alignment, "get_last_wrap_alignment", 0),
        JS_NewCFunction(ctx, flow_container_class_set_last_wrap_alignment, "set_last_wrap_alignment", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertical"),
        JS_NewCFunction(ctx, flow_container_class_is_vertical, "is_vertical", 0),
        JS_NewCFunction(ctx, flow_container_class_set_vertical, "set_vertical", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "reverse_fill"),
        JS_NewCFunction(ctx, flow_container_class_is_reverse_fill, "is_reverse_fill", 0),
        JS_NewCFunction(ctx, flow_container_class_set_reverse_fill, "set_reverse_fill", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_flow_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&FlowContainer::__class_id);
	classes["FlowContainer"] = FlowContainer::__class_id;
	class_id_list.insert(FlowContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FlowContainer::__class_id, &flow_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FlowContainer::__class_id, proto);
	define_flow_container_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, flow_container_class_proto_funcs, _countof(flow_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, flow_container_class_constructor, "FlowContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "FlowContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_flow_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_flow_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FlowContainer");
	return m;
}

JSModuleDef *js_init_flow_container_module(JSContext *ctx) {
	return _js_init_flow_container_module(ctx, "godot/classes/flow_container");
}

void register_flow_container() {
	FlowContainer::__init_js_class_id();
	js_init_flow_container_module(ctx);
}