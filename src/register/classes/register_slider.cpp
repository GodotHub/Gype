
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void slider_class_finalizer(JSRuntime *rt, JSValue val) {
	Slider *slider = static_cast<Slider *>(JS_GetOpaque(val, Slider::__class_id));
	if (slider)
		memdelete(slider);
}

static JSClassDef slider_class_def = {
	"Slider",
	.finalizer = slider_class_finalizer
};

static JSValue slider_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Slider::__class_id);
	if (JS_IsException(obj))
		return obj;

	Slider *slider_class;
	if (argc == 1) 
		slider_class = static_cast<Slider *>(Variant(*argv).operator Object *());
	else 
		slider_class = memnew(Slider);
	if (!slider_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, slider_class);
	return obj;
}
static JSValue slider_class_set_ticks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Slider::set_ticks, ctx, this_val, argc, argv);
};
static JSValue slider_class_get_ticks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Slider::get_ticks, ctx, this_val, argc, argv);
};
static JSValue slider_class_get_ticks_on_borders(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Slider::get_ticks_on_borders, ctx, this_val, argc, argv);
};
static JSValue slider_class_set_ticks_on_borders(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Slider::set_ticks_on_borders, ctx, this_val, argc, argv);
};
static JSValue slider_class_set_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Slider::set_editable, ctx, this_val, argc, argv);
};
static JSValue slider_class_is_editable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Slider::is_editable, ctx, this_val, argc, argv);
};
static JSValue slider_class_set_scrollable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Slider::set_scrollable, ctx, this_val, argc, argv);
};
static JSValue slider_class_is_scrollable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Slider::is_scrollable, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry slider_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ticks", 1, &slider_class_set_ticks),
	JS_CFUNC_DEF("get_ticks", 0, &slider_class_get_ticks),
	JS_CFUNC_DEF("get_ticks_on_borders", 0, &slider_class_get_ticks_on_borders),
	JS_CFUNC_DEF("set_ticks_on_borders", 1, &slider_class_set_ticks_on_borders),
	JS_CFUNC_DEF("set_editable", 1, &slider_class_set_editable),
	JS_CFUNC_DEF("is_editable", 0, &slider_class_is_editable),
	JS_CFUNC_DEF("set_scrollable", 1, &slider_class_set_scrollable),
	JS_CFUNC_DEF("is_scrollable", 0, &slider_class_is_scrollable),
};
static JSValue slider_class_get_drag_started_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Slider *opaque = reinterpret_cast<Slider *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "drag_started_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "drag_started").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "drag_started_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue slider_class_get_drag_ended_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Slider *opaque = reinterpret_cast<Slider *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "drag_ended_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "drag_ended").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "drag_ended_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_slider_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "editable"),
        JS_NewCFunction(ctx, slider_class_is_editable, "is_editable", 0),
        JS_NewCFunction(ctx, slider_class_set_editable, "set_editable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scrollable"),
        JS_NewCFunction(ctx, slider_class_is_scrollable, "is_scrollable", 0),
        JS_NewCFunction(ctx, slider_class_set_scrollable, "set_scrollable", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tick_count"),
        JS_NewCFunction(ctx, slider_class_get_ticks, "get_ticks", 0),
        JS_NewCFunction(ctx, slider_class_set_ticks, "set_ticks", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ticks_on_borders"),
        JS_NewCFunction(ctx, slider_class_get_ticks_on_borders, "get_ticks_on_borders", 0),
        JS_NewCFunction(ctx, slider_class_set_ticks_on_borders, "set_ticks_on_borders", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "drag_started"),
		JS_NewCFunction(ctx, slider_class_get_drag_started_signal, "get_drag_started_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "drag_ended"),
		JS_NewCFunction(ctx, slider_class_get_drag_ended_signal, "get_drag_ended_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_slider_enum(JSContext *ctx, JSValue proto) {
}

static int js_slider_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Slider"] = Slider::__class_id;
	class_id_list.insert(Slider::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Slider::__class_id, &slider_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Slider::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Slider::__class_id, proto);

	define_slider_property(ctx, proto);
	define_slider_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, slider_class_proto_funcs, _countof(slider_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, slider_class_constructor, "Slider", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "Slider", ctor);
	constructors[Slider::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_slider_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/range';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_slider_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Slider");
	return m;
}

JSModuleDef *js_init_slider_module(JSContext *ctx) {
	return _js_init_slider_module(ctx, "@godot/classes/slider");
}

void register_slider() {
	Slider::__init_js_class_id();
	js_init_slider_module(ctx);
}