
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef shape2d_class_def = {
	"Shape2D",
	.finalizer = shape2d_class_finalizer
};

static JSValue shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Shape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Shape2D *shape2d_class = memnew(Shape2D);
	if (!shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shape2d_class);	
	return obj;
}
static JSValue shape2d_class_set_custom_solver_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Shape2D::set_custom_solver_bias, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape2d_class_get_custom_solver_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shape2D::get_custom_solver_bias, ctx, this_val, argc, argv);
};
static JSValue shape2d_class_collide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Shape2D::collide, ctx, this_val, argc, argv);
};
static JSValue shape2d_class_collide_with_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Shape2D::collide_with_motion, ctx, this_val, argc, argv);
};
static JSValue shape2d_class_collide_and_get_contacts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Shape2D::collide_and_get_contacts, ctx, this_val, argc, argv);
};
static JSValue shape2d_class_collide_with_motion_and_get_contacts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Shape2D::collide_with_motion_and_get_contacts, ctx, this_val, argc, argv);
};
static JSValue shape2d_class_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Shape2D::draw, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape2d_class_get_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Shape2D::get_rect, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_custom_solver_bias", 1, &shape2d_class_set_custom_solver_bias),
	JS_CFUNC_DEF("get_custom_solver_bias", 0, &shape2d_class_get_custom_solver_bias),
	JS_CFUNC_DEF("collide", 3, &shape2d_class_collide),
	JS_CFUNC_DEF("collide_with_motion", 5, &shape2d_class_collide_with_motion),
	JS_CFUNC_DEF("collide_and_get_contacts", 3, &shape2d_class_collide_and_get_contacts),
	JS_CFUNC_DEF("collide_with_motion_and_get_contacts", 5, &shape2d_class_collide_with_motion_and_get_contacts),
	JS_CFUNC_DEF("draw", 2, &shape2d_class_draw),
	JS_CFUNC_DEF("get_rect", 0, &shape2d_class_get_rect),
};

void define_shape2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_solver_bias"),
        JS_NewCFunction(ctx, shape2d_class_get_custom_solver_bias, "get_custom_solver_bias", 0),
        JS_NewCFunction(ctx, shape2d_class_set_custom_solver_bias, "set_custom_solver_bias", 1),
        JS_PROP_GETSET
    );
}

static int js_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Shape2D::__class_id);
	classes["Shape2D"] = Shape2D::__class_id;
	class_id_list.insert(Shape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Shape2D::__class_id, &shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Shape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Shape2D::__class_id, proto);

	define_shape2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shape2d_class_proto_funcs, _countof(shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shape2d_class_constructor, "Shape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Shape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Shape2D");
	return m;
}

JSModuleDef *js_init_shape2d_module(JSContext *ctx) {
	return _js_init_shape2d_module(ctx, "godot/classes/shape2d");
}

void register_shape2d() {
	Shape2D::__init_js_class_id();
	js_init_shape2d_module(ctx);
}