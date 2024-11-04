
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/classes/v_slider.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void v_slider_class_finalizer(JSRuntime *rt, JSValue val) {
	VSlider *v_slider = static_cast<VSlider *>(JS_GetOpaque(val, VSlider::__class_id));
	if (v_slider)
		memdelete(v_slider);
}

static JSClassDef v_slider_class_def = {
	"VSlider",
	.finalizer = v_slider_class_finalizer
};

static JSValue v_slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VSlider::__class_id);
	if (JS_IsException(obj))
		return obj;

	VSlider *v_slider_class;
	if (argc == 1) 
		v_slider_class = static_cast<VSlider *>(Variant(*argv).operator Object *());
	else 
		v_slider_class = memnew(VSlider);
	if (!v_slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, v_slider_class);
	return obj;
}

static void define_v_slider_property(JSContext *ctx, JSValue proto) {
	
}

static void define_v_slider_enum(JSContext *ctx, JSValue proto) {
}

static int js_v_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VSlider"] = VSlider::__class_id;
	class_id_list.insert(VSlider::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VSlider::__class_id, &v_slider_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VSlider::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Slider::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VSlider::__class_id, proto);

	define_v_slider_property(ctx, proto);
	define_v_slider_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, v_slider_class_constructor, "VSlider", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VSlider", ctor);
	constructors[VSlider::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_v_slider_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/slider';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VSlider");
	return m;
}

JSModuleDef *js_init_v_slider_module(JSContext *ctx) {
	return _js_init_v_slider_module(ctx, "@godot/classes/v_slider");
}

void register_v_slider() {
	VSlider::__init_js_class_id();
	js_init_v_slider_module(ctx);
}