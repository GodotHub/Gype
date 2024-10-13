
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/circle_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void circle_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CircleShape2D *circle_shape2d = static_cast<CircleShape2D *>(JS_GetOpaque(val, CircleShape2D::__class_id));
	if (circle_shape2d)
		CircleShape2D::free(nullptr, circle_shape2d);
}

static JSClassDef circle_shape2d_class_def = {
	"CircleShape2D",
	.finalizer = circle_shape2d_class_finalizer
};

static JSValue circle_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CircleShape2D *circle_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, CircleShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	circle_shape2d_class = memnew(CircleShape2D);
	if (!circle_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, circle_shape2d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue circle_shape2d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CircleShape2D::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue circle_shape2d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CircleShape2D::get_radius, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry circle_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &circle_shape2d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &circle_shape2d_class_get_radius),
};

void define_circle_shape2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, circle_shape2d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, circle_shape2d_class_set_radius, "set_radius", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_circle_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CircleShape2D::__class_id);
	classes["CircleShape2D"] = CircleShape2D::__class_id;
	class_id_list.insert(CircleShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CircleShape2D::__class_id, &circle_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CircleShape2D::__class_id, proto);
	define_circle_shape2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, circle_shape2d_class_proto_funcs, _countof(circle_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, circle_shape2d_class_constructor, "CircleShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CircleShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_circle_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_circle_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CircleShape2D");
	return m;
}

JSModuleDef *js_init_circle_shape2d_module(JSContext *ctx) {
	return _js_init_circle_shape2d_module(ctx, "godot/classes/circle_shape2d");
}

void register_circle_shape2d() {
	CircleShape2D::__init_js_class_id();
	js_init_circle_shape2d_module(ctx);
}