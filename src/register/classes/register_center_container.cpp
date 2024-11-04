
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/center_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void center_container_class_finalizer(JSRuntime *rt, JSValue val) {
	CenterContainer *center_container = static_cast<CenterContainer *>(JS_GetOpaque(val, CenterContainer::__class_id));
	if (center_container)
		memdelete(center_container);
}

static JSClassDef center_container_class_def = {
	"CenterContainer",
	.finalizer = center_container_class_finalizer
};

static JSValue center_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CenterContainer::__class_id);
	if (JS_IsException(obj))
		return obj;

	CenterContainer *center_container_class;
	if (argc == 1) 
		center_container_class = static_cast<CenterContainer *>(Variant(*argv).operator Object *());
	else 
		center_container_class = memnew(CenterContainer);
	if (!center_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, center_container_class);
	return obj;
}
static JSValue center_container_class_set_use_top_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CenterContainer::set_use_top_left, ctx, this_val, argc, argv);
};
static JSValue center_container_class_is_using_top_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CenterContainer::is_using_top_left, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry center_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_use_top_left", 1, &center_container_class_set_use_top_left),
	JS_CFUNC_DEF("is_using_top_left", 0, &center_container_class_is_using_top_left),
};

static void define_center_container_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_top_left"),
        JS_NewCFunction(ctx, center_container_class_is_using_top_left, "is_using_top_left", 0),
        JS_NewCFunction(ctx, center_container_class_set_use_top_left, "set_use_top_left", 1),
        JS_PROP_GETSET
    );
	
}

static void define_center_container_enum(JSContext *ctx, JSValue proto) {
}

static int js_center_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CenterContainer"] = CenterContainer::__class_id;
	class_id_list.insert(CenterContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CenterContainer::__class_id, &center_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CenterContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CenterContainer::__class_id, proto);

	define_center_container_property(ctx, proto);
	define_center_container_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, center_container_class_proto_funcs, _countof(center_container_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, center_container_class_constructor, "CenterContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CenterContainer", ctor);
	constructors[CenterContainer::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_center_container_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_center_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CenterContainer");
	return m;
}

JSModuleDef *js_init_center_container_module(JSContext *ctx) {
	return _js_init_center_container_module(ctx, "@godot/classes/center_container");
}

void register_center_container() {
	CenterContainer::__init_js_class_id();
	js_init_center_container_module(ctx);
}