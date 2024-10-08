
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/h_slider.hpp>
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void h_slider_class_finalizer(JSRuntime *rt, JSValue val) {
	HSlider *h_slider = static_cast<HSlider *>(JS_GetOpaque(val, HSlider::__class_id));
	if (h_slider)
		HSlider::free(nullptr, h_slider);
}

static JSClassDef h_slider_class_def = {
	"HSlider",
	.finalizer = h_slider_class_finalizer
};

static JSValue h_slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HSlider *h_slider_class;
	JSValue obj = JS_NewObjectClass(ctx, HSlider::__class_id);
	if (JS_IsException(obj))
		return obj;
	h_slider_class = memnew(HSlider);
	if (!h_slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, h_slider_class);
	return obj;
}

static int js_h_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HSlider::__class_id);
	classes["HSlider"] = HSlider::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HSlider::__class_id, &h_slider_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Slider::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HSlider::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, h_slider_class_constructor, "HSlider", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HSlider", ctor);

	return 0;
}

JSModuleDef *_js_init_h_slider_module(JSContext *ctx, const char *module_name) {
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
	js_init_h_slider_module(ctx);
}