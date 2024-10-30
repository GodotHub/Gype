
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/segment_shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void segment_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef segment_shape2d_class_def = {
	"SegmentShape2D",
	.finalizer = segment_shape2d_class_finalizer
};

static JSValue segment_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SegmentShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	SegmentShape2D *segment_shape2d_class;
	if (argc == 1) {
		Variant vobj = *argv;
		segment_shape2d_class = static_cast<SegmentShape2D *>(static_cast<Object *>(vobj));
	} else {
		segment_shape2d_class = memnew(SegmentShape2D);
	}
	if (!segment_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, segment_shape2d_class);	
	return obj;
}
static JSValue segment_shape2d_class_set_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SegmentShape2D::set_a, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue segment_shape2d_class_get_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SegmentShape2D::get_a, ctx, this_val, argc, argv);
};
static JSValue segment_shape2d_class_set_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&SegmentShape2D::set_b, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue segment_shape2d_class_get_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SegmentShape2D::get_b, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry segment_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_a", 1, &segment_shape2d_class_set_a),
	JS_CFUNC_DEF("get_a", 0, &segment_shape2d_class_get_a),
	JS_CFUNC_DEF("set_b", 1, &segment_shape2d_class_set_b),
	JS_CFUNC_DEF("get_b", 0, &segment_shape2d_class_get_b),
};

void define_segment_shape2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "a"),
        JS_NewCFunction(ctx, segment_shape2d_class_get_a, "get_a", 0),
        JS_NewCFunction(ctx, segment_shape2d_class_set_a, "set_a", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "b"),
        JS_NewCFunction(ctx, segment_shape2d_class_get_b, "get_b", 0),
        JS_NewCFunction(ctx, segment_shape2d_class_set_b, "set_b", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_segment_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SegmentShape2D::__class_id);
	classes["SegmentShape2D"] = SegmentShape2D::__class_id;
	class_id_list.insert(SegmentShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SegmentShape2D::__class_id, &segment_shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SegmentShape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SegmentShape2D::__class_id, proto);

	define_segment_shape2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, segment_shape2d_class_proto_funcs, _countof(segment_shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, segment_shape2d_class_constructor, "SegmentShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SegmentShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_segment_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_segment_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SegmentShape2D");
	return m;
}

JSModuleDef *js_init_segment_shape2d_module(JSContext *ctx) {
	return _js_init_segment_shape2d_module(ctx, "@godot/classes/segment_shape2d");
}

void register_segment_shape2d() {
	SegmentShape2D::__init_js_class_id();
	js_init_segment_shape2d_module(ctx);
}