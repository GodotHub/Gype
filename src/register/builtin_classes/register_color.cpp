
#include "register/builtin_classes/register_builtin_classes.h"
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.hpp"
#include "utils/str_helper.hpp"
#include "utils/quickjs_helper.hpp"
#include "utils/variant_helper.hpp"
#include <godot_cpp/variant/color.hpp>

using namespace godot;

static void color_class_finalizer(JSRuntime *rt, JSValue val) {
	JSClassID class_id = classes["Color"];
	Color *color = static_cast<Color *>(JS_GetOpaque(val, class_id));
	if (color)
		memfree(color);
}

static JSClassDef color_class_def = {
	"Color",
	.finalizer = color_class_finalizer
};

static JSValue color_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSClassID class_id = classes["Color"];
	JSValue obj = JS_NewObjectClass(ctx, class_id);
	if (JS_IsException(obj))
		return obj;

	Color *color_class = nullptr;
	
	if (argc == 0 ) {
		color_class = memnew(Color());
	}
	
	if (argc == 1 &&VariantAdapter(argv[0]).get_type() == Variant::Type::COLOR) {
		Color v0 = VariantAdapter(argv[0]);
		color_class = memnew(Color(v0));
	}
	
	if (argc == 2 &&VariantAdapter(argv[0]).get_type() == Variant::Type::COLOR&&(VariantAdapter(argv[1]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[1]).get_type() == Variant::Type::INT)) {
		Color v0 = VariantAdapter(argv[0]);
		float v1 = VariantAdapter(argv[1]);
		color_class = memnew(Color(v0,v1));
	}
	
	if (argc == 3 &&(VariantAdapter(argv[0]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[0]).get_type() == Variant::Type::INT)&&(VariantAdapter(argv[1]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[1]).get_type() == Variant::Type::INT)&&(VariantAdapter(argv[2]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[2]).get_type() == Variant::Type::INT)) {
		float v0 = VariantAdapter(argv[0]);
		float v1 = VariantAdapter(argv[1]);
		float v2 = VariantAdapter(argv[2]);
		color_class = memnew(Color(v0,v1,v2));
	}
	
	if (argc == 4 &&(VariantAdapter(argv[0]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[0]).get_type() == Variant::Type::INT)&&(VariantAdapter(argv[1]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[1]).get_type() == Variant::Type::INT)&&(VariantAdapter(argv[2]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[2]).get_type() == Variant::Type::INT)&&(VariantAdapter(argv[3]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[3]).get_type() == Variant::Type::INT)) {
		float v0 = VariantAdapter(argv[0]);
		float v1 = VariantAdapter(argv[1]);
		float v2 = VariantAdapter(argv[2]);
		float v3 = VariantAdapter(argv[3]);
		color_class = memnew(Color(v0,v1,v2,v3));
	}
	
	if (argc == 1 &&VariantAdapter(argv[0]).get_type() == Variant::Type::STRING) {
		String v0 = VariantAdapter(argv[0]);
		color_class = memnew(Color(v0));
	}
	
	if (argc == 2 &&VariantAdapter(argv[0]).get_type() == Variant::Type::STRING&&(VariantAdapter(argv[1]).get_type() == Variant::Type::FLOAT||VariantAdapter(argv[1]).get_type() == Variant::Type::INT)) {
		String v0 = VariantAdapter(argv[0]);
		float v1 = VariantAdapter(argv[1]);
		color_class = memnew(Color(v0,v1));
	}
	

	if (!color_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, color_class);
	return obj;
}
static JSValue color_class_to_argb32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_argb32, ctx, this_val, argc, argv);
};
static JSValue color_class_to_abgr32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_abgr32, ctx, this_val, argc, argv);
};
static JSValue color_class_to_rgba32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_rgba32, ctx, this_val, argc, argv);
};
static JSValue color_class_to_argb64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_argb64, ctx, this_val, argc, argv);
};
static JSValue color_class_to_abgr64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_abgr64, ctx, this_val, argc, argv);
};
static JSValue color_class_to_rgba64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_rgba64, ctx, this_val, argc, argv);
};
static JSValue color_class_to_html(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::to_html, ctx, this_val, argc, argv);
};
static JSValue color_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::clamp, ctx, this_val, argc, argv);
};
static JSValue color_class_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::inverted, ctx, this_val, argc, argv);
};
static JSValue color_class_lerp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::lerp, ctx, this_val, argc, argv);
};
static JSValue color_class_lightened(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::lightened, ctx, this_val, argc, argv);
};
static JSValue color_class_darkened(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::darkened, ctx, this_val, argc, argv);
};
static JSValue color_class_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::blend, ctx, this_val, argc, argv);
};
static JSValue color_class_get_luminance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::get_luminance, ctx, this_val, argc, argv);
};
static JSValue color_class_srgb_to_linear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::srgb_to_linear, ctx, this_val, argc, argv);
};
static JSValue color_class_linear_to_srgb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::linear_to_srgb, ctx, this_val, argc, argv);
};
static JSValue color_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Color::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue color_class_hex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::hex, ctx, this_val, argc, argv);
};

static JSValue color_class_hex64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::hex64, ctx, this_val, argc, argv);
};

static JSValue color_class_html(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::html, ctx, this_val, argc, argv);
};

static JSValue color_class_html_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::html_is_valid, ctx, this_val, argc, argv);
};

static JSValue color_class_from_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::from_string, ctx, this_val, argc, argv);
};

static JSValue color_class_from_hsv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::from_hsv, ctx, this_val, argc, argv);
};


static JSValue color_class_from_rgbe9995(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Color::from_rgbe9995, ctx, this_val, argc, argv);
};

static JSValue color_class_get_r(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.r);
}
static JSValue color_class_set_r(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.r = VariantAdapter(*argv);
	return JS_UNDEFINED;
}
static JSValue color_class_get_g(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.g);
}
static JSValue color_class_set_g(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.g = VariantAdapter(*argv);
	return JS_UNDEFINED;
}
static JSValue color_class_get_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.b);
}
static JSValue color_class_set_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.b = VariantAdapter(*argv);
	return JS_UNDEFINED;
}
static JSValue color_class_get_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.a);
}
static JSValue color_class_set_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.a = VariantAdapter(*argv);
	return JS_UNDEFINED;
}
static JSValue color_class_get_r8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_r8());
}
static JSValue color_class_set_r8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_r8(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static JSValue color_class_get_g8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_g8());
}
static JSValue color_class_set_g8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_g8(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static JSValue color_class_get_b8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_b8());
}
static JSValue color_class_set_b8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_b8(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static JSValue color_class_get_a8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_a8());
}
static JSValue color_class_set_a8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_a8(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static JSValue color_class_get_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_h());
}
static JSValue color_class_set_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_h(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static JSValue color_class_get_s(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_s());
}
static JSValue color_class_set_s(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_s(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static JSValue color_class_get_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	return VariantAdapter(val.get_v());
}
static JSValue color_class_set_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Color &val = *reinterpret_cast<Color *>(JS_GetOpaque(this_val, classes["Color"]));
	val.set_v(VariantAdapter(*argv));
	return JS_UNDEFINED;
}
static const JSCFunctionListEntry color_class_proto_funcs[] = {
	JS_CFUNC_DEF("to_argb32", 0, &color_class_to_argb32),
	JS_CFUNC_DEF("to_abgr32", 0, &color_class_to_abgr32),
	JS_CFUNC_DEF("to_rgba32", 0, &color_class_to_rgba32),
	JS_CFUNC_DEF("to_argb64", 0, &color_class_to_argb64),
	JS_CFUNC_DEF("to_abgr64", 0, &color_class_to_abgr64),
	JS_CFUNC_DEF("to_rgba64", 0, &color_class_to_rgba64),
	JS_CFUNC_DEF("to_html", 1, &color_class_to_html),
	JS_CFUNC_DEF("clamp", 2, &color_class_clamp),
	JS_CFUNC_DEF("inverted", 0, &color_class_inverted),
	JS_CFUNC_DEF("lerp", 2, &color_class_lerp),
	JS_CFUNC_DEF("lightened", 1, &color_class_lightened),
	JS_CFUNC_DEF("darkened", 1, &color_class_darkened),
	JS_CFUNC_DEF("blend", 1, &color_class_blend),
	JS_CFUNC_DEF("get_luminance", 0, &color_class_get_luminance),
	JS_CFUNC_DEF("srgb_to_linear", 0, &color_class_srgb_to_linear),
	JS_CFUNC_DEF("linear_to_srgb", 0, &color_class_linear_to_srgb),
	JS_CFUNC_DEF("is_equal_approx", 1, &color_class_is_equal_approx),
};
static const JSCFunctionListEntry color_class_static_funcs[] = {
	JS_CFUNC_DEF("hex", 1, &color_class_hex),
	JS_CFUNC_DEF("hex64", 1, &color_class_hex64),
	JS_CFUNC_DEF("html", 1, &color_class_html),
	JS_CFUNC_DEF("html_is_valid", 1, &color_class_html_is_valid),
	JS_CFUNC_DEF("from_string", 2, &color_class_from_string),
	JS_CFUNC_DEF("from_hsv", 4, &color_class_from_hsv),
	JS_CFUNC_DEF("from_rgbe9995", 1, &color_class_from_rgbe9995),
};
void define_color_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "r"),
        JS_NewCFunction(ctx, color_class_get_r, "get_r", 0),
        JS_NewCFunction(ctx, color_class_set_r, "set_r", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "g"),
        JS_NewCFunction(ctx, color_class_get_g, "get_g", 0),
        JS_NewCFunction(ctx, color_class_set_g, "set_g", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "b"),
        JS_NewCFunction(ctx, color_class_get_b, "get_b", 0),
        JS_NewCFunction(ctx, color_class_set_b, "set_b", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "a"),
        JS_NewCFunction(ctx, color_class_get_a, "get_a", 0),
        JS_NewCFunction(ctx, color_class_set_a, "set_a", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "r8"),
        JS_NewCFunction(ctx, color_class_get_r8, "get_r8", 0),
        JS_NewCFunction(ctx, color_class_set_r8, "set_r8", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "g8"),
        JS_NewCFunction(ctx, color_class_get_g8, "get_g8", 0),
        JS_NewCFunction(ctx, color_class_set_g8, "set_g8", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "b8"),
        JS_NewCFunction(ctx, color_class_get_b8, "get_b8", 0),
        JS_NewCFunction(ctx, color_class_set_b8, "set_b8", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "a8"),
        JS_NewCFunction(ctx, color_class_get_a8, "get_a8", 0),
        JS_NewCFunction(ctx, color_class_set_a8, "set_a8", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "h"),
        JS_NewCFunction(ctx, color_class_get_h, "get_h", 0),
        JS_NewCFunction(ctx, color_class_set_h, "set_h", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "s"),
        JS_NewCFunction(ctx, color_class_get_s, "get_s", 0),
        JS_NewCFunction(ctx, color_class_set_s, "set_s", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "v"),
        JS_NewCFunction(ctx, color_class_get_v, "get_v", 0),
        JS_NewCFunction(ctx, color_class_set_v, "set_v", 1),
		JS_PROP_GETSET
    );
}
void define_color_constants(JSContext *ctx, JSValue ctor) {
	JS_DefinePropertyValueStr(ctx, ctor, "ALICE_BLUE", VariantAdapter(Color(0.941176, 0.972549, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ANTIQUE_WHITE", VariantAdapter(Color(0.980392, 0.921569, 0.843137, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "AQUA", VariantAdapter(Color(0, 1, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "AQUAMARINE", VariantAdapter(Color(0.498039, 1, 0.831373, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "AZURE", VariantAdapter(Color(0.941176, 1, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BEIGE", VariantAdapter(Color(0.960784, 0.960784, 0.862745, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BISQUE", VariantAdapter(Color(1, 0.894118, 0.768627, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BLACK", VariantAdapter(Color(0, 0, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BLANCHED_ALMOND", VariantAdapter(Color(1, 0.921569, 0.803922, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BLUE", VariantAdapter(Color(0, 0, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BLUE_VIOLET", VariantAdapter(Color(0.541176, 0.168627, 0.886275, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BROWN", VariantAdapter(Color(0.647059, 0.164706, 0.164706, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "BURLYWOOD", VariantAdapter(Color(0.870588, 0.721569, 0.529412, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CADET_BLUE", VariantAdapter(Color(0.372549, 0.619608, 0.627451, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CHARTREUSE", VariantAdapter(Color(0.498039, 1, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CHOCOLATE", VariantAdapter(Color(0.823529, 0.411765, 0.117647, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CORAL", VariantAdapter(Color(1, 0.498039, 0.313726, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CORNFLOWER_BLUE", VariantAdapter(Color(0.392157, 0.584314, 0.929412, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CORNSILK", VariantAdapter(Color(1, 0.972549, 0.862745, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CRIMSON", VariantAdapter(Color(0.862745, 0.0784314, 0.235294, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "CYAN", VariantAdapter(Color(0, 1, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_BLUE", VariantAdapter(Color(0, 0, 0.545098, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_CYAN", VariantAdapter(Color(0, 0.545098, 0.545098, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_GOLDENROD", VariantAdapter(Color(0.721569, 0.52549, 0.0431373, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_GRAY", VariantAdapter(Color(0.662745, 0.662745, 0.662745, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_GREEN", VariantAdapter(Color(0, 0.392157, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_KHAKI", VariantAdapter(Color(0.741176, 0.717647, 0.419608, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_MAGENTA", VariantAdapter(Color(0.545098, 0, 0.545098, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_OLIVE_GREEN", VariantAdapter(Color(0.333333, 0.419608, 0.184314, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_ORANGE", VariantAdapter(Color(1, 0.54902, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_ORCHID", VariantAdapter(Color(0.6, 0.196078, 0.8, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_RED", VariantAdapter(Color(0.545098, 0, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_SALMON", VariantAdapter(Color(0.913725, 0.588235, 0.478431, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_SEA_GREEN", VariantAdapter(Color(0.560784, 0.737255, 0.560784, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_SLATE_BLUE", VariantAdapter(Color(0.282353, 0.239216, 0.545098, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_SLATE_GRAY", VariantAdapter(Color(0.184314, 0.309804, 0.309804, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_TURQUOISE", VariantAdapter(Color(0, 0.807843, 0.819608, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DARK_VIOLET", VariantAdapter(Color(0.580392, 0, 0.827451, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DEEP_PINK", VariantAdapter(Color(1, 0.0784314, 0.576471, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DEEP_SKY_BLUE", VariantAdapter(Color(0, 0.74902, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DIM_GRAY", VariantAdapter(Color(0.411765, 0.411765, 0.411765, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DODGER_BLUE", VariantAdapter(Color(0.117647, 0.564706, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "FIREBRICK", VariantAdapter(Color(0.698039, 0.133333, 0.133333, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "FLORAL_WHITE", VariantAdapter(Color(1, 0.980392, 0.941176, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "FOREST_GREEN", VariantAdapter(Color(0.133333, 0.545098, 0.133333, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "FUCHSIA", VariantAdapter(Color(1, 0, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GAINSBORO", VariantAdapter(Color(0.862745, 0.862745, 0.862745, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GHOST_WHITE", VariantAdapter(Color(0.972549, 0.972549, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GOLD", VariantAdapter(Color(1, 0.843137, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GOLDENROD", VariantAdapter(Color(0.854902, 0.647059, 0.12549, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GRAY", VariantAdapter(Color(0.745098, 0.745098, 0.745098, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GREEN", VariantAdapter(Color(0, 1, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "GREEN_YELLOW", VariantAdapter(Color(0.678431, 1, 0.184314, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "HONEYDEW", VariantAdapter(Color(0.941176, 1, 0.941176, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "HOT_PINK", VariantAdapter(Color(1, 0.411765, 0.705882, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "INDIAN_RED", VariantAdapter(Color(0.803922, 0.360784, 0.360784, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "INDIGO", VariantAdapter(Color(0.294118, 0, 0.509804, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "IVORY", VariantAdapter(Color(1, 1, 0.941176, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "KHAKI", VariantAdapter(Color(0.941176, 0.901961, 0.54902, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LAVENDER", VariantAdapter(Color(0.901961, 0.901961, 0.980392, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LAVENDER_BLUSH", VariantAdapter(Color(1, 0.941176, 0.960784, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LAWN_GREEN", VariantAdapter(Color(0.486275, 0.988235, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LEMON_CHIFFON", VariantAdapter(Color(1, 0.980392, 0.803922, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_BLUE", VariantAdapter(Color(0.678431, 0.847059, 0.901961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_CORAL", VariantAdapter(Color(0.941176, 0.501961, 0.501961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_CYAN", VariantAdapter(Color(0.878431, 1, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_GOLDENROD", VariantAdapter(Color(0.980392, 0.980392, 0.823529, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_GRAY", VariantAdapter(Color(0.827451, 0.827451, 0.827451, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_GREEN", VariantAdapter(Color(0.564706, 0.933333, 0.564706, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_PINK", VariantAdapter(Color(1, 0.713726, 0.756863, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_SALMON", VariantAdapter(Color(1, 0.627451, 0.478431, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_SEA_GREEN", VariantAdapter(Color(0.12549, 0.698039, 0.666667, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_SKY_BLUE", VariantAdapter(Color(0.529412, 0.807843, 0.980392, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_SLATE_GRAY", VariantAdapter(Color(0.466667, 0.533333, 0.6, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_STEEL_BLUE", VariantAdapter(Color(0.690196, 0.768627, 0.870588, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIGHT_YELLOW", VariantAdapter(Color(1, 1, 0.878431, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIME", VariantAdapter(Color(0, 1, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LIME_GREEN", VariantAdapter(Color(0.196078, 0.803922, 0.196078, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LINEN", VariantAdapter(Color(0.980392, 0.941176, 0.901961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MAGENTA", VariantAdapter(Color(1, 0, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MAROON", VariantAdapter(Color(0.690196, 0.188235, 0.376471, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_AQUAMARINE", VariantAdapter(Color(0.4, 0.803922, 0.666667, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_BLUE", VariantAdapter(Color(0, 0, 0.803922, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_ORCHID", VariantAdapter(Color(0.729412, 0.333333, 0.827451, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_PURPLE", VariantAdapter(Color(0.576471, 0.439216, 0.858824, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_SEA_GREEN", VariantAdapter(Color(0.235294, 0.701961, 0.443137, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_SLATE_BLUE", VariantAdapter(Color(0.482353, 0.407843, 0.933333, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_SPRING_GREEN", VariantAdapter(Color(0, 0.980392, 0.603922, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_TURQUOISE", VariantAdapter(Color(0.282353, 0.819608, 0.8, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MEDIUM_VIOLET_RED", VariantAdapter(Color(0.780392, 0.0823529, 0.521569, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MIDNIGHT_BLUE", VariantAdapter(Color(0.0980392, 0.0980392, 0.439216, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MINT_CREAM", VariantAdapter(Color(0.960784, 1, 0.980392, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MISTY_ROSE", VariantAdapter(Color(1, 0.894118, 0.882353, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MOCCASIN", VariantAdapter(Color(1, 0.894118, 0.709804, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "NAVAJO_WHITE", VariantAdapter(Color(1, 0.870588, 0.678431, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "NAVY_BLUE", VariantAdapter(Color(0, 0, 0.501961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "OLD_LACE", VariantAdapter(Color(0.992157, 0.960784, 0.901961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "OLIVE", VariantAdapter(Color(0.501961, 0.501961, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "OLIVE_DRAB", VariantAdapter(Color(0.419608, 0.556863, 0.137255, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ORANGE", VariantAdapter(Color(1, 0.647059, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ORANGE_RED", VariantAdapter(Color(1, 0.270588, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ORCHID", VariantAdapter(Color(0.854902, 0.439216, 0.839216, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PALE_GOLDENROD", VariantAdapter(Color(0.933333, 0.909804, 0.666667, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PALE_GREEN", VariantAdapter(Color(0.596078, 0.984314, 0.596078, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PALE_TURQUOISE", VariantAdapter(Color(0.686275, 0.933333, 0.933333, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PALE_VIOLET_RED", VariantAdapter(Color(0.858824, 0.439216, 0.576471, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PAPAYA_WHIP", VariantAdapter(Color(1, 0.937255, 0.835294, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PEACH_PUFF", VariantAdapter(Color(1, 0.854902, 0.72549, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PERU", VariantAdapter(Color(0.803922, 0.521569, 0.247059, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PINK", VariantAdapter(Color(1, 0.752941, 0.796078, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PLUM", VariantAdapter(Color(0.866667, 0.627451, 0.866667, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "POWDER_BLUE", VariantAdapter(Color(0.690196, 0.878431, 0.901961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PURPLE", VariantAdapter(Color(0.627451, 0.12549, 0.941176, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "REBECCA_PURPLE", VariantAdapter(Color(0.4, 0.2, 0.6, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "RED", VariantAdapter(Color(1, 0, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ROSY_BROWN", VariantAdapter(Color(0.737255, 0.560784, 0.560784, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ROYAL_BLUE", VariantAdapter(Color(0.254902, 0.411765, 0.882353, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SADDLE_BROWN", VariantAdapter(Color(0.545098, 0.270588, 0.0745098, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SALMON", VariantAdapter(Color(0.980392, 0.501961, 0.447059, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SANDY_BROWN", VariantAdapter(Color(0.956863, 0.643137, 0.376471, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SEA_GREEN", VariantAdapter(Color(0.180392, 0.545098, 0.341176, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SEASHELL", VariantAdapter(Color(1, 0.960784, 0.933333, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SIENNA", VariantAdapter(Color(0.627451, 0.321569, 0.176471, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SILVER", VariantAdapter(Color(0.752941, 0.752941, 0.752941, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SKY_BLUE", VariantAdapter(Color(0.529412, 0.807843, 0.921569, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SLATE_BLUE", VariantAdapter(Color(0.415686, 0.352941, 0.803922, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SLATE_GRAY", VariantAdapter(Color(0.439216, 0.501961, 0.564706, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SNOW", VariantAdapter(Color(1, 0.980392, 0.980392, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "SPRING_GREEN", VariantAdapter(Color(0, 1, 0.498039, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "STEEL_BLUE", VariantAdapter(Color(0.27451, 0.509804, 0.705882, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "TAN", VariantAdapter(Color(0.823529, 0.705882, 0.54902, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "TEAL", VariantAdapter(Color(0, 0.501961, 0.501961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "THISTLE", VariantAdapter(Color(0.847059, 0.74902, 0.847059, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "TOMATO", VariantAdapter(Color(1, 0.388235, 0.278431, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "TRANSPARENT", VariantAdapter(Color(1, 1, 1, 0)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "TURQUOISE", VariantAdapter(Color(0.25098, 0.878431, 0.815686, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "VIOLET", VariantAdapter(Color(0.933333, 0.509804, 0.933333, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WEB_GRAY", VariantAdapter(Color(0.501961, 0.501961, 0.501961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WEB_GREEN", VariantAdapter(Color(0, 0.501961, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WEB_MAROON", VariantAdapter(Color(0.501961, 0, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WEB_PURPLE", VariantAdapter(Color(0.501961, 0, 0.501961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WHEAT", VariantAdapter(Color(0.960784, 0.870588, 0.701961, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WHITE", VariantAdapter(Color(1, 1, 1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "WHITE_SMOKE", VariantAdapter(Color(0.960784, 0.960784, 0.960784, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "YELLOW", VariantAdapter(Color(1, 1, 0, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "YELLOW_GREEN", VariantAdapter(Color(0.603922, 0.803922, 0.196078, 1)), JS_PROP_ENUMERABLE);
}

static int js_color_class_init(JSContext *ctx) {
	classes["Color"] = 0;
	classes["Color"] = JS_NewClassID(&classes["Color"]);
	JSClassID class_id = classes["Color"];

	class_id_list.insert(class_id);
	JS_NewClass(JS_GetRuntime(ctx), class_id, &color_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, class_id, proto);
	define_color_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_class_proto_funcs, _countof(color_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, color_class_constructor, "Color", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, color_class_static_funcs, _countof(color_class_static_funcs));
	define_color_constants(ctx, ctor);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Color", ctor);

	return 0;
}

void js_init_color_module(JSContext *ctx) {
	js_color_class_init(ctx);
}

void register_color() {
	js_init_color_module(ctx);
}