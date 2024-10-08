
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/canvas_group.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_group_class_finalizer(JSRuntime *rt, JSValue val) {
	CanvasGroup *canvas_group = static_cast<CanvasGroup *>(JS_GetOpaque(val, CanvasGroup::__class_id));
	if (canvas_group)
		CanvasGroup::free(nullptr, canvas_group);
}

static JSClassDef canvas_group_class_def = {
	"CanvasGroup",
	.finalizer = canvas_group_class_finalizer
};

static JSValue canvas_group_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CanvasGroup *canvas_group_class;
	JSValue obj = JS_NewObjectClass(ctx, CanvasGroup::__class_id);
	if (JS_IsException(obj))
		return obj;
	canvas_group_class = memnew(CanvasGroup);
	if (!canvas_group_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, canvas_group_class);
	return obj;
}
static JSValue canvas_group_class_set_fit_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasGroup::set_fit_margin, CanvasGroup::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_group_class_get_fit_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasGroup::get_fit_margin, CanvasGroup::__class_id, ctx, this_val, argv);
};
static JSValue canvas_group_class_set_clear_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasGroup::set_clear_margin, CanvasGroup::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_group_class_get_clear_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasGroup::get_clear_margin, CanvasGroup::__class_id, ctx, this_val, argv);
};
static JSValue canvas_group_class_set_use_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CanvasGroup::set_use_mipmaps, CanvasGroup::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_group_class_is_using_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasGroup::is_using_mipmaps, CanvasGroup::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry canvas_group_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_fit_margin", 1, &canvas_group_class_set_fit_margin),
	JS_CFUNC_DEF("get_fit_margin", 0, &canvas_group_class_get_fit_margin),
	JS_CFUNC_DEF("set_clear_margin", 1, &canvas_group_class_set_clear_margin),
	JS_CFUNC_DEF("get_clear_margin", 0, &canvas_group_class_get_clear_margin),
	JS_CFUNC_DEF("set_use_mipmaps", 1, &canvas_group_class_set_use_mipmaps),
	JS_CFUNC_DEF("is_using_mipmaps", 0, &canvas_group_class_is_using_mipmaps),
};

static int js_canvas_group_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CanvasGroup::__class_id);
	classes["CanvasGroup"] = CanvasGroup::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CanvasGroup::__class_id, &canvas_group_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasGroup::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_group_class_proto_funcs, _countof(canvas_group_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, canvas_group_class_constructor, "CanvasGroup", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CanvasGroup", ctor);

	return 0;
}

JSModuleDef *_js_init_canvas_group_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_canvas_group_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CanvasGroup");
	return m;
}

JSModuleDef *js_init_canvas_group_module(JSContext *ctx) {
	return _js_init_canvas_group_module(ctx, "godot/classes/canvas_group");
}

void register_canvas_group() {
	js_init_canvas_group_module(ctx);
}