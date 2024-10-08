
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skin_class_finalizer(JSRuntime *rt, JSValue val) {
	Skin *skin = static_cast<Skin *>(JS_GetOpaque(val, Skin::__class_id));
	if (skin)
		Skin::free(nullptr, skin);
}

static JSClassDef skin_class_def = {
	"Skin",
	.finalizer = skin_class_finalizer
};

static JSValue skin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Skin *skin_class;
	JSValue obj = JS_NewObjectClass(ctx, Skin::__class_id);
	if (JS_IsException(obj))
		return obj;
	skin_class = memnew(Skin);
	if (!skin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skin_class);
	return obj;
}
static JSValue skin_class_set_bind_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::set_bind_count, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skin_class_get_bind_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skin::get_bind_count, Skin::__class_id, ctx, this_val, argv);
};
static JSValue skin_class_add_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::add_bind, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skin_class_add_named_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::add_named_bind, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skin_class_set_bind_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::set_bind_pose, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skin_class_get_bind_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skin::get_bind_pose, Skin::__class_id, ctx, this_val, argv);
};
static JSValue skin_class_set_bind_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::set_bind_name, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skin_class_get_bind_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skin::get_bind_name, Skin::__class_id, ctx, this_val, argv);
};
static JSValue skin_class_set_bind_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::set_bind_bone, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skin_class_get_bind_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skin::get_bind_bone, Skin::__class_id, ctx, this_val, argv);
};
static JSValue skin_class_clear_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skin::clear_binds, Skin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
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

static int js_skin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Skin::__class_id);
	classes["Skin"] = Skin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Skin::__class_id, &skin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Skin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skin_class_proto_funcs, _countof(skin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skin_class_constructor, "Skin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Skin", ctor);

	return 0;
}

JSModuleDef *_js_init_skin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Skin");
	return m;
}

JSModuleDef *js_init_skin_module(JSContext *ctx) {
	return _js_init_skin_module(ctx, "godot/classes/skin");
}

void register_skin() {
	js_init_skin_module(ctx);
}