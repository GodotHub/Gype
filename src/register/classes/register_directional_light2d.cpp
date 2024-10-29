
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/directional_light2d.hpp>
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void directional_light2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef directional_light2d_class_def = {
	"DirectionalLight2D",
	.finalizer = directional_light2d_class_finalizer
};

static JSValue directional_light2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, DirectionalLight2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	DirectionalLight2D *directional_light2d_class = memnew(DirectionalLight2D);
	if (!directional_light2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, directional_light2d_class);	
	return obj;
}
static JSValue directional_light2d_class_set_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&DirectionalLight2D::set_max_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light2d_class_get_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirectionalLight2D::get_max_distance, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry directional_light2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_max_distance", 1, &directional_light2d_class_set_max_distance),
	JS_CFUNC_DEF("get_max_distance", 0, &directional_light2d_class_get_max_distance),
};

void define_directional_light2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_distance"),
        JS_NewCFunction(ctx, directional_light2d_class_get_max_distance, "get_max_distance", 0),
        JS_NewCFunction(ctx, directional_light2d_class_set_max_distance, "set_max_distance", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_directional_light2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&DirectionalLight2D::__class_id);
	classes["DirectionalLight2D"] = DirectionalLight2D::__class_id;
	class_id_list.insert(DirectionalLight2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), DirectionalLight2D::__class_id, &directional_light2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, DirectionalLight2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Light2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DirectionalLight2D::__class_id, proto);

	define_directional_light2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, directional_light2d_class_proto_funcs, _countof(directional_light2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, directional_light2d_class_constructor, "DirectionalLight2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "DirectionalLight2D", ctor);

	return 0;
}

JSModuleDef *_js_init_directional_light2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/light2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_directional_light2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DirectionalLight2D");
	return m;
}

JSModuleDef *js_init_directional_light2d_module(JSContext *ctx) {
	return _js_init_directional_light2d_module(ctx, "@godot/classes/directional_light2d");
}

void register_directional_light2d() {
	DirectionalLight2D::__init_js_class_id();
	js_init_directional_light2d_module(ctx);
}