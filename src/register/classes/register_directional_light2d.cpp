
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/directional_light2d.hpp>
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void directional_light2d_class_finalizer(JSRuntime *rt, JSValue val) {
	DirectionalLight2D *directional_light2d = static_cast<DirectionalLight2D *>(JS_GetOpaque(val, DirectionalLight2D::__class_id));
	if (directional_light2d)
		DirectionalLight2D::free(nullptr, directional_light2d);
}

static JSClassDef directional_light2d_class_def = {
	"DirectionalLight2D",
	.finalizer = directional_light2d_class_finalizer
};

static JSValue directional_light2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	DirectionalLight2D *directional_light2d_class;
	JSValue obj = JS_NewObjectClass(ctx, DirectionalLight2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	directional_light2d_class = memnew(DirectionalLight2D);
	if (!directional_light2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, directional_light2d_class);
	return obj;
}
static JSValue directional_light2d_class_set_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&DirectionalLight2D::set_max_distance, DirectionalLight2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light2d_class_get_max_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DirectionalLight2D::get_max_distance, DirectionalLight2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry directional_light2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_max_distance", 1, &directional_light2d_class_set_max_distance),
	JS_CFUNC_DEF("get_max_distance", 0, &directional_light2d_class_get_max_distance),
};

static int js_directional_light2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&DirectionalLight2D::__class_id);
	classes["DirectionalLight2D"] = DirectionalLight2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), DirectionalLight2D::__class_id, &directional_light2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Light2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DirectionalLight2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, directional_light2d_class_proto_funcs, _countof(directional_light2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, directional_light2d_class_constructor, "DirectionalLight2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "DirectionalLight2D", ctor);

	return 0;
}

JSModuleDef *_js_init_directional_light2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_directional_light2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DirectionalLight2D");
	return m;
}

JSModuleDef *js_init_directional_light2d_module(JSContext *ctx) {
	return _js_init_directional_light2d_module(ctx, "godot/classes/directional_light2d");
}

void register_directional_light2d() {
	js_init_directional_light2d_module(ctx);
}