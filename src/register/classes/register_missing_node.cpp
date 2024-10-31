
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/missing_node.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void missing_node_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef missing_node_class_def = {
	"MissingNode",
	.finalizer = missing_node_class_finalizer
};

static JSValue missing_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MissingNode::__class_id);
	if (JS_IsException(obj))
		return obj;

	MissingNode *missing_node_class;
	if (argc == 1) 
		missing_node_class = static_cast<MissingNode *>(static_cast<Object *>(Variant(*argv)));
	else 
		missing_node_class = memnew(MissingNode);
	if (!missing_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, missing_node_class);	
	return obj;
}
static JSValue missing_node_class_set_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MissingNode::set_original_class, ctx, this_val, argc, argv);
};
static JSValue missing_node_class_get_original_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MissingNode::get_original_class, ctx, this_val, argc, argv);
};
static JSValue missing_node_class_set_original_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MissingNode::set_original_scene, ctx, this_val, argc, argv);
};
static JSValue missing_node_class_get_original_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MissingNode::get_original_scene, ctx, this_val, argc, argv);
};
static JSValue missing_node_class_set_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&MissingNode::set_recording_properties, ctx, this_val, argc, argv);
};
static JSValue missing_node_class_is_recording_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MissingNode::is_recording_properties, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry missing_node_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_original_class", 1, &missing_node_class_set_original_class),
	JS_CFUNC_DEF("get_original_class", 0, &missing_node_class_get_original_class),
	JS_CFUNC_DEF("set_original_scene", 1, &missing_node_class_set_original_scene),
	JS_CFUNC_DEF("get_original_scene", 0, &missing_node_class_get_original_scene),
	JS_CFUNC_DEF("set_recording_properties", 1, &missing_node_class_set_recording_properties),
	JS_CFUNC_DEF("is_recording_properties", 0, &missing_node_class_is_recording_properties),
};

static void define_missing_node_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "original_class"),
        JS_NewCFunction(ctx, missing_node_class_get_original_class, "get_original_class", 0),
        JS_NewCFunction(ctx, missing_node_class_set_original_class, "set_original_class", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "original_scene"),
        JS_NewCFunction(ctx, missing_node_class_get_original_scene, "get_original_scene", 0),
        JS_NewCFunction(ctx, missing_node_class_set_original_scene, "set_original_scene", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "recording_properties"),
        JS_NewCFunction(ctx, missing_node_class_is_recording_properties, "is_recording_properties", 0),
        JS_NewCFunction(ctx, missing_node_class_set_recording_properties, "set_recording_properties", 1),
        JS_PROP_GETSET
    );
	
}

static void define_missing_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_missing_node_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MissingNode::__class_id);
	classes["MissingNode"] = MissingNode::__class_id;
	class_id_list.insert(MissingNode::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MissingNode::__class_id, &missing_node_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MissingNode::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MissingNode::__class_id, proto);

	define_missing_node_property(ctx, proto);
	define_missing_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, missing_node_class_proto_funcs, _countof(missing_node_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, missing_node_class_constructor, "MissingNode", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MissingNode", ctor);

	return 0;
}

JSModuleDef *_js_init_missing_node_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_missing_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MissingNode");
	return m;
}

JSModuleDef *js_init_missing_node_module(JSContext *ctx) {
	return _js_init_missing_node_module(ctx, "@godot/classes/missing_node");
}

void register_missing_node() {
	MissingNode::__init_js_class_id();
	js_init_missing_node_module(ctx);
}