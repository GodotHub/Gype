
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/bone_map.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void bone_map_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef bone_map_class_def = {
	"BoneMap",
	.finalizer = bone_map_class_finalizer
};

static JSValue bone_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, BoneMap::__class_id);
	if (JS_IsException(obj))
		return obj;

	BoneMap *bone_map_class;
	if (argc == 1) 
		bone_map_class = static_cast<BoneMap *>(Variant(*argv).operator Object *());
	else 
		bone_map_class = memnew(BoneMap);
	if (!bone_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, bone_map_class);
	return obj;
}
static JSValue bone_map_class_get_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneMap::get_profile, ctx, this_val, argc, argv);
};
static JSValue bone_map_class_set_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&BoneMap::set_profile, ctx, this_val, argc, argv);
};
static JSValue bone_map_class_get_skeleton_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneMap::get_skeleton_bone_name, ctx, this_val, argc, argv);
};
static JSValue bone_map_class_set_skeleton_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&BoneMap::set_skeleton_bone_name, ctx, this_val, argc, argv);
};
static JSValue bone_map_class_find_profile_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneMap::find_profile_bone_name, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry bone_map_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_profile", 0, &bone_map_class_get_profile),
	JS_CFUNC_DEF("set_profile", 1, &bone_map_class_set_profile),
	JS_CFUNC_DEF("get_skeleton_bone_name", 1, &bone_map_class_get_skeleton_bone_name),
	JS_CFUNC_DEF("set_skeleton_bone_name", 2, &bone_map_class_set_skeleton_bone_name),
	JS_CFUNC_DEF("find_profile_bone_name", 1, &bone_map_class_find_profile_bone_name),
};
static JSValue bone_map_class_get_bone_map_updated_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	BoneMap *opaque = reinterpret_cast<BoneMap *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "bone_map_updated_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "bone_map_updated").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "bone_map_updated_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue bone_map_class_get_profile_updated_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	BoneMap *opaque = reinterpret_cast<BoneMap *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "profile_updated_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "profile_updated").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "profile_updated_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_bone_map_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "profile"),
        JS_NewCFunction(ctx, bone_map_class_get_profile, "get_profile", 0),
        JS_NewCFunction(ctx, bone_map_class_set_profile, "set_profile", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "bone_map_updated"),
		JS_NewCFunction(ctx, bone_map_class_get_bone_map_updated_signal, "get_bone_map_updated_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "profile_updated"),
		JS_NewCFunction(ctx, bone_map_class_get_profile_updated_signal, "get_profile_updated_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_bone_map_enum(JSContext *ctx, JSValue proto) {
}

static int js_bone_map_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["BoneMap"] = BoneMap::__class_id;
	class_id_list.insert(BoneMap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), BoneMap::__class_id, &bone_map_class_def);

	JSValue proto = JS_NewObjectClass(ctx, BoneMap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoneMap::__class_id, proto);

	define_bone_map_property(ctx, proto);
	define_bone_map_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, bone_map_class_proto_funcs, _countof(bone_map_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, bone_map_class_constructor, "BoneMap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "BoneMap", ctor);

	return 0;
}

JSModuleDef *_js_init_bone_map_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_bone_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoneMap");
	return m;
}

JSModuleDef *js_init_bone_map_module(JSContext *ctx) {
	return _js_init_bone_map_module(ctx, "@godot/classes/bone_map");
}

void register_bone_map() {
	BoneMap::__init_js_class_id();
	js_init_bone_map_module(ctx);
}