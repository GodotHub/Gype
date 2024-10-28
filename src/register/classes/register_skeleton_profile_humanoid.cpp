
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton_profile_humanoid_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef skeleton_profile_humanoid_class_def = {
	"SkeletonProfileHumanoid",
	.finalizer = skeleton_profile_humanoid_class_finalizer
};

static JSValue skeleton_profile_humanoid_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonProfileHumanoid::__class_id);
	if (JS_IsException(obj))
		return obj;
	SkeletonProfileHumanoid *skeleton_profile_humanoid_class = memnew(SkeletonProfileHumanoid);
	if (!skeleton_profile_humanoid_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_profile_humanoid_class);
	return obj;
}

void define_skeleton_profile_humanoid_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_profile_humanoid_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonProfileHumanoid::__class_id);
	classes["SkeletonProfileHumanoid"] = SkeletonProfileHumanoid::__class_id;
	class_id_list.insert(SkeletonProfileHumanoid::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonProfileHumanoid::__class_id, &skeleton_profile_humanoid_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonProfileHumanoid::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonProfile::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonProfileHumanoid::__class_id, proto);

	define_skeleton_profile_humanoid_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_profile_humanoid_class_constructor, "SkeletonProfileHumanoid", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkeletonProfileHumanoid", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_profile_humanoid_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/skeleton_profile';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_profile_humanoid_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonProfileHumanoid");
	return m;
}

JSModuleDef *js_init_skeleton_profile_humanoid_module(JSContext *ctx) {
	return _js_init_skeleton_profile_humanoid_module(ctx, "godot/classes/skeleton_profile_humanoid");
}

void register_skeleton_profile_humanoid() {
	SkeletonProfileHumanoid::__init_js_class_id();
	js_init_skeleton_profile_humanoid_module(ctx);
}