
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/bone2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void bone2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Bone2D *bone2d = static_cast<Bone2D *>(JS_GetOpaque(val, Bone2D::__class_id));
	if (bone2d)
		memdelete(bone2d);
}

static JSClassDef bone2d_class_def = {
	"Bone2D",
	.finalizer = bone2d_class_finalizer
};

static JSValue bone2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Bone2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Bone2D *bone2d_class;
	if (argc == 1) 
		bone2d_class = static_cast<Bone2D *>(Variant(*argv).operator Object *());
	else 
		bone2d_class = memnew(Bone2D);
	if (!bone2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, bone2d_class);
	return obj;
}
static JSValue bone2d_class_set_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Bone2D::set_rest, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_get_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Bone2D::get_rest, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_apply_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Bone2D::apply_rest, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_get_skeleton_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Bone2D::get_skeleton_rest, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_get_index_in_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Bone2D::get_index_in_skeleton, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_set_autocalculate_length_and_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Bone2D::set_autocalculate_length_and_angle, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_get_autocalculate_length_and_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Bone2D::get_autocalculate_length_and_angle, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Bone2D::set_length, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Bone2D::get_length, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_set_bone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Bone2D::set_bone_angle, ctx, this_val, argc, argv);
};
static JSValue bone2d_class_get_bone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Bone2D::get_bone_angle, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry bone2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_rest", 1, &bone2d_class_set_rest),
	JS_CFUNC_DEF("get_rest", 0, &bone2d_class_get_rest),
	JS_CFUNC_DEF("apply_rest", 0, &bone2d_class_apply_rest),
	JS_CFUNC_DEF("get_skeleton_rest", 0, &bone2d_class_get_skeleton_rest),
	JS_CFUNC_DEF("get_index_in_skeleton", 0, &bone2d_class_get_index_in_skeleton),
	JS_CFUNC_DEF("set_autocalculate_length_and_angle", 1, &bone2d_class_set_autocalculate_length_and_angle),
	JS_CFUNC_DEF("get_autocalculate_length_and_angle", 0, &bone2d_class_get_autocalculate_length_and_angle),
	JS_CFUNC_DEF("set_length", 1, &bone2d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &bone2d_class_get_length),
	JS_CFUNC_DEF("set_bone_angle", 1, &bone2d_class_set_bone_angle),
	JS_CFUNC_DEF("get_bone_angle", 0, &bone2d_class_get_bone_angle),
};

static void define_bone2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "rest"),
        JS_NewCFunction(ctx, bone2d_class_get_rest, "get_rest", 0),
        JS_NewCFunction(ctx, bone2d_class_set_rest, "set_rest", 1),
        JS_PROP_GETSET
    );
	
}

static void define_bone2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_bone2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Bone2D"] = Bone2D::__class_id;
	class_id_list.insert(Bone2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Bone2D::__class_id, &bone2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Bone2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Bone2D::__class_id, proto);

	define_bone2d_property(ctx, proto);
	define_bone2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, bone2d_class_proto_funcs, _countof(bone2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, bone2d_class_constructor, "Bone2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "Bone2D", ctor);
	constructors[Bone2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_bone2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_bone2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Bone2D");
	return m;
}

JSModuleDef *js_init_bone2d_module(JSContext *ctx) {
	return _js_init_bone2d_module(ctx, "@godot/classes/bone2d");
}

void register_bone2d() {
	Bone2D::__init_js_class_id();
	js_init_bone2d_module(ctx);
}