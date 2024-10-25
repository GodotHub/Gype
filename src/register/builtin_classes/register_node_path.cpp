
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/node_path.hpp>


using namespace godot;

static void node_path_class_finalizer(JSRuntime *rt, JSValue val) {
	NodePath *node_path = static_cast<NodePath *>(JS_GetOpaque(val, NodePath::__class_id));
	if (node_path)
		memfree(node_path);
}

static JSClassDef node_path_class_def = {
	"NodePath",
	.finalizer = node_path_class_finalizer
};

static JSValue node_path_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, NodePath::__class_id);
	if (JS_IsException(obj))
		return obj;

	NodePath *node_path_class;

	if (argc == 0) {
		node_path_class = memnew(NodePath());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::NODE_PATH) {
		NodePath v0 = Variant(argv[0]);
		node_path_class = memnew(NodePath(v0));
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::STRING) {
		String v0 = Variant(argv[0]);
		node_path_class = memnew(NodePath(v0));
	}

	if (!node_path_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, node_path_class);
	return obj;
}
static JSValue node_path_class_is_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::is_absolute, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_name_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_name_count, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_name, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_subname_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_subname_count, ctx, this_val, argc, argv);
};
static JSValue node_path_class_hash(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::hash, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_subname(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_subname, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_concatenated_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_concatenated_names, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_concatenated_subnames(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_concatenated_subnames, ctx, this_val, argc, argv);
};
static JSValue node_path_class_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::slice, ctx, this_val, argc, argv);
};
static JSValue node_path_class_get_as_property_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::get_as_property_path, ctx, this_val, argc, argv);
};
static JSValue node_path_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NodePath::is_empty, ctx, this_val, argc, argv);
};

static const JSCFunctionListEntry node_path_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_absolute", 0, &node_path_class_is_absolute),
	JS_CFUNC_DEF("get_name_count", 0, &node_path_class_get_name_count),
	JS_CFUNC_DEF("get_name", 1, &node_path_class_get_name),
	JS_CFUNC_DEF("get_subname_count", 0, &node_path_class_get_subname_count),
	JS_CFUNC_DEF("hash", 0, &node_path_class_hash),
	JS_CFUNC_DEF("get_subname", 1, &node_path_class_get_subname),
	JS_CFUNC_DEF("get_concatenated_names", 0, &node_path_class_get_concatenated_names),
	JS_CFUNC_DEF("get_concatenated_subnames", 0, &node_path_class_get_concatenated_subnames),
	JS_CFUNC_DEF("slice", 2, &node_path_class_slice),
	JS_CFUNC_DEF("get_as_property_path", 0, &node_path_class_get_as_property_path),
	JS_CFUNC_DEF("is_empty", 0, &node_path_class_is_empty),
};

static int js_node_path_class_init(JSContext *ctx) {
	JS_NewClassID(&NodePath::__class_id);
	classes["NodePath"] = NodePath::__class_id;
	class_id_list.insert(NodePath::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NodePath::__class_id, &node_path_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, NodePath::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, node_path_class_proto_funcs, _countof(node_path_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, node_path_class_constructor, "NodePath", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "NodePath", ctor);

	return 0;
}

void js_init_node_path_module(JSContext *ctx) {
	js_node_path_class_init(ctx);
}

void register_node_path() {
	NodePath::__init_js_class_id();
	js_init_node_path_module(ctx);
}