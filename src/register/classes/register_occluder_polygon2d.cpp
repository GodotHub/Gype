
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void occluder_polygon2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef occluder_polygon2d_class_def = {
	"OccluderPolygon2D",
	.finalizer = occluder_polygon2d_class_finalizer
};

static JSValue occluder_polygon2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OccluderPolygon2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	OccluderPolygon2D *occluder_polygon2d_class = memnew(OccluderPolygon2D);
	if (!occluder_polygon2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, occluder_polygon2d_class);	
	return obj;
}
static JSValue occluder_polygon2d_class_set_closed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderPolygon2D::set_closed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_polygon2d_class_is_closed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderPolygon2D::is_closed, ctx, this_val, argc, argv);
};
static JSValue occluder_polygon2d_class_set_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderPolygon2D::set_cull_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_polygon2d_class_get_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderPolygon2D::get_cull_mode, ctx, this_val, argc, argv);
};
static JSValue occluder_polygon2d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OccluderPolygon2D::set_polygon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue occluder_polygon2d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OccluderPolygon2D::get_polygon, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry occluder_polygon2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_closed", 1, &occluder_polygon2d_class_set_closed),
	JS_CFUNC_DEF("is_closed", 0, &occluder_polygon2d_class_is_closed),
	JS_CFUNC_DEF("set_cull_mode", 1, &occluder_polygon2d_class_set_cull_mode),
	JS_CFUNC_DEF("get_cull_mode", 0, &occluder_polygon2d_class_get_cull_mode),
	JS_CFUNC_DEF("set_polygon", 1, &occluder_polygon2d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &occluder_polygon2d_class_get_polygon),
};

void define_occluder_polygon2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "closed"),
        JS_NewCFunction(ctx, occluder_polygon2d_class_is_closed, "is_closed", 0),
        JS_NewCFunction(ctx, occluder_polygon2d_class_set_closed, "set_closed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cull_mode"),
        JS_NewCFunction(ctx, occluder_polygon2d_class_get_cull_mode, "get_cull_mode", 0),
        JS_NewCFunction(ctx, occluder_polygon2d_class_set_cull_mode, "set_cull_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "polygon"),
        JS_NewCFunction(ctx, occluder_polygon2d_class_get_polygon, "get_polygon", 0),
        JS_NewCFunction(ctx, occluder_polygon2d_class_set_polygon, "set_polygon", 1),
        JS_PROP_GETSET
    );
}

static int js_occluder_polygon2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OccluderPolygon2D::__class_id);
	classes["OccluderPolygon2D"] = OccluderPolygon2D::__class_id;
	class_id_list.insert(OccluderPolygon2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OccluderPolygon2D::__class_id, &occluder_polygon2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OccluderPolygon2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OccluderPolygon2D::__class_id, proto);

	define_occluder_polygon2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, occluder_polygon2d_class_proto_funcs, _countof(occluder_polygon2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, occluder_polygon2d_class_constructor, "OccluderPolygon2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OccluderPolygon2D", ctor);

	return 0;
}

JSModuleDef *_js_init_occluder_polygon2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_occluder_polygon2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OccluderPolygon2D");
	return m;
}

JSModuleDef *js_init_occluder_polygon2d_module(JSContext *ctx) {
	return _js_init_occluder_polygon2d_module(ctx, "godot/classes/occluder_polygon2d");
}

void register_occluder_polygon2d() {
	OccluderPolygon2D::__init_js_class_id();
	js_init_occluder_polygon2d_module(ctx);
}