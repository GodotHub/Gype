
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/aspect_ratio_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void aspect_ratio_container_class_finalizer(JSRuntime *rt, JSValue val) {
	AspectRatioContainer *aspect_ratio_container = static_cast<AspectRatioContainer *>(JS_GetOpaque(val, AspectRatioContainer::__class_id));
	if (aspect_ratio_container)
		memdelete(aspect_ratio_container);
}

static JSClassDef aspect_ratio_container_class_def = {
	"AspectRatioContainer",
	.finalizer = aspect_ratio_container_class_finalizer
};

static JSValue aspect_ratio_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AspectRatioContainer::__class_id);
	if (JS_IsException(obj))
		return obj;

	AspectRatioContainer *aspect_ratio_container_class;
	if (argc == 1) 
		aspect_ratio_container_class = static_cast<AspectRatioContainer *>(Variant(*argv).operator Object *());
	else 
		aspect_ratio_container_class = memnew(AspectRatioContainer);
	if (!aspect_ratio_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, aspect_ratio_container_class);
	return obj;
}
static JSValue aspect_ratio_container_class_set_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AspectRatioContainer::set_ratio, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_get_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AspectRatioContainer::get_ratio, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_set_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AspectRatioContainer::set_stretch_mode, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_get_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AspectRatioContainer::get_stretch_mode, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_set_alignment_horizontal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AspectRatioContainer::set_alignment_horizontal, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_get_alignment_horizontal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AspectRatioContainer::get_alignment_horizontal, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_set_alignment_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AspectRatioContainer::set_alignment_vertical, ctx, this_val, argc, argv);
};
static JSValue aspect_ratio_container_class_get_alignment_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AspectRatioContainer::get_alignment_vertical, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry aspect_ratio_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ratio", 1, &aspect_ratio_container_class_set_ratio),
	JS_CFUNC_DEF("get_ratio", 0, &aspect_ratio_container_class_get_ratio),
	JS_CFUNC_DEF("set_stretch_mode", 1, &aspect_ratio_container_class_set_stretch_mode),
	JS_CFUNC_DEF("get_stretch_mode", 0, &aspect_ratio_container_class_get_stretch_mode),
	JS_CFUNC_DEF("set_alignment_horizontal", 1, &aspect_ratio_container_class_set_alignment_horizontal),
	JS_CFUNC_DEF("get_alignment_horizontal", 0, &aspect_ratio_container_class_get_alignment_horizontal),
	JS_CFUNC_DEF("set_alignment_vertical", 1, &aspect_ratio_container_class_set_alignment_vertical),
	JS_CFUNC_DEF("get_alignment_vertical", 0, &aspect_ratio_container_class_get_alignment_vertical),
};

static void define_aspect_ratio_container_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ratio"),
        JS_NewCFunction(ctx, aspect_ratio_container_class_get_ratio, "get_ratio", 0),
        JS_NewCFunction(ctx, aspect_ratio_container_class_set_ratio, "set_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stretch_mode"),
        JS_NewCFunction(ctx, aspect_ratio_container_class_get_stretch_mode, "get_stretch_mode", 0),
        JS_NewCFunction(ctx, aspect_ratio_container_class_set_stretch_mode, "set_stretch_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alignment_horizontal"),
        JS_NewCFunction(ctx, aspect_ratio_container_class_get_alignment_horizontal, "get_alignment_horizontal", 0),
        JS_NewCFunction(ctx, aspect_ratio_container_class_set_alignment_horizontal, "set_alignment_horizontal", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alignment_vertical"),
        JS_NewCFunction(ctx, aspect_ratio_container_class_get_alignment_vertical, "get_alignment_vertical", 0),
        JS_NewCFunction(ctx, aspect_ratio_container_class_set_alignment_vertical, "set_alignment_vertical", 1),
        JS_PROP_GETSET
    );
	
}

static void define_aspect_ratio_container_enum(JSContext *ctx, JSValue proto) {
	JSValue StretchMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_WIDTH_CONTROLS_HEIGHT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_HEIGHT_CONTROLS_WIDTH", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_FIT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_COVER", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "StretchMode", StretchMode_obj);
	JSValue AlignmentMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_BEGIN", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_CENTER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AlignmentMode_obj, "ALIGNMENT_END", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "AlignmentMode", AlignmentMode_obj);
}

static int js_aspect_ratio_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AspectRatioContainer"] = AspectRatioContainer::__class_id;
	class_id_list.insert(AspectRatioContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AspectRatioContainer::__class_id, &aspect_ratio_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AspectRatioContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AspectRatioContainer::__class_id, proto);

	define_aspect_ratio_container_property(ctx, proto);
	define_aspect_ratio_container_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, aspect_ratio_container_class_proto_funcs, _countof(aspect_ratio_container_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, aspect_ratio_container_class_constructor, "AspectRatioContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AspectRatioContainer", ctor);
	constructors[AspectRatioContainer::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_aspect_ratio_container_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_aspect_ratio_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AspectRatioContainer");
	return m;
}

JSModuleDef *js_init_aspect_ratio_container_module(JSContext *ctx) {
	return _js_init_aspect_ratio_container_module(ctx, "@godot/classes/aspect_ratio_container");
}

void register_aspect_ratio_container() {
	AspectRatioContainer::__init_js_class_id();
	js_init_aspect_ratio_container_module(ctx);
}