
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/array_occluder3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void array_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef array_occluder3d_class_def = {
	"ArrayOccluder3D",
	.finalizer = array_occluder3d_class_finalizer
};

static JSValue array_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ArrayOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	ArrayOccluder3D *array_occluder3d_class;
	if (argc == 1) 
		array_occluder3d_class = static_cast<ArrayOccluder3D *>(Variant(*argv).operator Object *());
	else 
		array_occluder3d_class = memnew(ArrayOccluder3D);
	if (!array_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, array_occluder3d_class);
	return obj;
}
static JSValue array_occluder3d_class_set_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ArrayOccluder3D::set_arrays, ctx, this_val, argc, argv);
};
static JSValue array_occluder3d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ArrayOccluder3D::set_vertices, ctx, this_val, argc, argv);
};
static JSValue array_occluder3d_class_set_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ArrayOccluder3D::set_indices, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry array_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_arrays", 2, &array_occluder3d_class_set_arrays),
	JS_CFUNC_DEF("set_vertices", 1, &array_occluder3d_class_set_vertices),
	JS_CFUNC_DEF("set_indices", 1, &array_occluder3d_class_set_indices),
};

static void define_array_occluder3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "vertices"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, array_occluder3d_class_set_vertices, "set_vertices", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "indices"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, array_occluder3d_class_set_indices, "set_indices", 1),
        JS_PROP_GETSET
    );
	
}

static void define_array_occluder3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_array_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ArrayOccluder3D"] = ArrayOccluder3D::__class_id;
	class_id_list.insert(ArrayOccluder3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ArrayOccluder3D::__class_id, &array_occluder3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ArrayOccluder3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ArrayOccluder3D::__class_id, proto);

	define_array_occluder3d_property(ctx, proto);
	define_array_occluder3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, array_occluder3d_class_proto_funcs, _countof(array_occluder3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, array_occluder3d_class_constructor, "ArrayOccluder3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ArrayOccluder3D", ctor);
	constructors[ArrayOccluder3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_array_occluder3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/occluder3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_array_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ArrayOccluder3D");
	return m;
}

JSModuleDef *js_init_array_occluder3d_module(JSContext *ctx) {
	return _js_init_array_occluder3d_module(ctx, "@godot/classes/array_occluder3d");
}

void register_array_occluder3d() {
	ArrayOccluder3D::__init_js_class_id();
	js_init_array_occluder3d_module(ctx);
}