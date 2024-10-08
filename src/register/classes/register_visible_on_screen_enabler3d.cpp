
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visible_on_screen_enabler3d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visible_on_screen_enabler3d_class_finalizer(JSRuntime *rt, JSValue val) {
	VisibleOnScreenEnabler3D *visible_on_screen_enabler3d = static_cast<VisibleOnScreenEnabler3D *>(JS_GetOpaque(val, VisibleOnScreenEnabler3D::__class_id));
	if (visible_on_screen_enabler3d)
		VisibleOnScreenEnabler3D::free(nullptr, visible_on_screen_enabler3d);
}

static JSClassDef visible_on_screen_enabler3d_class_def = {
	"VisibleOnScreenEnabler3D",
	.finalizer = visible_on_screen_enabler3d_class_finalizer
};

static JSValue visible_on_screen_enabler3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisibleOnScreenEnabler3D *visible_on_screen_enabler3d_class;
	JSValue obj = JS_NewObjectClass(ctx, VisibleOnScreenEnabler3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	visible_on_screen_enabler3d_class = memnew(VisibleOnScreenEnabler3D);
	if (!visible_on_screen_enabler3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visible_on_screen_enabler3d_class);
	return obj;
}
static JSValue visible_on_screen_enabler3d_class_set_enable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisibleOnScreenEnabler3D::set_enable_mode, VisibleOnScreenEnabler3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visible_on_screen_enabler3d_class_get_enable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&VisibleOnScreenEnabler3D::get_enable_mode, VisibleOnScreenEnabler3D::__class_id, ctx, this_val, argv);
};
static JSValue visible_on_screen_enabler3d_class_set_enable_node_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisibleOnScreenEnabler3D::set_enable_node_path, VisibleOnScreenEnabler3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visible_on_screen_enabler3d_class_get_enable_node_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&VisibleOnScreenEnabler3D::get_enable_node_path, VisibleOnScreenEnabler3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visible_on_screen_enabler3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enable_mode", 1, &visible_on_screen_enabler3d_class_set_enable_mode),
	JS_CFUNC_DEF("get_enable_mode", 0, &visible_on_screen_enabler3d_class_get_enable_mode),
	JS_CFUNC_DEF("set_enable_node_path", 1, &visible_on_screen_enabler3d_class_set_enable_node_path),
	JS_CFUNC_DEF("get_enable_node_path", 0, &visible_on_screen_enabler3d_class_get_enable_node_path),
};

static int js_visible_on_screen_enabler3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisibleOnScreenEnabler3D::__class_id);
	classes["VisibleOnScreenEnabler3D"] = VisibleOnScreenEnabler3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisibleOnScreenEnabler3D::__class_id, &visible_on_screen_enabler3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisibleOnScreenNotifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisibleOnScreenEnabler3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visible_on_screen_enabler3d_class_proto_funcs, _countof(visible_on_screen_enabler3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visible_on_screen_enabler3d_class_constructor, "VisibleOnScreenEnabler3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisibleOnScreenEnabler3D", ctor);

	return 0;
}

JSModuleDef *_js_init_visible_on_screen_enabler3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visible_on_screen_enabler3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisibleOnScreenEnabler3D");
	return m;
}

JSModuleDef *js_init_visible_on_screen_enabler3d_module(JSContext *ctx) {
	return _js_init_visible_on_screen_enabler3d_module(ctx, "godot/classes/visible_on_screen_enabler3d");
}

void register_visible_on_screen_enabler3d() {
	js_init_visible_on_screen_enabler3d_module(ctx);
}