
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton_profile_humanoid_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonProfileHumanoid *skeleton_profile_humanoid = static_cast<SkeletonProfileHumanoid *>(JS_GetOpaque(val, SkeletonProfileHumanoid::__class_id));
	if (skeleton_profile_humanoid)
		SkeletonProfileHumanoid::free(nullptr, skeleton_profile_humanoid);
}

static JSClassDef skeleton_profile_humanoid_class_def = {
	"SkeletonProfileHumanoid",
	.finalizer = skeleton_profile_humanoid_class_finalizer
};

static JSValue skeleton_profile_humanoid_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonProfileHumanoid *skeleton_profile_humanoid_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonProfileHumanoid::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_profile_humanoid_class = memnew(SkeletonProfileHumanoid);
	if (!skeleton_profile_humanoid_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_profile_humanoid_class);
	return obj;
}

static int js_skeleton_profile_humanoid_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonProfileHumanoid::__class_id);
	classes["SkeletonProfileHumanoid"] = SkeletonProfileHumanoid::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonProfileHumanoid::__class_id, &skeleton_profile_humanoid_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonProfile::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonProfileHumanoid::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_profile_humanoid_class_constructor, "SkeletonProfileHumanoid", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonProfileHumanoid", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_profile_humanoid_module(JSContext *ctx, const char *module_name) {
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
	js_init_skeleton_profile_humanoid_module(ctx);
}