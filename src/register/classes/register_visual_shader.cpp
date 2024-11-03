
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_class_def = {
	"VisualShader",
	.finalizer = visual_shader_class_finalizer
};

static JSValue visual_shader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShader::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShader *visual_shader_class;
	if (argc == 1) 
		visual_shader_class = static_cast<VisualShader *>(Variant(*argv).operator Object *());
	else 
		visual_shader_class = memnew(VisualShader);
	if (!visual_shader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_class);
	return obj;
}
static JSValue visual_shader_class_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::set_mode, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_add_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::add_node, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_get_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::get_node, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_set_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::set_node_position, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_get_node_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::get_node_position, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_get_node_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::get_node_list, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_get_valid_node_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::get_valid_node_id, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_remove_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::remove_node, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_replace_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::replace_node, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_is_node_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::is_node_connection, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_can_connect_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::can_connect_nodes, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_connect_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&VisualShader::connect_nodes, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_disconnect_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::disconnect_nodes, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_connect_nodes_forced(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::connect_nodes_forced, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_get_node_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::get_node_connections, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_set_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::set_graph_offset, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_get_graph_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::get_graph_offset, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_attach_node_to_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::attach_node_to_frame, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_detach_node_from_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::detach_node_from_frame, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_add_varying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::add_varying, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_remove_varying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShader::remove_varying, ctx, this_val, argc, argv);
};
static JSValue visual_shader_class_has_varying(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShader::has_varying, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mode", 1, &visual_shader_class_set_mode),
	JS_CFUNC_DEF("add_node", 4, &visual_shader_class_add_node),
	JS_CFUNC_DEF("get_node", 2, &visual_shader_class_get_node),
	JS_CFUNC_DEF("set_node_position", 3, &visual_shader_class_set_node_position),
	JS_CFUNC_DEF("get_node_position", 2, &visual_shader_class_get_node_position),
	JS_CFUNC_DEF("get_node_list", 1, &visual_shader_class_get_node_list),
	JS_CFUNC_DEF("get_valid_node_id", 1, &visual_shader_class_get_valid_node_id),
	JS_CFUNC_DEF("remove_node", 2, &visual_shader_class_remove_node),
	JS_CFUNC_DEF("replace_node", 3, &visual_shader_class_replace_node),
	JS_CFUNC_DEF("is_node_connection", 5, &visual_shader_class_is_node_connection),
	JS_CFUNC_DEF("can_connect_nodes", 5, &visual_shader_class_can_connect_nodes),
	JS_CFUNC_DEF("connect_nodes", 5, &visual_shader_class_connect_nodes),
	JS_CFUNC_DEF("disconnect_nodes", 5, &visual_shader_class_disconnect_nodes),
	JS_CFUNC_DEF("connect_nodes_forced", 5, &visual_shader_class_connect_nodes_forced),
	JS_CFUNC_DEF("get_node_connections", 1, &visual_shader_class_get_node_connections),
	JS_CFUNC_DEF("set_graph_offset", 1, &visual_shader_class_set_graph_offset),
	JS_CFUNC_DEF("get_graph_offset", 0, &visual_shader_class_get_graph_offset),
	JS_CFUNC_DEF("attach_node_to_frame", 3, &visual_shader_class_attach_node_to_frame),
	JS_CFUNC_DEF("detach_node_from_frame", 2, &visual_shader_class_detach_node_from_frame),
	JS_CFUNC_DEF("add_varying", 3, &visual_shader_class_add_varying),
	JS_CFUNC_DEF("remove_varying", 1, &visual_shader_class_remove_varying),
	JS_CFUNC_DEF("has_varying", 1, &visual_shader_class_has_varying),
};

static void define_visual_shader_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "graph_offset"),
        JS_NewCFunction(ctx, visual_shader_class_get_graph_offset, "get_graph_offset", 0),
        JS_NewCFunction(ctx, visual_shader_class_set_graph_offset, "set_graph_offset", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_enum(JSContext *ctx, JSValue proto) {
	JSValue Type_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_VERTEX", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_FRAGMENT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_LIGHT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_START", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_PROCESS", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_COLLIDE", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_START_CUSTOM", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_PROCESS_CUSTOM", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_SKY", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_FOG", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, Type_obj, "TYPE_MAX", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, proto, "Type", Type_obj);
	JSValue VaryingMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, VaryingMode_obj, "VARYING_MODE_VERTEX_TO_FRAG_LIGHT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, VaryingMode_obj, "VARYING_MODE_FRAG_TO_LIGHT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, VaryingMode_obj, "VARYING_MODE_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "VaryingMode", VaryingMode_obj);
	JSValue VaryingType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_FLOAT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_INT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_UINT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_VECTOR_2D", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_VECTOR_3D", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_VECTOR_4D", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_BOOLEAN", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_TRANSFORM", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, VaryingType_obj, "VARYING_TYPE_MAX", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, proto, "VaryingType", VaryingType_obj);
}

static int js_visual_shader_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShader"] = VisualShader::__class_id;
	class_id_list.insert(VisualShader::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShader::__class_id, &visual_shader_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShader::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shader::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShader::__class_id, proto);

	define_visual_shader_property(ctx, proto);
	define_visual_shader_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_class_proto_funcs, _countof(visual_shader_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_class_constructor, "VisualShader", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShader", ctor);
	constructors[VisualShader::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/shader';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShader");
	return m;
}

JSModuleDef *js_init_visual_shader_module(JSContext *ctx) {
	return _js_init_visual_shader_module(ctx, "@godot/classes/visual_shader");
}

void register_visual_shader() {
	VisualShader::__init_js_class_id();
	js_init_visual_shader_module(ctx);
}