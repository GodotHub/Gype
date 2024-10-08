
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/fbx_state.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void fbx_state_class_finalizer(JSRuntime *rt, JSValue val) {
	FBXState *fbx_state = static_cast<FBXState *>(JS_GetOpaque(val, FBXState::__class_id));
	if (fbx_state)
		FBXState::free(nullptr, fbx_state);
}

static JSClassDef fbx_state_class_def = {
	"FBXState",
	.finalizer = fbx_state_class_finalizer
};

static JSValue fbx_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FBXState *fbx_state_class;
	JSValue obj = JS_NewObjectClass(ctx, FBXState::__class_id);
	if (JS_IsException(obj))
		return obj;
	fbx_state_class = memnew(FBXState);
	if (!fbx_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, fbx_state_class);
	return obj;
}
static JSValue fbx_state_class_get_allow_geometry_helper_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FBXState::get_allow_geometry_helper_nodes, FBXState::__class_id, ctx, this_val, argv);
};
static JSValue fbx_state_class_set_allow_geometry_helper_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FBXState::set_allow_geometry_helper_nodes, FBXState::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry fbx_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_allow_geometry_helper_nodes", 0, &fbx_state_class_get_allow_geometry_helper_nodes),
	JS_CFUNC_DEF("set_allow_geometry_helper_nodes", 1, &fbx_state_class_set_allow_geometry_helper_nodes),
};

static int js_fbx_state_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FBXState::__class_id);
	classes["FBXState"] = FBXState::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FBXState::__class_id, &fbx_state_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GLTFState::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FBXState::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, fbx_state_class_proto_funcs, _countof(fbx_state_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, fbx_state_class_constructor, "FBXState", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FBXState", ctor);

	return 0;
}

JSModuleDef *_js_init_fbx_state_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fbx_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FBXState");
	return m;
}

JSModuleDef *js_init_fbx_state_module(JSContext *ctx) {
	return _js_init_fbx_state_module(ctx, "godot/classes/fbx_state");
}

void register_fbx_state() {
	js_init_fbx_state_module(ctx);
}