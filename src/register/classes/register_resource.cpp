
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef resource_class_def = {
	"Resource",
	.finalizer = resource_class_finalizer
};

static JSValue resource_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Resource::__class_id);
	if (JS_IsException(obj))
		return obj;
	Resource *resource_class;
	if (argc == 1) {
		Variant vobj = *argv;
		resource_class = static_cast<Resource *>(static_cast<Object *>(vobj));
	} else {
		resource_class = memnew(Resource);
	}
	if (!resource_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_class);	
	return obj;
}
static JSValue resource_class_set_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::set_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_take_over_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::take_over_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::get_path, ctx, this_val, argc, argv);
};
static JSValue resource_class_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::set_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::get_name, ctx, this_val, argc, argv);
};
static JSValue resource_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::get_rid, ctx, this_val, argc, argv);
};
static JSValue resource_class_set_local_to_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::set_local_to_scene, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_is_local_to_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::is_local_to_scene, ctx, this_val, argc, argv);
};
static JSValue resource_class_get_local_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::get_local_scene, ctx, this_val, argc, argv);
};
static JSValue resource_class_setup_local_to_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::setup_local_to_scene, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_set_scene_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::set_scene_unique_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_get_scene_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::get_scene_unique_id, ctx, this_val, argc, argv);
};
static JSValue resource_class_emit_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Resource::emit_changed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Resource::duplicate, ctx, this_val, argc, argv);
};
static JSValue resource_class_generate_scene_unique_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Resource::generate_scene_unique_id, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry resource_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_path", 1, &resource_class_set_path),
	JS_CFUNC_DEF("take_over_path", 1, &resource_class_take_over_path),
	JS_CFUNC_DEF("get_path", 0, &resource_class_get_path),
	JS_CFUNC_DEF("set_name", 1, &resource_class_set_name),
	JS_CFUNC_DEF("get_name", 0, &resource_class_get_name),
	JS_CFUNC_DEF("get_rid", 0, &resource_class_get_rid),
	JS_CFUNC_DEF("set_local_to_scene", 1, &resource_class_set_local_to_scene),
	JS_CFUNC_DEF("is_local_to_scene", 0, &resource_class_is_local_to_scene),
	JS_CFUNC_DEF("get_local_scene", 0, &resource_class_get_local_scene),
	JS_CFUNC_DEF("setup_local_to_scene", 0, &resource_class_setup_local_to_scene),
	JS_CFUNC_DEF("set_scene_unique_id", 1, &resource_class_set_scene_unique_id),
	JS_CFUNC_DEF("get_scene_unique_id", 0, &resource_class_get_scene_unique_id),
	JS_CFUNC_DEF("emit_changed", 0, &resource_class_emit_changed),
	JS_CFUNC_DEF("duplicate", 1, &resource_class_duplicate),
};
static const JSCFunctionListEntry resource_class_static_funcs[] = {
	JS_CFUNC_DEF("generate_scene_unique_id", 0, &resource_class_generate_scene_unique_id),
};

void define_resource_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "resource_local_to_scene"),
        JS_NewCFunction(ctx, resource_class_is_local_to_scene, "is_local_to_scene", 0),
        JS_NewCFunction(ctx, resource_class_set_local_to_scene, "set_local_to_scene", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "resource_path"),
        JS_NewCFunction(ctx, resource_class_get_path, "get_path", 0),
        JS_NewCFunction(ctx, resource_class_set_path, "set_path", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "resource_name"),
        JS_NewCFunction(ctx, resource_class_get_name, "get_name", 0),
        JS_NewCFunction(ctx, resource_class_set_name, "set_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "resource_scene_unique_id"),
        JS_NewCFunction(ctx, resource_class_get_scene_unique_id, "get_scene_unique_id", 0),
        JS_NewCFunction(ctx, resource_class_set_scene_unique_id, "set_scene_unique_id", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_resource_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Resource::__class_id);
	classes["Resource"] = Resource::__class_id;
	class_id_list.insert(Resource::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Resource::__class_id, &resource_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Resource::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Resource::__class_id, proto);

	define_resource_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_class_proto_funcs, _countof(resource_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, resource_class_constructor, "Resource", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, resource_class_static_funcs, _countof(resource_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Resource", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Resource");
	return m;
}

JSModuleDef *js_init_resource_module(JSContext *ctx) {
	return _js_init_resource_module(ctx, "@godot/classes/resource");
}

void register_resource() {
	Resource::__init_js_class_id();
	js_init_resource_module(ctx);
}