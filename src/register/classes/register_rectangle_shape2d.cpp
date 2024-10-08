
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/rectangle_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rectangle_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	RectangleShape2D *rectangle_shape2d = static_cast<RectangleShape2D *>(JS_GetOpaque(val, RectangleShape2D::__class_id));
	if (rectangle_shape2d)
		RectangleShape2D::free(nullptr, rectangle_shape2d);
}

static JSClassDef rectangle_shape2d_class_def = {
	"RectangleShape2D",
	.finalizer = rectangle_shape2d_class_finalizer
};

static JSValue rectangle_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RectangleShape2D *rectangle_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, RectangleShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	rectangle_shape2d_class = memnew(RectangleShape2D);
	if (!rectangle_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rectangle_shape2d_class);
	return obj;
}
static JSValue rectangle_shape2d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RectangleShape2D::set_size, RectangleShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rectangle_shape2d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RectangleShape2D::get_size, RectangleShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rectangle_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &rectangle_shape2d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &rectangle_shape2d_class_get_size),
};

static int js_rectangle_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RectangleShape2D::__class_id);
	classes["RectangleShape2D"] = RectangleShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RectangleShape2D::__class_id, &rectangle_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RectangleShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rectangle_shape2d_class_proto_funcs, _countof(rectangle_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rectangle_shape2d_class_constructor, "RectangleShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RectangleShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_rectangle_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rectangle_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RectangleShape2D");
	return m;
}

JSModuleDef *js_init_rectangle_shape2d_module(JSContext *ctx) {
	return _js_init_rectangle_shape2d_module(ctx, "godot/classes/rectangle_shape2d");
}

void register_rectangle_shape2d() {
	js_init_rectangle_shape2d_module(ctx);
}