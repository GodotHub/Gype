
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/polygon_occluder3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void polygon_occluder3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef polygon_occluder3d_class_def = {
	"PolygonOccluder3D",
	.finalizer = polygon_occluder3d_class_finalizer
};

static JSValue polygon_occluder3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PolygonOccluder3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	PolygonOccluder3D *polygon_occluder3d_class;
	if (argc == 1) 
		polygon_occluder3d_class = static_cast<PolygonOccluder3D *>(Variant(*argv).operator Object *());
	else 
		polygon_occluder3d_class = memnew(PolygonOccluder3D);
	if (!polygon_occluder3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, polygon_occluder3d_class);
	return obj;
}
static JSValue polygon_occluder3d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PolygonOccluder3D::set_polygon, ctx, this_val, argc, argv);
};
static JSValue polygon_occluder3d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PolygonOccluder3D::get_polygon, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry polygon_occluder3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polygon", 1, &polygon_occluder3d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &polygon_occluder3d_class_get_polygon),
};

static void define_polygon_occluder3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "polygon"),
        JS_NewCFunction(ctx, polygon_occluder3d_class_get_polygon, "get_polygon", 0),
        JS_NewCFunction(ctx, polygon_occluder3d_class_set_polygon, "set_polygon", 1),
        JS_PROP_GETSET
    );
	
}

static void define_polygon_occluder3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_polygon_occluder3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PolygonOccluder3D"] = PolygonOccluder3D::__class_id;
	class_id_list.insert(PolygonOccluder3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PolygonOccluder3D::__class_id, &polygon_occluder3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PolygonOccluder3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Occluder3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PolygonOccluder3D::__class_id, proto);

	define_polygon_occluder3d_property(ctx, proto);
	define_polygon_occluder3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, polygon_occluder3d_class_proto_funcs, _countof(polygon_occluder3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, polygon_occluder3d_class_constructor, "PolygonOccluder3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PolygonOccluder3D", ctor);
	constructors[PolygonOccluder3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_polygon_occluder3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/occluder3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_polygon_occluder3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PolygonOccluder3D");
	return m;
}

JSModuleDef *js_init_polygon_occluder3d_module(JSContext *ctx) {
	return _js_init_polygon_occluder3d_module(ctx, "@godot/classes/polygon_occluder3d");
}

void register_polygon_occluder3d() {
	PolygonOccluder3D::__init_js_class_id();
	js_init_polygon_occluder3d_module(ctx);
}