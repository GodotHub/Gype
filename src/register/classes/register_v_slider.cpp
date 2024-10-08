
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/v_slider.hpp>
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void v_slider_class_finalizer(JSRuntime *rt, JSValue val) {
	VSlider *v_slider = static_cast<VSlider *>(JS_GetOpaque(val, VSlider::__class_id));
	if (v_slider)
		VSlider::free(nullptr, v_slider);
}

static JSClassDef v_slider_class_def = {
	"VSlider",
	.finalizer = v_slider_class_finalizer
};

static JSValue v_slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VSlider *v_slider_class;
	JSValue obj = JS_NewObjectClass(ctx, VSlider::__class_id);
	if (JS_IsException(obj))
		return obj;
	v_slider_class = memnew(VSlider);
	if (!v_slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, v_slider_class);
	return obj;
}

static int js_v_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VSlider::__class_id);
	classes["VSlider"] = VSlider::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VSlider::__class_id, &v_slider_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Slider::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VSlider::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, v_slider_class_constructor, "VSlider", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VSlider", ctor);

	return 0;
}

JSModuleDef *_js_init_v_slider_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VSlider");
	return m;
}

JSModuleDef *js_init_v_slider_module(JSContext *ctx) {
	return _js_init_v_slider_module(ctx, "godot/classes/v_slider");
}

void register_v_slider() {
	js_init_v_slider_module(ctx);
}