
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ribbon_trail_mesh.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ribbon_trail_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef ribbon_trail_mesh_class_def = {
	"RibbonTrailMesh",
	.finalizer = ribbon_trail_mesh_class_finalizer
};

static JSValue ribbon_trail_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RibbonTrailMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	RibbonTrailMesh *ribbon_trail_mesh_class;
	if (argc == 1) 
		ribbon_trail_mesh_class = static_cast<RibbonTrailMesh *>(Variant(*argv).operator Object *());
	else 
		ribbon_trail_mesh_class = memnew(RibbonTrailMesh);
	if (!ribbon_trail_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, ribbon_trail_mesh_class);
	return obj;
}
static JSValue ribbon_trail_mesh_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RibbonTrailMesh::set_size, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_size, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_set_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RibbonTrailMesh::set_sections, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_get_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_sections, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_set_section_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RibbonTrailMesh::set_section_length, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_get_section_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_section_length, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_set_section_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RibbonTrailMesh::set_section_segments, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_get_section_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_section_segments, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RibbonTrailMesh::set_curve, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_curve, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RibbonTrailMesh::set_shape, ctx, this_val, argc, argv);
};
static JSValue ribbon_trail_mesh_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RibbonTrailMesh::get_shape, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry ribbon_trail_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &ribbon_trail_mesh_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &ribbon_trail_mesh_class_get_size),
	JS_CFUNC_DEF("set_sections", 1, &ribbon_trail_mesh_class_set_sections),
	JS_CFUNC_DEF("get_sections", 0, &ribbon_trail_mesh_class_get_sections),
	JS_CFUNC_DEF("set_section_length", 1, &ribbon_trail_mesh_class_set_section_length),
	JS_CFUNC_DEF("get_section_length", 0, &ribbon_trail_mesh_class_get_section_length),
	JS_CFUNC_DEF("set_section_segments", 1, &ribbon_trail_mesh_class_set_section_segments),
	JS_CFUNC_DEF("get_section_segments", 0, &ribbon_trail_mesh_class_get_section_segments),
	JS_CFUNC_DEF("set_curve", 1, &ribbon_trail_mesh_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &ribbon_trail_mesh_class_get_curve),
	JS_CFUNC_DEF("set_shape", 1, &ribbon_trail_mesh_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &ribbon_trail_mesh_class_get_shape),
};

static void define_ribbon_trail_mesh_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sections"),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_get_sections, "get_sections", 0),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_set_sections, "set_sections", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "section_length"),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_get_section_length, "get_section_length", 0),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_set_section_length, "set_section_length", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "section_segments"),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_get_section_segments, "get_section_segments", 0),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_set_section_segments, "set_section_segments", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "curve"),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_get_curve, "get_curve", 0),
        JS_NewCFunction(ctx, ribbon_trail_mesh_class_set_curve, "set_curve", 1),
        JS_PROP_GETSET
    );
	
}

static void define_ribbon_trail_mesh_enum(JSContext *ctx, JSValue proto) {
	JSValue Shape_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Shape_obj, "SHAPE_FLAT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Shape_obj, "SHAPE_CROSS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "Shape", Shape_obj);
}

static int js_ribbon_trail_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RibbonTrailMesh"] = RibbonTrailMesh::__class_id;
	class_id_list.insert(RibbonTrailMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RibbonTrailMesh::__class_id, &ribbon_trail_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RibbonTrailMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RibbonTrailMesh::__class_id, proto);

	define_ribbon_trail_mesh_property(ctx, proto);
	define_ribbon_trail_mesh_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, ribbon_trail_mesh_class_proto_funcs, _countof(ribbon_trail_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, ribbon_trail_mesh_class_constructor, "RibbonTrailMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RibbonTrailMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_ribbon_trail_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ribbon_trail_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RibbonTrailMesh");
	return m;
}

JSModuleDef *js_init_ribbon_trail_mesh_module(JSContext *ctx) {
	return _js_init_ribbon_trail_mesh_module(ctx, "@godot/classes/ribbon_trail_mesh");
}

void register_ribbon_trail_mesh() {
	RibbonTrailMesh::__init_js_class_id();
	js_init_ribbon_trail_mesh_module(ctx);
}