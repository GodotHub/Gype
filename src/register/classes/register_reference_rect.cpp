
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/reference_rect.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void reference_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	ReferenceRect *reference_rect = static_cast<ReferenceRect *>(JS_GetOpaque(val, ReferenceRect::__class_id));
	if (reference_rect)
		ReferenceRect::free(nullptr, reference_rect);
}

static JSClassDef reference_rect_class_def = {
	"ReferenceRect",
	.finalizer = reference_rect_class_finalizer
};

static JSValue reference_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ReferenceRect *reference_rect_class;
	JSValue obj = JS_NewObjectClass(ctx, ReferenceRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	reference_rect_class = memnew(ReferenceRect);
	if (!reference_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, reference_rect_class);
	return obj;
}
static JSValue reference_rect_class_get_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ReferenceRect::get_border_color, ReferenceRect::__class_id, ctx, this_val, argv);
};
static JSValue reference_rect_class_set_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ReferenceRect::set_border_color, ReferenceRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue reference_rect_class_get_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ReferenceRect::get_border_width, ReferenceRect::__class_id, ctx, this_val, argv);
};
static JSValue reference_rect_class_set_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ReferenceRect::set_border_width, ReferenceRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue reference_rect_class_get_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ReferenceRect::get_editor_only, ReferenceRect::__class_id, ctx, this_val, argv);
};
static JSValue reference_rect_class_set_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ReferenceRect::set_editor_only, ReferenceRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry reference_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_border_color", 0, &reference_rect_class_get_border_color),
	JS_CFUNC_DEF("set_border_color", 1, &reference_rect_class_set_border_color),
	JS_CFUNC_DEF("get_border_width", 0, &reference_rect_class_get_border_width),
	JS_CFUNC_DEF("set_border_width", 1, &reference_rect_class_set_border_width),
	JS_CFUNC_DEF("get_editor_only", 0, &reference_rect_class_get_editor_only),
	JS_CFUNC_DEF("set_editor_only", 1, &reference_rect_class_set_editor_only),
};

static int js_reference_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ReferenceRect::__class_id);
	classes["ReferenceRect"] = ReferenceRect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ReferenceRect::__class_id, &reference_rect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ReferenceRect::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, reference_rect_class_proto_funcs, _countof(reference_rect_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, reference_rect_class_constructor, "ReferenceRect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ReferenceRect", ctor);

	return 0;
}

JSModuleDef *_js_init_reference_rect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_reference_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ReferenceRect");
	return m;
}

JSModuleDef *js_init_reference_rect_module(JSContext *ctx) {
	return _js_init_reference_rect_module(ctx, "godot/classes/reference_rect");
}

void register_reference_rect() {
	js_init_reference_rect_module(ctx);
}