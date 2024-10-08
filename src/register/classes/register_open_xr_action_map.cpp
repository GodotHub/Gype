
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/open_xr_action_map.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xr_action_map_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRActionMap *open_xr_action_map = static_cast<OpenXRActionMap *>(JS_GetOpaque(val, OpenXRActionMap::__class_id));
	if (open_xr_action_map)
		OpenXRActionMap::free(nullptr, open_xr_action_map);
}

static JSClassDef open_xr_action_map_class_def = {
	"OpenXRActionMap",
	.finalizer = open_xr_action_map_class_finalizer
};

static JSValue open_xr_action_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRActionMap *open_xr_action_map_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRActionMap::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_action_map_class = memnew(OpenXRActionMap);
	if (!open_xr_action_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_action_map_class);
	return obj;
}
static JSValue open_xr_action_map_class_set_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::set_action_sets, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_map_class_get_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::get_action_sets, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_get_action_set_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::get_action_set_count, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_find_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::find_action_set, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_get_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::get_action_set, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_add_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::add_action_set, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_map_class_remove_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::remove_action_set, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_map_class_set_interaction_profiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::set_interaction_profiles, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_map_class_get_interaction_profiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::get_interaction_profiles, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_get_interaction_profile_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::get_interaction_profile_count, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_find_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::find_interaction_profile, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_get_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRActionMap::get_interaction_profile, OpenXRActionMap::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_action_map_class_add_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::add_interaction_profile, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_map_class_remove_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::remove_interaction_profile, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_action_map_class_create_default_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRActionMap::create_default_action_sets, OpenXRActionMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xr_action_map_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_action_sets", 1, &open_xr_action_map_class_set_action_sets),
	JS_CFUNC_DEF("get_action_sets", 0, &open_xr_action_map_class_get_action_sets),
	JS_CFUNC_DEF("get_action_set_count", 0, &open_xr_action_map_class_get_action_set_count),
	JS_CFUNC_DEF("find_action_set", 1, &open_xr_action_map_class_find_action_set),
	JS_CFUNC_DEF("get_action_set", 1, &open_xr_action_map_class_get_action_set),
	JS_CFUNC_DEF("add_action_set", 1, &open_xr_action_map_class_add_action_set),
	JS_CFUNC_DEF("remove_action_set", 1, &open_xr_action_map_class_remove_action_set),
	JS_CFUNC_DEF("set_interaction_profiles", 1, &open_xr_action_map_class_set_interaction_profiles),
	JS_CFUNC_DEF("get_interaction_profiles", 0, &open_xr_action_map_class_get_interaction_profiles),
	JS_CFUNC_DEF("get_interaction_profile_count", 0, &open_xr_action_map_class_get_interaction_profile_count),
	JS_CFUNC_DEF("find_interaction_profile", 1, &open_xr_action_map_class_find_interaction_profile),
	JS_CFUNC_DEF("get_interaction_profile", 1, &open_xr_action_map_class_get_interaction_profile),
	JS_CFUNC_DEF("add_interaction_profile", 1, &open_xr_action_map_class_add_interaction_profile),
	JS_CFUNC_DEF("remove_interaction_profile", 1, &open_xr_action_map_class_remove_interaction_profile),
	JS_CFUNC_DEF("create_default_action_sets", 0, &open_xr_action_map_class_create_default_action_sets),
};

static int js_open_xr_action_map_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRActionMap::__class_id);
	classes["OpenXRActionMap"] = OpenXRActionMap::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRActionMap::__class_id, &open_xr_action_map_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRActionMap::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_action_map_class_proto_funcs, _countof(open_xr_action_map_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_action_map_class_constructor, "OpenXRActionMap", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRActionMap", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_action_map_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_action_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRActionMap");
	return m;
}

JSModuleDef *js_init_open_xr_action_map_module(JSContext *ctx) {
	return _js_init_open_xr_action_map_module(ctx, "godot/classes/open_xr_action_map");
}

void register_open_xr_action_map() {
	js_init_open_xr_action_map_module(ctx);
}