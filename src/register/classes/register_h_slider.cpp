
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/h_slider.hpp>
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void h_slider_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef h_slider_class_def = {
	"HSlider",
	.finalizer = h_slider_class_finalizer
};

static JSValue h_slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, HSlider::__class_id);
	if (JS_IsException(obj))
		return obj;
	HSlider *h_slider_class = memnew(HSlider);
	if (!h_slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, h_slider_class);
	return obj;
}

void define_h_slider_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_h_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HSlider::__class_id);
	classes["HSlider"] = HSlider::__class_id;
	class_id_list.insert(HSlider::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HSlider::__class_id, &h_slider_class_def);

	JSValue proto = JS_NewObjectClass(ctx, HSlider::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Slider::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HSlider::__class_id, proto);

	define_h_slider_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, h_slider_class_constructor, "HSlider", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HSlider", ctor);

	return 0;
}

JSModuleDef *_js_init_h_slider_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/slider';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_h_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HSlider");
	return m;
}

JSModuleDef *js_init_h_slider_module(JSContext *ctx) {
	return _js_init_h_slider_module(ctx, "godot/classes/h_slider");
}

void register_h_slider() {
	HSlider::__init_js_class_id();
	js_init_h_slider_module(ctx);
}