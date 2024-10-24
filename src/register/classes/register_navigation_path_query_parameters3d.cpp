
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_path_query_parameters3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_path_query_parameters3d_class_def = {
	"NavigationPathQueryParameters3D",
	.finalizer = navigation_path_query_parameters3d_class_finalizer
};

static JSValue navigation_path_query_parameters3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationPathQueryParameters3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	NavigationPathQueryParameters3D *navigation_path_query_parameters3d_class = memnew(NavigationPathQueryParameters3D);
	if (!navigation_path_query_parameters3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_path_query_parameters3d_class);	
	return obj;
}
static JSValue navigation_path_query_parameters3d_class_set_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_pathfinding_algorithm, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_pathfinding_algorithm, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_path_postprocessing, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_path_postprocessing, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_map, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_start_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_target_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_target_position, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_navigation_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_metadata_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_metadata_flags, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_simplify_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_simplify_path, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_simplify_epsilon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_simplify_epsilon, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_path_query_parameters3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pathfinding_algorithm", 1, &navigation_path_query_parameters3d_class_set_pathfinding_algorithm),
	JS_CFUNC_DEF("get_pathfinding_algorithm", 0, &navigation_path_query_parameters3d_class_get_pathfinding_algorithm),
	JS_CFUNC_DEF("set_path_postprocessing", 1, &navigation_path_query_parameters3d_class_set_path_postprocessing),
	JS_CFUNC_DEF("get_path_postprocessing", 0, &navigation_path_query_parameters3d_class_get_path_postprocessing),
	JS_CFUNC_DEF("set_map", 1, &navigation_path_query_parameters3d_class_set_map),
	JS_CFUNC_DEF("get_map", 0, &navigation_path_query_parameters3d_class_get_map),
	JS_CFUNC_DEF("set_start_position", 1, &navigation_path_query_parameters3d_class_set_start_position),
	JS_CFUNC_DEF("get_start_position", 0, &navigation_path_query_parameters3d_class_get_start_position),
	JS_CFUNC_DEF("set_target_position", 1, &navigation_path_query_parameters3d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &navigation_path_query_parameters3d_class_get_target_position),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_path_query_parameters3d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_path_query_parameters3d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_metadata_flags", 1, &navigation_path_query_parameters3d_class_set_metadata_flags),
	JS_CFUNC_DEF("get_metadata_flags", 0, &navigation_path_query_parameters3d_class_get_metadata_flags),
	JS_CFUNC_DEF("set_simplify_path", 1, &navigation_path_query_parameters3d_class_set_simplify_path),
	JS_CFUNC_DEF("get_simplify_path", 0, &navigation_path_query_parameters3d_class_get_simplify_path),
	JS_CFUNC_DEF("set_simplify_epsilon", 1, &navigation_path_query_parameters3d_class_set_simplify_epsilon),
	JS_CFUNC_DEF("get_simplify_epsilon", 0, &navigation_path_query_parameters3d_class_get_simplify_epsilon),
};

void define_navigation_path_query_parameters3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "map"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_map, "get_map", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_map, "set_map", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "start_position"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_start_position, "get_start_position", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_start_position, "set_start_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "target_position"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_target_position, "get_target_position", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_target_position, "set_target_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "navigation_layers"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_navigation_layers, "get_navigation_layers", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_navigation_layers, "set_navigation_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pathfinding_algorithm"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_pathfinding_algorithm, "get_pathfinding_algorithm", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_pathfinding_algorithm, "set_pathfinding_algorithm", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "path_postprocessing"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_path_postprocessing, "get_path_postprocessing", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_path_postprocessing, "set_path_postprocessing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "metadata_flags"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_metadata_flags, "get_metadata_flags", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_metadata_flags, "set_metadata_flags", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "simplify_path"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_simplify_path, "get_simplify_path", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_simplify_path, "set_simplify_path", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "simplify_epsilon"),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_get_simplify_epsilon, "get_simplify_epsilon", 0),
        JS_NewCFunction(ctx, navigation_path_query_parameters3d_class_set_simplify_epsilon, "set_simplify_epsilon", 1),
        JS_PROP_GETSET
    );
}

static int js_navigation_path_query_parameters3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NavigationPathQueryParameters3D::__class_id);
	classes["NavigationPathQueryParameters3D"] = NavigationPathQueryParameters3D::__class_id;
	class_id_list.insert(NavigationPathQueryParameters3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationPathQueryParameters3D::__class_id, &navigation_path_query_parameters3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationPathQueryParameters3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationPathQueryParameters3D::__class_id, proto);

	define_navigation_path_query_parameters3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_path_query_parameters3d_class_proto_funcs, _countof(navigation_path_query_parameters3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_path_query_parameters3d_class_constructor, "NavigationPathQueryParameters3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NavigationPathQueryParameters3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_path_query_parameters3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_path_query_parameters3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationPathQueryParameters3D");
	return m;
}

JSModuleDef *js_init_navigation_path_query_parameters3d_module(JSContext *ctx) {
	return _js_init_navigation_path_query_parameters3d_module(ctx, "godot/classes/navigation_path_query_parameters3d");
}

void register_navigation_path_query_parameters3d() {
	NavigationPathQueryParameters3D::__init_js_class_id();
	js_init_navigation_path_query_parameters3d_module(ctx);
}