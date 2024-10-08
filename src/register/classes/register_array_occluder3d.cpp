
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/array_occluder3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void array_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ArrayOccluder3D *array_occluder3d = static_cast<ArrayOccluder3D *>(JS_GetOpaque(val, ArrayOccluder3D::__class_id));
	if (array_occluder3d)
		ArrayOccluder3D::free(nullptr, array_occluder3d);
}

static JSClassDef array_occluder3d_class_def = {
	"ArrayOccluder3D",
	.finalizer = array_occluder3d_class_finalizer
};

static JSValue array_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ArrayOccluder3D *array_occluder3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ArrayOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	array_occluder3d_class = memnew(ArrayOccluder3D);
	if (!array_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, array_occluder3d_class);
	return obj;
}
static JSValue array_occluder3d_class_set_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ArrayOccluder3D::set_arrays, ArrayOccluder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_occluder3d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ArrayOccluder3D::set_vertices, ArrayOccluder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_occluder3d_class_set_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ArrayOccluder3D::set_indices, ArrayOccluder3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry array_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_arrays", 2, &array_occluder3d_class_set_arrays),
	JS_CFUNC_DEF("set_vertices", 1, &array_occluder3d_class_set_vertices),
	JS_CFUNC_DEF("set_indices", 1, &array_occluder3d_class_set_indices),
};

static int js_array_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ArrayOccluder3D::__class_id);
	classes["ArrayOccluder3D"] = ArrayOccluder3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ArrayOccluder3D::__class_id, &array_occluder3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ArrayOccluder3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, array_occluder3d_class_proto_funcs, _countof(array_occluder3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, array_occluder3d_class_constructor, "ArrayOccluder3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ArrayOccluder3D", ctor);

	return 0;
}

JSModuleDef *_js_init_array_occluder3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_array_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ArrayOccluder3D");
	return m;
}

JSModuleDef *js_init_array_occluder3d_module(JSContext *ctx) {
	return _js_init_array_occluder3d_module(ctx, "godot/classes/array_occluder3d");
}

void register_array_occluder3d() {
	js_init_array_occluder3d_module(ctx);
}