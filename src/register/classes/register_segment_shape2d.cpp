
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/segment_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void segment_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	SegmentShape2D *segment_shape2d = static_cast<SegmentShape2D *>(JS_GetOpaque(val, SegmentShape2D::__class_id));
	if (segment_shape2d)
		SegmentShape2D::free(nullptr, segment_shape2d);
}

static JSClassDef segment_shape2d_class_def = {
	"SegmentShape2D",
	.finalizer = segment_shape2d_class_finalizer
};

static JSValue segment_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SegmentShape2D *segment_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, SegmentShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	segment_shape2d_class = memnew(SegmentShape2D);
	if (!segment_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, segment_shape2d_class);
	return obj;
}
static JSValue segment_shape2d_class_set_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SegmentShape2D::set_a, SegmentShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue segment_shape2d_class_get_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SegmentShape2D::get_a, SegmentShape2D::__class_id, ctx, this_val, argv);
};
static JSValue segment_shape2d_class_set_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SegmentShape2D::set_b, SegmentShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue segment_shape2d_class_get_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SegmentShape2D::get_b, SegmentShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry segment_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_a", 1, &segment_shape2d_class_set_a),
	JS_CFUNC_DEF("get_a", 0, &segment_shape2d_class_get_a),
	JS_CFUNC_DEF("set_b", 1, &segment_shape2d_class_set_b),
	JS_CFUNC_DEF("get_b", 0, &segment_shape2d_class_get_b),
};

static int js_segment_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SegmentShape2D::__class_id);
	classes["SegmentShape2D"] = SegmentShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SegmentShape2D::__class_id, &segment_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SegmentShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, segment_shape2d_class_proto_funcs, _countof(segment_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, segment_shape2d_class_constructor, "SegmentShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SegmentShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_segment_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_segment_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SegmentShape2D");
	return m;
}

JSModuleDef *js_init_segment_shape2d_module(JSContext *ctx) {
	return _js_init_segment_shape2d_module(ctx, "godot/classes/segment_shape2d");
}

void register_segment_shape2d() {
	js_init_segment_shape2d_module(ctx);
}