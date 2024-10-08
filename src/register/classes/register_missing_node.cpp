
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/missing_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void missing_node_class_finalizer(JSRuntime *rt, JSValue val) {
	MissingNode *missing_node = static_cast<MissingNode *>(JS_GetOpaque(val, MissingNode::__class_id));
	if (missing_node)
		MissingNode::free(nullptr, missing_node);
}

static JSClassDef missing_node_class_def = {
	"MissingNode",
	.finalizer = missing_node_class_finalizer
};

static JSValue missing_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MissingNode *missing_node_class;
	JSValue obj = JS_NewObjectClass(ctx, MissingNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	missing_node_class = memnew(MissingNode);
	if (!missing_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, missing_node_class);
	return obj;
}
static JSValue missing_node_class_set_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MissingNode::set_original_class, MissingNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue missing_node_class_get_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MissingNode::get_original_class, MissingNode::__class_id, ctx, this_val, argv);
};
static JSValue missing_node_class_set_original_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MissingNode::set_original_scene, MissingNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue missing_node_class_get_original_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MissingNode::get_original_scene, MissingNode::__class_id, ctx, this_val, argv);
};
static JSValue missing_node_class_set_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MissingNode::set_recording_properties, MissingNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue missing_node_class_is_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MissingNode::is_recording_properties, MissingNode::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry missing_node_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_original_class", 1, &missing_node_class_set_original_class),
	JS_CFUNC_DEF("get_original_class", 0, &missing_node_class_get_original_class),
	JS_CFUNC_DEF("set_original_scene", 1, &missing_node_class_set_original_scene),
	JS_CFUNC_DEF("get_original_scene", 0, &missing_node_class_get_original_scene),
	JS_CFUNC_DEF("set_recording_properties", 1, &missing_node_class_set_recording_properties),
	JS_CFUNC_DEF("is_recording_properties", 0, &missing_node_class_is_recording_properties),
};

static int js_missing_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MissingNode::__class_id);
	classes["MissingNode"] = MissingNode::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MissingNode::__class_id, &missing_node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MissingNode::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, missing_node_class_proto_funcs, _countof(missing_node_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, missing_node_class_constructor, "MissingNode", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MissingNode", ctor);

	return 0;
}

JSModuleDef *_js_init_missing_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_missing_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MissingNode");
	return m;
}

JSModuleDef *js_init_missing_node_module(JSContext *ctx) {
	return _js_init_missing_node_module(ctx, "godot/classes/missing_node");
}

void register_missing_node() {
	js_init_missing_node_module(ctx);
}