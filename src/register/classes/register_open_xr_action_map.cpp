
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/open_xr_action_map.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_action_map_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRActionMap *open_xr_action_map = static_cast<OpenXRActionMap *>(JS_GetOpaque(val, OpenXRActionMap::__class_id));
	if (open_xr_action_map)
		memdelete(open_xr_action_map);
}

static JSClassDef open_xr_action_map_class_def = {
	"OpenXRActionMap",
	.finalizer = open_xr_action_map_class_finalizer
};

static JSValue open_xr_action_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRActionMap::__class_id);
	if (JS_IsException(obj))
		return obj;

	OpenXRActionMap *open_xr_action_map_class;
	if (argc == 1) 
		open_xr_action_map_class = static_cast<OpenXRActionMap *>(Variant(*argv).operator Object *());
	else 
		open_xr_action_map_class = memnew(OpenXRActionMap);
	if (!open_xr_action_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_action_map_class);
	return obj;
}
static JSValue open_xr_action_map_class_set_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::set_action_sets, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_get_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::get_action_sets, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_get_action_set_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::get_action_set_count, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_find_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::find_action_set, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_get_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::get_action_set, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_add_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::add_action_set, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_remove_action_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::remove_action_set, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_set_interaction_profiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::set_interaction_profiles, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_get_interaction_profiles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::get_interaction_profiles, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_get_interaction_profile_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::get_interaction_profile_count, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_find_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::find_interaction_profile, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_get_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRActionMap::get_interaction_profile, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_add_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::add_interaction_profile, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_remove_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::remove_interaction_profile, ctx, this_val, argc, argv);
};
static JSValue open_xr_action_map_class_create_default_action_sets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRActionMap::create_default_action_sets, ctx, this_val, argc, argv);
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

static void define_open_xr_action_map_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "action_sets"),
        JS_NewCFunction(ctx, open_xr_action_map_class_get_action_sets, "get_action_sets", 0),
        JS_NewCFunction(ctx, open_xr_action_map_class_set_action_sets, "set_action_sets", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interaction_profiles"),
        JS_NewCFunction(ctx, open_xr_action_map_class_get_interaction_profiles, "get_interaction_profiles", 0),
        JS_NewCFunction(ctx, open_xr_action_map_class_set_interaction_profiles, "set_interaction_profiles", 1),
        JS_PROP_GETSET
    );
	
}

static void define_open_xr_action_map_enum(JSContext *ctx, JSValue proto) {
}

static int js_open_xr_action_map_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OpenXRActionMap"] = OpenXRActionMap::__class_id;
	class_id_list.insert(OpenXRActionMap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRActionMap::__class_id, &open_xr_action_map_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRActionMap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRActionMap::__class_id, proto);

	define_open_xr_action_map_property(ctx, proto);
	define_open_xr_action_map_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_action_map_class_proto_funcs, _countof(open_xr_action_map_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_action_map_class_constructor, "OpenXRActionMap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "OpenXRActionMap", ctor);
	constructors[OpenXRActionMap::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_open_xr_action_map_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_action_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRActionMap");
	return m;
}

JSModuleDef *js_init_open_xr_action_map_module(JSContext *ctx) {
	return _js_init_open_xr_action_map_module(ctx, "@godot/classes/open_xr_action_map");
}

void register_open_xr_action_map() {
	OpenXRActionMap::__init_js_class_id();
	js_init_open_xr_action_map_module(ctx);
}