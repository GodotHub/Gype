
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/sub_viewport_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sub_viewport_container_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef sub_viewport_container_class_def = {
	"SubViewportContainer",
	.finalizer = sub_viewport_container_class_finalizer
};

static JSValue sub_viewport_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SubViewportContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	SubViewportContainer *sub_viewport_container_class;
	if (argc == 1) {
		Variant vobj = *argv;
		sub_viewport_container_class = static_cast<SubViewportContainer *>(static_cast<Object *>(vobj));
	} else {
		sub_viewport_container_class = memnew(SubViewportContainer);
	}
	if (!sub_viewport_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sub_viewport_container_class);	
	return obj;
}
static JSValue sub_viewport_container_class_set_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewportContainer::set_stretch, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_container_class_is_stretch_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewportContainer::is_stretch_enabled, ctx, this_val, argc, argv);
};
static JSValue sub_viewport_container_class_set_stretch_shrink(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SubViewportContainer::set_stretch_shrink, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_container_class_get_stretch_shrink(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SubViewportContainer::get_stretch_shrink, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sub_viewport_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stretch", 1, &sub_viewport_container_class_set_stretch),
	JS_CFUNC_DEF("is_stretch_enabled", 0, &sub_viewport_container_class_is_stretch_enabled),
	JS_CFUNC_DEF("set_stretch_shrink", 1, &sub_viewport_container_class_set_stretch_shrink),
	JS_CFUNC_DEF("get_stretch_shrink", 0, &sub_viewport_container_class_get_stretch_shrink),
};

void define_sub_viewport_container_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch"),
        JS_NewCFunction(ctx, sub_viewport_container_class_is_stretch_enabled, "is_stretch_enabled", 0),
        JS_NewCFunction(ctx, sub_viewport_container_class_set_stretch, "set_stretch", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch_shrink"),
        JS_NewCFunction(ctx, sub_viewport_container_class_get_stretch_shrink, "get_stretch_shrink", 0),
        JS_NewCFunction(ctx, sub_viewport_container_class_set_stretch_shrink, "set_stretch_shrink", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_sub_viewport_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SubViewportContainer::__class_id);
	classes["SubViewportContainer"] = SubViewportContainer::__class_id;
	class_id_list.insert(SubViewportContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SubViewportContainer::__class_id, &sub_viewport_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SubViewportContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SubViewportContainer::__class_id, proto);

	define_sub_viewport_container_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sub_viewport_container_class_proto_funcs, _countof(sub_viewport_container_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sub_viewport_container_class_constructor, "SubViewportContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SubViewportContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_sub_viewport_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sub_viewport_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SubViewportContainer");
	return m;
}

JSModuleDef *js_init_sub_viewport_container_module(JSContext *ctx) {
	return _js_init_sub_viewport_container_module(ctx, "@godot/classes/sub_viewport_container");
}

void register_sub_viewport_container() {
	SubViewportContainer::__init_js_class_id();
	js_init_sub_viewport_container_module(ctx);
}