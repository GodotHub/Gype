
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_data_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef render_data_class_def = {
	"RenderData",
	.finalizer = render_data_class_finalizer
};

static JSValue render_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RenderData::__class_id);
	if (JS_IsException(obj))
		return obj;
	RenderData *render_data_class = memnew(RenderData);
	if (!render_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, render_data_class);	
	return obj;
}
static JSValue render_data_class_get_render_scene_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RenderData::get_render_scene_buffers, ctx, this_val, argc, argv);
};
static JSValue render_data_class_get_render_scene_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RenderData::get_render_scene_data, ctx, this_val, argc, argv);
};
static JSValue render_data_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RenderData::get_environment, ctx, this_val, argc, argv);
};
static JSValue render_data_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RenderData::get_camera_attributes, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry render_data_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_render_scene_buffers", 0, &render_data_class_get_render_scene_buffers),
	JS_CFUNC_DEF("get_render_scene_data", 0, &render_data_class_get_render_scene_data),
	JS_CFUNC_DEF("get_environment", 0, &render_data_class_get_environment),
	JS_CFUNC_DEF("get_camera_attributes", 0, &render_data_class_get_camera_attributes),
};

void define_render_data_property(JSContext *ctx, JSValue obj) {
}

static int js_render_data_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RenderData::__class_id);
	classes["RenderData"] = RenderData::__class_id;
	class_id_list.insert(RenderData::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RenderData::__class_id, &render_data_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RenderData::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderData::__class_id, proto);

	define_render_data_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_data_class_proto_funcs, _countof(render_data_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, render_data_class_constructor, "RenderData", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RenderData", ctor);

	return 0;
}

JSModuleDef *_js_init_render_data_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderData");
	return m;
}

JSModuleDef *js_init_render_data_module(JSContext *ctx) {
	return _js_init_render_data_module(ctx, "godot/classes/render_data");
}

void register_render_data() {
	RenderData::__init_js_class_id();
	js_init_render_data_module(ctx);
}