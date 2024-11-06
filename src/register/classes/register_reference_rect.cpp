
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/reference_rect.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void reference_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	ReferenceRect *reference_rect = static_cast<ReferenceRect *>(JS_GetOpaque(val, ReferenceRect::__class_id));
	if (reference_rect)
		memdelete(reference_rect);
}

static JSClassDef reference_rect_class_def = {
	"ReferenceRect",
	.finalizer = reference_rect_class_finalizer
};

static JSValue reference_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ReferenceRect::__class_id);
	if (JS_IsException(obj))
		return obj;

	ReferenceRect *reference_rect_class;
	if (argc == 1) 
		reference_rect_class = static_cast<ReferenceRect *>(Variant(*argv).operator Object *());
	else 
		reference_rect_class = memnew(ReferenceRect);
	if (!reference_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, reference_rect_class);
	return obj;
}
static JSValue reference_rect_class_get_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReferenceRect::get_border_color, ctx, this_val, argc, argv);
};
static JSValue reference_rect_class_set_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReferenceRect::set_border_color, ctx, this_val, argc, argv);
};
static JSValue reference_rect_class_get_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReferenceRect::get_border_width, ctx, this_val, argc, argv);
};
static JSValue reference_rect_class_set_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReferenceRect::set_border_width, ctx, this_val, argc, argv);
};
static JSValue reference_rect_class_get_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ReferenceRect::get_editor_only, ctx, this_val, argc, argv);
};
static JSValue reference_rect_class_set_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ReferenceRect::set_editor_only, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry reference_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_border_color", 0, &reference_rect_class_get_border_color),
	JS_CFUNC_DEF("set_border_color", 1, &reference_rect_class_set_border_color),
	JS_CFUNC_DEF("get_border_width", 0, &reference_rect_class_get_border_width),
	JS_CFUNC_DEF("set_border_width", 1, &reference_rect_class_set_border_width),
	JS_CFUNC_DEF("get_editor_only", 0, &reference_rect_class_get_editor_only),
	JS_CFUNC_DEF("set_editor_only", 1, &reference_rect_class_set_editor_only),
};

static void define_reference_rect_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_color"),
        JS_NewCFunction(ctx, reference_rect_class_get_border_color, "get_border_color", 0),
        JS_NewCFunction(ctx, reference_rect_class_set_border_color, "set_border_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_width"),
        JS_NewCFunction(ctx, reference_rect_class_get_border_width, "get_border_width", 0),
        JS_NewCFunction(ctx, reference_rect_class_set_border_width, "set_border_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "editor_only"),
        JS_NewCFunction(ctx, reference_rect_class_get_editor_only, "get_editor_only", 0),
        JS_NewCFunction(ctx, reference_rect_class_set_editor_only, "set_editor_only", 1),
        JS_PROP_GETSET
    );
	
}

static void define_reference_rect_enum(JSContext *ctx, JSValue proto) {
}

static int js_reference_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ReferenceRect"] = ReferenceRect::__class_id;
	class_id_list.insert(ReferenceRect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ReferenceRect::__class_id, &reference_rect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ReferenceRect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ReferenceRect::__class_id, proto);

	define_reference_rect_property(ctx, proto);
	define_reference_rect_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, reference_rect_class_proto_funcs, _countof(reference_rect_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, reference_rect_class_constructor, "ReferenceRect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ReferenceRect", ctor);
	constructors[ReferenceRect::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_reference_rect_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_reference_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ReferenceRect");
	return m;
}

JSModuleDef *js_init_reference_rect_module(JSContext *ctx) {
	return _js_init_reference_rect_module(ctx, "@godot/classes/reference_rect");
}

void register_reference_rect() {
	ReferenceRect::__init_js_class_id();
	js_init_reference_rect_module(ctx);
}