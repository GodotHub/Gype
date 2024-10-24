
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/polygon2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void polygon2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef polygon2d_class_def = {
	"Polygon2D",
	.finalizer = polygon2d_class_finalizer
};

static JSValue polygon2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Polygon2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Polygon2D *polygon2d_class = memnew(Polygon2D);
	if (!polygon2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, polygon2d_class);	
	return obj;
}
static JSValue polygon2d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_polygon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_polygon, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_uv, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_uv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_uv, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_color, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_polygons, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_polygons, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_vertex_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_vertex_colors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_vertex_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_vertex_colors, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_texture, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_texture_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_texture_offset, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_texture_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_texture_rotation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_texture_rotation, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_texture_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_texture_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_texture_scale, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_invert_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_invert_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_invert_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_invert_enabled, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_antialiased, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_antialiased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_antialiased, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_invert_border(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_invert_border, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_invert_border(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_invert_border, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_offset, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_add_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::add_bone, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_bone_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_bone_count, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_get_bone_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_bone_path, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_get_bone_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_bone_weights, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_erase_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::erase_bone, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_clear_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::clear_bones, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_set_bone_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_bone_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_set_bone_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_bone_weights, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_set_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_skeleton, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_skeleton, ctx, this_val, argc, argv);
};
static JSValue polygon2d_class_set_internal_vertex_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Polygon2D::set_internal_vertex_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue polygon2d_class_get_internal_vertex_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Polygon2D::get_internal_vertex_count, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry polygon2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polygon", 1, &polygon2d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &polygon2d_class_get_polygon),
	JS_CFUNC_DEF("set_uv", 1, &polygon2d_class_set_uv),
	JS_CFUNC_DEF("get_uv", 0, &polygon2d_class_get_uv),
	JS_CFUNC_DEF("set_color", 1, &polygon2d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &polygon2d_class_get_color),
	JS_CFUNC_DEF("set_polygons", 1, &polygon2d_class_set_polygons),
	JS_CFUNC_DEF("get_polygons", 0, &polygon2d_class_get_polygons),
	JS_CFUNC_DEF("set_vertex_colors", 1, &polygon2d_class_set_vertex_colors),
	JS_CFUNC_DEF("get_vertex_colors", 0, &polygon2d_class_get_vertex_colors),
	JS_CFUNC_DEF("set_texture", 1, &polygon2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &polygon2d_class_get_texture),
	JS_CFUNC_DEF("set_texture_offset", 1, &polygon2d_class_set_texture_offset),
	JS_CFUNC_DEF("get_texture_offset", 0, &polygon2d_class_get_texture_offset),
	JS_CFUNC_DEF("set_texture_rotation", 1, &polygon2d_class_set_texture_rotation),
	JS_CFUNC_DEF("get_texture_rotation", 0, &polygon2d_class_get_texture_rotation),
	JS_CFUNC_DEF("set_texture_scale", 1, &polygon2d_class_set_texture_scale),
	JS_CFUNC_DEF("get_texture_scale", 0, &polygon2d_class_get_texture_scale),
	JS_CFUNC_DEF("set_invert_enabled", 1, &polygon2d_class_set_invert_enabled),
	JS_CFUNC_DEF("get_invert_enabled", 0, &polygon2d_class_get_invert_enabled),
	JS_CFUNC_DEF("set_antialiased", 1, &polygon2d_class_set_antialiased),
	JS_CFUNC_DEF("get_antialiased", 0, &polygon2d_class_get_antialiased),
	JS_CFUNC_DEF("set_invert_border", 1, &polygon2d_class_set_invert_border),
	JS_CFUNC_DEF("get_invert_border", 0, &polygon2d_class_get_invert_border),
	JS_CFUNC_DEF("set_offset", 1, &polygon2d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &polygon2d_class_get_offset),
	JS_CFUNC_DEF("add_bone", 2, &polygon2d_class_add_bone),
	JS_CFUNC_DEF("get_bone_count", 0, &polygon2d_class_get_bone_count),
	JS_CFUNC_DEF("get_bone_path", 1, &polygon2d_class_get_bone_path),
	JS_CFUNC_DEF("get_bone_weights", 1, &polygon2d_class_get_bone_weights),
	JS_CFUNC_DEF("erase_bone", 1, &polygon2d_class_erase_bone),
	JS_CFUNC_DEF("clear_bones", 0, &polygon2d_class_clear_bones),
	JS_CFUNC_DEF("set_bone_path", 2, &polygon2d_class_set_bone_path),
	JS_CFUNC_DEF("set_bone_weights", 2, &polygon2d_class_set_bone_weights),
	JS_CFUNC_DEF("set_skeleton", 1, &polygon2d_class_set_skeleton),
	JS_CFUNC_DEF("get_skeleton", 0, &polygon2d_class_get_skeleton),
	JS_CFUNC_DEF("set_internal_vertex_count", 1, &polygon2d_class_set_internal_vertex_count),
	JS_CFUNC_DEF("get_internal_vertex_count", 0, &polygon2d_class_get_internal_vertex_count),
};

void define_polygon2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, polygon2d_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, polygon2d_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "antialiased"),
        JS_NewCFunction(ctx, polygon2d_class_get_antialiased, "get_antialiased", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_antialiased, "set_antialiased", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, polygon2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_offset"),
        JS_NewCFunction(ctx, polygon2d_class_get_texture_offset, "get_texture_offset", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_texture_offset, "set_texture_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_scale"),
        JS_NewCFunction(ctx, polygon2d_class_get_texture_scale, "get_texture_scale", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_texture_scale, "set_texture_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_rotation"),
        JS_NewCFunction(ctx, polygon2d_class_get_texture_rotation, "get_texture_rotation", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_texture_rotation, "set_texture_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "skeleton"),
        JS_NewCFunction(ctx, polygon2d_class_get_skeleton, "get_skeleton", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_skeleton, "set_skeleton", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "invert_enabled"),
        JS_NewCFunction(ctx, polygon2d_class_get_invert_enabled, "get_invert_enabled", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_invert_enabled, "set_invert_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "invert_border"),
        JS_NewCFunction(ctx, polygon2d_class_get_invert_border, "get_invert_border", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_invert_border, "set_invert_border", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "polygon"),
        JS_NewCFunction(ctx, polygon2d_class_get_polygon, "get_polygon", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_polygon, "set_polygon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uv"),
        JS_NewCFunction(ctx, polygon2d_class_get_uv, "get_uv", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_uv, "set_uv", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertex_colors"),
        JS_NewCFunction(ctx, polygon2d_class_get_vertex_colors, "get_vertex_colors", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_vertex_colors, "set_vertex_colors", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "polygons"),
        JS_NewCFunction(ctx, polygon2d_class_get_polygons, "get_polygons", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_polygons, "set_polygons", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "internal_vertex_count"),
        JS_NewCFunction(ctx, polygon2d_class_get_internal_vertex_count, "get_internal_vertex_count", 0),
        JS_NewCFunction(ctx, polygon2d_class_set_internal_vertex_count, "set_internal_vertex_count", 1),
        JS_PROP_GETSET
    );
}

static int js_polygon2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Polygon2D::__class_id);
	classes["Polygon2D"] = Polygon2D::__class_id;
	class_id_list.insert(Polygon2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Polygon2D::__class_id, &polygon2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Polygon2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Polygon2D::__class_id, proto);

	define_polygon2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, polygon2d_class_proto_funcs, _countof(polygon2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, polygon2d_class_constructor, "Polygon2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Polygon2D", ctor);

	return 0;
}

JSModuleDef *_js_init_polygon2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_polygon2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Polygon2D");
	return m;
}

JSModuleDef *js_init_polygon2d_module(JSContext *ctx) {
	return _js_init_polygon2d_module(ctx, "godot/classes/polygon2d");
}

void register_polygon2d() {
	Polygon2D::__init_js_class_id();
	js_init_polygon2d_module(ctx);
}