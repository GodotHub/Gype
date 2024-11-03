
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/rectangle_shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rectangle_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rectangle_shape2d_class_def = {
	"RectangleShape2D",
	.finalizer = rectangle_shape2d_class_finalizer
};

static JSValue rectangle_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RectangleShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	RectangleShape2D *rectangle_shape2d_class;
	if (argc == 1) 
		rectangle_shape2d_class = static_cast<RectangleShape2D *>(Variant(*argv).operator Object *());
	else 
		rectangle_shape2d_class = memnew(RectangleShape2D);
	if (!rectangle_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rectangle_shape2d_class);
	return obj;
}
static JSValue rectangle_shape2d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RectangleShape2D::set_size, ctx, this_val, argc, argv);
};
static JSValue rectangle_shape2d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RectangleShape2D::get_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rectangle_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &rectangle_shape2d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &rectangle_shape2d_class_get_size),
};

static void define_rectangle_shape2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, rectangle_shape2d_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, rectangle_shape2d_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rectangle_shape2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_rectangle_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RectangleShape2D"] = RectangleShape2D::__class_id;
	class_id_list.insert(RectangleShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RectangleShape2D::__class_id, &rectangle_shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RectangleShape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RectangleShape2D::__class_id, proto);

	define_rectangle_shape2d_property(ctx, proto);
	define_rectangle_shape2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rectangle_shape2d_class_proto_funcs, _countof(rectangle_shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rectangle_shape2d_class_constructor, "RectangleShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "RectangleShape2D", ctor);
	constructors[RectangleShape2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_rectangle_shape2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rectangle_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RectangleShape2D");
	return m;
}

JSModuleDef *js_init_rectangle_shape2d_module(JSContext *ctx) {
	return _js_init_rectangle_shape2d_module(ctx, "@godot/classes/rectangle_shape2d");
}

void register_rectangle_shape2d() {
	RectangleShape2D::__init_js_class_id();
	js_init_rectangle_shape2d_module(ctx);
}