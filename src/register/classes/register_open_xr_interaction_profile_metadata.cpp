
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile_metadata.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_interaction_profile_metadata_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_interaction_profile_metadata_class_def = {
	"OpenXRInteractionProfileMetadata",
	.finalizer = open_xr_interaction_profile_metadata_class_finalizer
};

static JSValue open_xr_interaction_profile_metadata_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRInteractionProfileMetadata::__class_id);
	if (JS_IsException(obj))
		return obj;
	OpenXRInteractionProfileMetadata *open_xr_interaction_profile_metadata_class = memnew(OpenXRInteractionProfileMetadata);
	if (!open_xr_interaction_profile_metadata_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_interaction_profile_metadata_class);	
	return obj;
}
static JSValue open_xr_interaction_profile_metadata_class_register_profile_rename(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_profile_rename, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_metadata_class_register_top_level_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_top_level_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_metadata_class_register_interaction_profile(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_interaction_profile, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_interaction_profile_metadata_class_register_io_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRInteractionProfileMetadata::register_io_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry open_xr_interaction_profile_metadata_class_proto_funcs[] = {
	JS_CFUNC_DEF("register_profile_rename", 2, &open_xr_interaction_profile_metadata_class_register_profile_rename),
	JS_CFUNC_DEF("register_top_level_path", 3, &open_xr_interaction_profile_metadata_class_register_top_level_path),
	JS_CFUNC_DEF("register_interaction_profile", 3, &open_xr_interaction_profile_metadata_class_register_interaction_profile),
	JS_CFUNC_DEF("register_io_path", 6, &open_xr_interaction_profile_metadata_class_register_io_path),
};

void define_open_xr_interaction_profile_metadata_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_open_xr_interaction_profile_metadata_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OpenXRInteractionProfileMetadata::__class_id);
	classes["OpenXRInteractionProfileMetadata"] = OpenXRInteractionProfileMetadata::__class_id;
	class_id_list.insert(OpenXRInteractionProfileMetadata::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRInteractionProfileMetadata::__class_id, &open_xr_interaction_profile_metadata_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRInteractionProfileMetadata::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRInteractionProfileMetadata::__class_id, proto);

	define_open_xr_interaction_profile_metadata_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_interaction_profile_metadata_class_proto_funcs, _countof(open_xr_interaction_profile_metadata_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_interaction_profile_metadata_class_constructor, "OpenXRInteractionProfileMetadata", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRInteractionProfileMetadata", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_interaction_profile_metadata_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_interaction_profile_metadata_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRInteractionProfileMetadata");
	return m;
}

JSModuleDef *js_init_open_xr_interaction_profile_metadata_module(JSContext *ctx) {
	return _js_init_open_xr_interaction_profile_metadata_module(ctx, "@godot/classes/open_xr_interaction_profile_metadata");
}

void register_open_xr_interaction_profile_metadata() {
	OpenXRInteractionProfileMetadata::__init_js_class_id();
	js_init_open_xr_interaction_profile_metadata_module(ctx);
}