
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_accessor.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_accessor_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_accessor_class_def = {
	"GLTFAccessor",
	.finalizer = gltf_accessor_class_finalizer
};

static JSValue gltf_accessor_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFAccessor::__class_id);
	if (JS_IsException(obj))
		return obj;
	GLTFAccessor *gltf_accessor_class = memnew(GLTFAccessor);
	if (!gltf_accessor_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_accessor_class);	
	return obj;
}
static JSValue gltf_accessor_class_get_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_buffer_view, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_buffer_view, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_byte_offset, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_byte_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_component_type, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_component_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_normalized, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_normalized, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_count, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_accessor_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_accessor_type, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_accessor_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_accessor_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_type, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_min, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_min, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_max, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_max, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_count, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_sparse_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_sparse_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_indices_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_indices_buffer_view, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_sparse_indices_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_sparse_indices_buffer_view, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_indices_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_indices_byte_offset, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_sparse_indices_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_sparse_indices_byte_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_indices_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_indices_component_type, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_sparse_indices_component_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_sparse_indices_component_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_values_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_values_buffer_view, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_sparse_values_buffer_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_sparse_values_buffer_view, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_accessor_class_get_sparse_values_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAccessor::get_sparse_values_byte_offset, ctx, this_val, argc, argv);
};
static JSValue gltf_accessor_class_set_sparse_values_byte_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAccessor::set_sparse_values_byte_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_accessor_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_buffer_view", 0, &gltf_accessor_class_get_buffer_view),
	JS_CFUNC_DEF("set_buffer_view", 1, &gltf_accessor_class_set_buffer_view),
	JS_CFUNC_DEF("get_byte_offset", 0, &gltf_accessor_class_get_byte_offset),
	JS_CFUNC_DEF("set_byte_offset", 1, &gltf_accessor_class_set_byte_offset),
	JS_CFUNC_DEF("get_component_type", 0, &gltf_accessor_class_get_component_type),
	JS_CFUNC_DEF("set_component_type", 1, &gltf_accessor_class_set_component_type),
	JS_CFUNC_DEF("get_normalized", 0, &gltf_accessor_class_get_normalized),
	JS_CFUNC_DEF("set_normalized", 1, &gltf_accessor_class_set_normalized),
	JS_CFUNC_DEF("get_count", 0, &gltf_accessor_class_get_count),
	JS_CFUNC_DEF("set_count", 1, &gltf_accessor_class_set_count),
	JS_CFUNC_DEF("get_accessor_type", 0, &gltf_accessor_class_get_accessor_type),
	JS_CFUNC_DEF("set_accessor_type", 1, &gltf_accessor_class_set_accessor_type),
	JS_CFUNC_DEF("get_type", 0, &gltf_accessor_class_get_type),
	JS_CFUNC_DEF("set_type", 1, &gltf_accessor_class_set_type),
	JS_CFUNC_DEF("get_min", 0, &gltf_accessor_class_get_min),
	JS_CFUNC_DEF("set_min", 1, &gltf_accessor_class_set_min),
	JS_CFUNC_DEF("get_max", 0, &gltf_accessor_class_get_max),
	JS_CFUNC_DEF("set_max", 1, &gltf_accessor_class_set_max),
	JS_CFUNC_DEF("get_sparse_count", 0, &gltf_accessor_class_get_sparse_count),
	JS_CFUNC_DEF("set_sparse_count", 1, &gltf_accessor_class_set_sparse_count),
	JS_CFUNC_DEF("get_sparse_indices_buffer_view", 0, &gltf_accessor_class_get_sparse_indices_buffer_view),
	JS_CFUNC_DEF("set_sparse_indices_buffer_view", 1, &gltf_accessor_class_set_sparse_indices_buffer_view),
	JS_CFUNC_DEF("get_sparse_indices_byte_offset", 0, &gltf_accessor_class_get_sparse_indices_byte_offset),
	JS_CFUNC_DEF("set_sparse_indices_byte_offset", 1, &gltf_accessor_class_set_sparse_indices_byte_offset),
	JS_CFUNC_DEF("get_sparse_indices_component_type", 0, &gltf_accessor_class_get_sparse_indices_component_type),
	JS_CFUNC_DEF("set_sparse_indices_component_type", 1, &gltf_accessor_class_set_sparse_indices_component_type),
	JS_CFUNC_DEF("get_sparse_values_buffer_view", 0, &gltf_accessor_class_get_sparse_values_buffer_view),
	JS_CFUNC_DEF("set_sparse_values_buffer_view", 1, &gltf_accessor_class_set_sparse_values_buffer_view),
	JS_CFUNC_DEF("get_sparse_values_byte_offset", 0, &gltf_accessor_class_get_sparse_values_byte_offset),
	JS_CFUNC_DEF("set_sparse_values_byte_offset", 1, &gltf_accessor_class_set_sparse_values_byte_offset),
};

void define_gltf_accessor_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "buffer_view"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_buffer_view, "get_buffer_view", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_buffer_view, "set_buffer_view", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "byte_offset"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_byte_offset, "get_byte_offset", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_byte_offset, "set_byte_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "component_type"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_component_type, "get_component_type", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_component_type, "set_component_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "normalized"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_normalized, "get_normalized", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_normalized, "set_normalized", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "count"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_count, "get_count", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_count, "set_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "accessor_type"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_accessor_type, "get_accessor_type", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_accessor_type, "set_accessor_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "type"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_type, "get_type", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_type, "set_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "min"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_min, "get_min", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_min, "set_min", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_max, "get_max", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_max, "set_max", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sparse_count"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_sparse_count, "get_sparse_count", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_sparse_count, "set_sparse_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sparse_indices_buffer_view"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_sparse_indices_buffer_view, "get_sparse_indices_buffer_view", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_sparse_indices_buffer_view, "set_sparse_indices_buffer_view", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sparse_indices_byte_offset"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_sparse_indices_byte_offset, "get_sparse_indices_byte_offset", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_sparse_indices_byte_offset, "set_sparse_indices_byte_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sparse_indices_component_type"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_sparse_indices_component_type, "get_sparse_indices_component_type", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_sparse_indices_component_type, "set_sparse_indices_component_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sparse_values_buffer_view"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_sparse_values_buffer_view, "get_sparse_values_buffer_view", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_sparse_values_buffer_view, "set_sparse_values_buffer_view", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sparse_values_byte_offset"),
        JS_NewCFunction(ctx, gltf_accessor_class_get_sparse_values_byte_offset, "get_sparse_values_byte_offset", 0),
        JS_NewCFunction(ctx, gltf_accessor_class_set_sparse_values_byte_offset, "set_sparse_values_byte_offset", 1),
        JS_PROP_GETSET
    );
}

static int js_gltf_accessor_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFAccessor::__class_id);
	classes["GLTFAccessor"] = GLTFAccessor::__class_id;
	class_id_list.insert(GLTFAccessor::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFAccessor::__class_id, &gltf_accessor_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFAccessor::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFAccessor::__class_id, proto);

	define_gltf_accessor_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_accessor_class_proto_funcs, _countof(gltf_accessor_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_accessor_class_constructor, "GLTFAccessor", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFAccessor", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_accessor_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_accessor_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFAccessor");
	return m;
}

JSModuleDef *js_init_gltf_accessor_module(JSContext *ctx) {
	return _js_init_gltf_accessor_module(ctx, "godot/classes/gltf_accessor");
}

void register_gltf_accessor() {
	GLTFAccessor::__init_js_class_id();
	js_init_gltf_accessor_module(ctx);
}