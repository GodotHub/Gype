
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/fbx_state.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void fbx_state_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef fbx_state_class_def = {
	"FBXState",
	.finalizer = fbx_state_class_finalizer
};

static JSValue fbx_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FBXState::__class_id);
	if (JS_IsException(obj))
		return obj;
	FBXState *fbx_state_class;
	if (argc == 1) {
		Variant vobj = *argv;
		fbx_state_class = static_cast<FBXState *>(static_cast<Object *>(vobj));
	} else {
		fbx_state_class = memnew(FBXState);
	}
	if (!fbx_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, fbx_state_class);	
	return obj;
}
static JSValue fbx_state_class_get_allow_geometry_helper_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&FBXState::get_allow_geometry_helper_nodes, ctx, this_val, argc, argv);
};
static JSValue fbx_state_class_set_allow_geometry_helper_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FBXState::set_allow_geometry_helper_nodes, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry fbx_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_allow_geometry_helper_nodes", 0, &fbx_state_class_get_allow_geometry_helper_nodes),
	JS_CFUNC_DEF("set_allow_geometry_helper_nodes", 1, &fbx_state_class_set_allow_geometry_helper_nodes),
};

void define_fbx_state_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "allow_geometry_helper_nodes"),
        JS_NewCFunction(ctx, fbx_state_class_get_allow_geometry_helper_nodes, "get_allow_geometry_helper_nodes", 0),
        JS_NewCFunction(ctx, fbx_state_class_set_allow_geometry_helper_nodes, "set_allow_geometry_helper_nodes", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_fbx_state_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&FBXState::__class_id);
	classes["FBXState"] = FBXState::__class_id;
	class_id_list.insert(FBXState::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FBXState::__class_id, &fbx_state_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FBXState::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GLTFState::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FBXState::__class_id, proto);

	define_fbx_state_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, fbx_state_class_proto_funcs, _countof(fbx_state_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, fbx_state_class_constructor, "FBXState", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "FBXState", ctor);

	return 0;
}

JSModuleDef *_js_init_fbx_state_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/gltf_state';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fbx_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FBXState");
	return m;
}

JSModuleDef *js_init_fbx_state_module(JSContext *ctx) {
	return _js_init_fbx_state_module(ctx, "@godot/classes/fbx_state");
}

void register_fbx_state() {
	FBXState::__init_js_class_id();
	js_init_fbx_state_module(ctx);
}