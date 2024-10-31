
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/text_mesh.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void text_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef text_mesh_class_def = {
	"TextMesh",
	.finalizer = text_mesh_class_finalizer
};

static JSValue text_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	TextMesh *text_mesh_class;
	if (argc == 1) 
		text_mesh_class = static_cast<TextMesh *>(static_cast<Object *>(Variant(*argv)));
	else 
		text_mesh_class = memnew(TextMesh);
	if (!text_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, text_mesh_class);	
	return obj;
}
static JSValue text_mesh_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_horizontal_alignment, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_horizontal_alignment, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_vertical_alignment, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_vertical_alignment, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_text, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_text, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_font, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_font, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_font_size, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_font_size, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_line_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_line_spacing, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_line_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_line_spacing, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_justification_flags, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_justification_flags, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_depth, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_depth, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_width, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_width, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_pixel_size, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_pixel_size, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_offset, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_offset, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_curve_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_curve_step, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_curve_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_curve_step, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_text_direction, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_language, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_language, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::get_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_set_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&TextMesh::set_uppercase, ctx, this_val, argc, argv);
};
static JSValue text_mesh_class_is_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextMesh::is_uppercase, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry text_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_horizontal_alignment", 1, &text_mesh_class_set_horizontal_alignment),
	JS_CFUNC_DEF("get_horizontal_alignment", 0, &text_mesh_class_get_horizontal_alignment),
	JS_CFUNC_DEF("set_vertical_alignment", 1, &text_mesh_class_set_vertical_alignment),
	JS_CFUNC_DEF("get_vertical_alignment", 0, &text_mesh_class_get_vertical_alignment),
	JS_CFUNC_DEF("set_text", 1, &text_mesh_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &text_mesh_class_get_text),
	JS_CFUNC_DEF("set_font", 1, &text_mesh_class_set_font),
	JS_CFUNC_DEF("get_font", 0, &text_mesh_class_get_font),
	JS_CFUNC_DEF("set_font_size", 1, &text_mesh_class_set_font_size),
	JS_CFUNC_DEF("get_font_size", 0, &text_mesh_class_get_font_size),
	JS_CFUNC_DEF("set_line_spacing", 1, &text_mesh_class_set_line_spacing),
	JS_CFUNC_DEF("get_line_spacing", 0, &text_mesh_class_get_line_spacing),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &text_mesh_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &text_mesh_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_justification_flags", 1, &text_mesh_class_set_justification_flags),
	JS_CFUNC_DEF("get_justification_flags", 0, &text_mesh_class_get_justification_flags),
	JS_CFUNC_DEF("set_depth", 1, &text_mesh_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &text_mesh_class_get_depth),
	JS_CFUNC_DEF("set_width", 1, &text_mesh_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &text_mesh_class_get_width),
	JS_CFUNC_DEF("set_pixel_size", 1, &text_mesh_class_set_pixel_size),
	JS_CFUNC_DEF("get_pixel_size", 0, &text_mesh_class_get_pixel_size),
	JS_CFUNC_DEF("set_offset", 1, &text_mesh_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &text_mesh_class_get_offset),
	JS_CFUNC_DEF("set_curve_step", 1, &text_mesh_class_set_curve_step),
	JS_CFUNC_DEF("get_curve_step", 0, &text_mesh_class_get_curve_step),
	JS_CFUNC_DEF("set_text_direction", 1, &text_mesh_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &text_mesh_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &text_mesh_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &text_mesh_class_get_language),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &text_mesh_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &text_mesh_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &text_mesh_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &text_mesh_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("set_uppercase", 1, &text_mesh_class_set_uppercase),
	JS_CFUNC_DEF("is_uppercase", 0, &text_mesh_class_is_uppercase),
};

static void define_text_mesh_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text"),
        JS_NewCFunction(ctx, text_mesh_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_text, "set_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "font"),
        JS_NewCFunction(ctx, text_mesh_class_get_font, "get_font", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_font, "set_font", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "font_size"),
        JS_NewCFunction(ctx, text_mesh_class_get_font_size, "get_font_size", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_font_size, "set_font_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "horizontal_alignment"),
        JS_NewCFunction(ctx, text_mesh_class_get_horizontal_alignment, "get_horizontal_alignment", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_horizontal_alignment, "set_horizontal_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "vertical_alignment"),
        JS_NewCFunction(ctx, text_mesh_class_get_vertical_alignment, "get_vertical_alignment", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_vertical_alignment, "set_vertical_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "uppercase"),
        JS_NewCFunction(ctx, text_mesh_class_is_uppercase, "is_uppercase", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_uppercase, "set_uppercase", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "line_spacing"),
        JS_NewCFunction(ctx, text_mesh_class_get_line_spacing, "get_line_spacing", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_line_spacing, "set_line_spacing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "autowrap_mode"),
        JS_NewCFunction(ctx, text_mesh_class_get_autowrap_mode, "get_autowrap_mode", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_autowrap_mode, "set_autowrap_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "justification_flags"),
        JS_NewCFunction(ctx, text_mesh_class_get_justification_flags, "get_justification_flags", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_justification_flags, "set_justification_flags", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pixel_size"),
        JS_NewCFunction(ctx, text_mesh_class_get_pixel_size, "get_pixel_size", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_pixel_size, "set_pixel_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "curve_step"),
        JS_NewCFunction(ctx, text_mesh_class_get_curve_step, "get_curve_step", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_curve_step, "set_curve_step", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth"),
        JS_NewCFunction(ctx, text_mesh_class_get_depth, "get_depth", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_depth, "set_depth", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "width"),
        JS_NewCFunction(ctx, text_mesh_class_get_width, "get_width", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_width, "set_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, text_mesh_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, text_mesh_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_text_direction, "set_text_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, text_mesh_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "structured_text_bidi_override"),
        JS_NewCFunction(ctx, text_mesh_class_get_structured_text_bidi_override, "get_structured_text_bidi_override", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_structured_text_bidi_override, "set_structured_text_bidi_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "structured_text_bidi_override_options"),
        JS_NewCFunction(ctx, text_mesh_class_get_structured_text_bidi_override_options, "get_structured_text_bidi_override_options", 0),
        JS_NewCFunction(ctx, text_mesh_class_set_structured_text_bidi_override_options, "set_structured_text_bidi_override_options", 1),
        JS_PROP_GETSET
    );
	
}

static void define_text_mesh_enum(JSContext *ctx, JSValue proto) {
}

static int js_text_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TextMesh::__class_id);
	classes["TextMesh"] = TextMesh::__class_id;
	class_id_list.insert(TextMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextMesh::__class_id, &text_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PrimitiveMesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextMesh::__class_id, proto);

	define_text_mesh_property(ctx, proto);
	define_text_mesh_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_mesh_class_proto_funcs, _countof(text_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, text_mesh_class_constructor, "TextMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_text_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/primitive_mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextMesh");
	return m;
}

JSModuleDef *js_init_text_mesh_module(JSContext *ctx) {
	return _js_init_text_mesh_module(ctx, "@godot/classes/text_mesh");
}

void register_text_mesh() {
	TextMesh::__init_js_class_id();
	js_init_text_mesh_module(ctx);
}