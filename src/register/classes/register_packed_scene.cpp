
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packed_scene_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedScene *packed_scene = static_cast<PackedScene *>(JS_GetOpaque(val, PackedScene::__class_id));
	if (packed_scene)
		PackedScene::free(nullptr, packed_scene);
}

static JSClassDef packed_scene_class_def = {
	"PackedScene",
	.finalizer = packed_scene_class_finalizer
};

static JSValue packed_scene_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedScene *packed_scene_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedScene::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_scene_class = memnew(PackedScene);
	if (!packed_scene_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_scene_class);
	return obj;
}
static JSValue packed_scene_class_pack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedScene::pack, PackedScene::__class_id, ctx, this_val, argv);
};
static JSValue packed_scene_class_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedScene::instantiate, PackedScene::__class_id, ctx, this_val, argv);
};
static JSValue packed_scene_class_can_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedScene::can_instantiate, PackedScene::__class_id, ctx, this_val, argv);
};
static JSValue packed_scene_class_get_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedScene::get_state, PackedScene::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry packed_scene_class_proto_funcs[] = {
	JS_CFUNC_DEF("pack", 1, &packed_scene_class_pack),
	JS_CFUNC_DEF("instantiate", 1, &packed_scene_class_instantiate),
	JS_CFUNC_DEF("can_instantiate", 0, &packed_scene_class_can_instantiate),
	JS_CFUNC_DEF("get_state", 0, &packed_scene_class_get_state),
};

static int js_packed_scene_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PackedScene::__class_id);
	classes["PackedScene"] = PackedScene::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PackedScene::__class_id, &packed_scene_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PackedScene::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_scene_class_proto_funcs, _countof(packed_scene_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packed_scene_class_constructor, "PackedScene", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PackedScene", ctor);

	return 0;
}

JSModuleDef *_js_init_packed_scene_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packed_scene_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PackedScene");
	return m;
}

JSModuleDef *js_init_packed_scene_module(JSContext *ctx) {
	return _js_init_packed_scene_module(ctx, "godot/classes/packed_scene");
}

void register_packed_scene() {
	js_init_packed_scene_module(ctx);
}