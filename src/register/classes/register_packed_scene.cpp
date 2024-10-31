
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packed_scene_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef packed_scene_class_def = {
	"PackedScene",
	.finalizer = packed_scene_class_finalizer
};

static JSValue packed_scene_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PackedScene::__class_id);
	if (JS_IsException(obj))
		return obj;

	PackedScene *packed_scene_class;
	if (argc == 1) 
		packed_scene_class = static_cast<PackedScene *>(static_cast<Object *>(Variant(*argv)));
	else 
		packed_scene_class = memnew(PackedScene);
	if (!packed_scene_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packed_scene_class);	
	return obj;
}
static JSValue packed_scene_class_pack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PackedScene::pack, ctx, this_val, argc, argv);
};
static JSValue packed_scene_class_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PackedScene::instantiate, ctx, this_val, argc, argv);
};
static JSValue packed_scene_class_can_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PackedScene::can_instantiate, ctx, this_val, argc, argv);
};
static JSValue packed_scene_class_get_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PackedScene::get_state, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry packed_scene_class_proto_funcs[] = {
	JS_CFUNC_DEF("pack", 1, &packed_scene_class_pack),
	JS_CFUNC_DEF("instantiate", 1, &packed_scene_class_instantiate),
	JS_CFUNC_DEF("can_instantiate", 0, &packed_scene_class_can_instantiate),
	JS_CFUNC_DEF("get_state", 0, &packed_scene_class_get_state),
};

static void define_packed_scene_property(JSContext *ctx, JSValue proto) {
	
}

static void define_packed_scene_enum(JSContext *ctx, JSValue proto) {
	JSValue GenEditState_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_INSTANCE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_MAIN", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, GenEditState_obj, "GEN_EDIT_STATE_MAIN_INHERITED", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "GenEditState", GenEditState_obj);
}

static int js_packed_scene_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PackedScene::__class_id);
	classes["PackedScene"] = PackedScene::__class_id;
	class_id_list.insert(PackedScene::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedScene::__class_id, &packed_scene_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PackedScene::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PackedScene::__class_id, proto);

	define_packed_scene_property(ctx, proto);
	define_packed_scene_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_scene_class_proto_funcs, _countof(packed_scene_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packed_scene_class_constructor, "PackedScene", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PackedScene", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_scene_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_scene_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedScene");
	return m;
}

JSModuleDef *js_init_packed_scene_module(JSContext *ctx) {
	return _js_init_packed_scene_module(ctx, "@godot/classes/packed_scene");
}

void register_packed_scene() {
	PackedScene::__init_js_class_id();
	js_init_packed_scene_module(ctx);
}