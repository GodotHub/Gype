
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile_metadata.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_interaction_profile_metadata_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRInteractionProfileMetadata *open_xr_interaction_profile_metadata = static_cast<OpenXRInteractionProfileMetadata *>(JS_GetOpaque(val, OpenXRInteractionProfileMetadata::__class_id));
	if (open_xr_interaction_profile_metadata)
		OpenXRInteractionProfileMetadata::free(nullptr, open_xr_interaction_profile_metadata);
}

static JSClassDef open_xr_interaction_profile_metadata_class_def = {
	"OpenXRInteractionProfileMetadata",
	.finalizer = open_xr_interaction_profile_metadata_class_finalizer
};

static JSValue open_xr_interaction_profile_metadata_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRInteractionProfileMetadata *open_xr_interaction_profile_metadata_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRInteractionProfileMetadata::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_interaction_profile_metadata_class = memnew(OpenXRInteractionProfileMetadata);
	if (!open_xr_interaction_profile_metadata_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_interaction_profile_metadata_class);
	return obj;
}
static JSValue open_xr_interaction_profile_metadata_class_register_profile_rename(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_profile_rename, OpenXRInteractionProfileMetadata::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_metadata_class_register_top_level_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_top_level_path, OpenXRInteractionProfileMetadata::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_metadata_class_register_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_interaction_profile, OpenXRInteractionProfileMetadata::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_metadata_class_register_io_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_io_path, OpenXRInteractionProfileMetadata::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xr_interaction_profile_metadata_class_proto_funcs[] = {
	JS_CFUNC_DEF("register_profile_rename", 2, &open_xr_interaction_profile_metadata_class_register_profile_rename),
	JS_CFUNC_DEF("register_top_level_path", 3, &open_xr_interaction_profile_metadata_class_register_top_level_path),
	JS_CFUNC_DEF("register_interaction_profile", 3, &open_xr_interaction_profile_metadata_class_register_interaction_profile),
	JS_CFUNC_DEF("register_io_path", 6, &open_xr_interaction_profile_metadata_class_register_io_path),
};

static int js_open_xr_interaction_profile_metadata_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRInteractionProfileMetadata::__class_id);
	classes["OpenXRInteractionProfileMetadata"] = OpenXRInteractionProfileMetadata::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRInteractionProfileMetadata::__class_id, &open_xr_interaction_profile_metadata_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRInteractionProfileMetadata::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_interaction_profile_metadata_class_proto_funcs, _countof(open_xr_interaction_profile_metadata_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_interaction_profile_metadata_class_constructor, "OpenXRInteractionProfileMetadata", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRInteractionProfileMetadata", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_interaction_profile_metadata_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_interaction_profile_metadata_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRInteractionProfileMetadata");
	return m;
}

JSModuleDef *js_init_open_xr_interaction_profile_metadata_module(JSContext *ctx) {
	return _js_init_open_xr_interaction_profile_metadata_module(ctx, "godot/classes/open_xr_interaction_profile_metadata");
}

void register_open_xr_interaction_profile_metadata() {
	js_init_open_xr_interaction_profile_metadata_module(ctx);
}