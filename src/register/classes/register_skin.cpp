
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skin_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef skin_class_def = {
	"Skin",
	.finalizer = skin_class_finalizer
};

static JSValue skin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Skin::__class_id);
	if (JS_IsException(obj))
		return obj;

	Skin *skin_class;
	if (argc == 1) 
		skin_class = static_cast<Skin *>(Variant(*argv).operator Object *());
	else 
		skin_class = memnew(Skin);
	if (!skin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skin_class);
	return obj;
}
static JSValue skin_class_set_bind_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::set_bind_count, ctx, this_val, argc, argv);
};
static JSValue skin_class_get_bind_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Skin::get_bind_count, ctx, this_val, argc, argv);
};
static JSValue skin_class_add_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::add_bind, ctx, this_val, argc, argv);
};
static JSValue skin_class_add_named_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::add_named_bind, ctx, this_val, argc, argv);
};
static JSValue skin_class_set_bind_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::set_bind_pose, ctx, this_val, argc, argv);
};
static JSValue skin_class_get_bind_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Skin::get_bind_pose, ctx, this_val, argc, argv);
};
static JSValue skin_class_set_bind_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::set_bind_name, ctx, this_val, argc, argv);
};
static JSValue skin_class_get_bind_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Skin::get_bind_name, ctx, this_val, argc, argv);
};
static JSValue skin_class_set_bind_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::set_bind_bone, ctx, this_val, argc, argv);
};
static JSValue skin_class_get_bind_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Skin::get_bind_bone, ctx, this_val, argc, argv);
};
static JSValue skin_class_clear_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Skin::clear_binds, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skin_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bind_count", 1, &skin_class_set_bind_count),
	JS_CFUNC_DEF("get_bind_count", 0, &skin_class_get_bind_count),
	JS_CFUNC_DEF("add_bind", 2, &skin_class_add_bind),
	JS_CFUNC_DEF("add_named_bind", 2, &skin_class_add_named_bind),
	JS_CFUNC_DEF("set_bind_pose", 2, &skin_class_set_bind_pose),
	JS_CFUNC_DEF("get_bind_pose", 1, &skin_class_get_bind_pose),
	JS_CFUNC_DEF("set_bind_name", 2, &skin_class_set_bind_name),
	JS_CFUNC_DEF("get_bind_name", 1, &skin_class_get_bind_name),
	JS_CFUNC_DEF("set_bind_bone", 2, &skin_class_set_bind_bone),
	JS_CFUNC_DEF("get_bind_bone", 1, &skin_class_get_bind_bone),
	JS_CFUNC_DEF("clear_binds", 0, &skin_class_clear_binds),
};

static void define_skin_property(JSContext *ctx, JSValue proto) {
	
}

static void define_skin_enum(JSContext *ctx, JSValue proto) {
}

static int js_skin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Skin"] = Skin::__class_id;
	class_id_list.insert(Skin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Skin::__class_id, &skin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Skin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Skin::__class_id, proto);

	define_skin_property(ctx, proto);
	define_skin_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skin_class_proto_funcs, _countof(skin_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skin_class_constructor, "Skin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Skin", ctor);

	return 0;
}

JSModuleDef *_js_init_skin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Skin");
	return m;
}

JSModuleDef *js_init_skin_module(JSContext *ctx) {
	return _js_init_skin_module(ctx, "@godot/classes/skin");
}

void register_skin() {
	Skin::__init_js_class_id();
	js_init_skin_module(ctx);
}