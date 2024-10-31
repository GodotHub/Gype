
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visible_on_screen_notifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visible_on_screen_notifier3d_class_def = {
	"VisibleOnScreenNotifier3D",
	.finalizer = visible_on_screen_notifier3d_class_finalizer
};

static JSValue visible_on_screen_notifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisibleOnScreenNotifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisibleOnScreenNotifier3D *visible_on_screen_notifier3d_class;
	if (argc == 1) 
		visible_on_screen_notifier3d_class = static_cast<VisibleOnScreenNotifier3D *>(static_cast<Object *>(Variant(*argv)));
	else 
		visible_on_screen_notifier3d_class = memnew(VisibleOnScreenNotifier3D);
	if (!visible_on_screen_notifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visible_on_screen_notifier3d_class);	
	return obj;
}
static JSValue visible_on_screen_notifier3d_class_set_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisibleOnScreenNotifier3D::set_aabb, ctx, this_val, argc, argv);
};
static JSValue visible_on_screen_notifier3d_class_is_on_screen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisibleOnScreenNotifier3D::is_on_screen, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visible_on_screen_notifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_aabb", 1, &visible_on_screen_notifier3d_class_set_aabb),
	JS_CFUNC_DEF("is_on_screen", 0, &visible_on_screen_notifier3d_class_is_on_screen),
};
static JSValue visible_on_screen_notifier3d_class_get_screen_entered_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	VisibleOnScreenNotifier3D *opaque = reinterpret_cast<VisibleOnScreenNotifier3D *>(JS_GetOpaque(this_val, VisibleOnScreenNotifier3D::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "screen_entered_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "screen_entered").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "screen_entered_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue visible_on_screen_notifier3d_class_get_screen_exited_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	VisibleOnScreenNotifier3D *opaque = reinterpret_cast<VisibleOnScreenNotifier3D *>(JS_GetOpaque(this_val, VisibleOnScreenNotifier3D::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "screen_exited_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "screen_exited").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "screen_exited_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_visible_on_screen_notifier3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "aabb"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, visible_on_screen_notifier3d_class_set_aabb, "set_aabb", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "screen_entered"),
		JS_NewCFunction(ctx, visible_on_screen_notifier3d_class_get_screen_entered_signal, "get_screen_entered_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "screen_exited"),
		JS_NewCFunction(ctx, visible_on_screen_notifier3d_class_get_screen_exited_signal, "get_screen_exited_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_visible_on_screen_notifier3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_visible_on_screen_notifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisibleOnScreenNotifier3D::__class_id);
	classes["VisibleOnScreenNotifier3D"] = VisibleOnScreenNotifier3D::__class_id;
	class_id_list.insert(VisibleOnScreenNotifier3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisibleOnScreenNotifier3D::__class_id, &visible_on_screen_notifier3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisibleOnScreenNotifier3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisibleOnScreenNotifier3D::__class_id, proto);

	define_visible_on_screen_notifier3d_property(ctx, proto);
	define_visible_on_screen_notifier3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visible_on_screen_notifier3d_class_proto_funcs, _countof(visible_on_screen_notifier3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visible_on_screen_notifier3d_class_constructor, "VisibleOnScreenNotifier3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisibleOnScreenNotifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_visible_on_screen_notifier3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visible_on_screen_notifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisibleOnScreenNotifier3D");
	return m;
}

JSModuleDef *js_init_visible_on_screen_notifier3d_module(JSContext *ctx) {
	return _js_init_visible_on_screen_notifier3d_module(ctx, "@godot/classes/visible_on_screen_notifier3d");
}

void register_visible_on_screen_notifier3d() {
	VisibleOnScreenNotifier3D::__init_js_class_id();
	js_init_visible_on_screen_notifier3d_module(ctx);
}