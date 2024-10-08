
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void bit_map_class_finalizer(JSRuntime *rt, JSValue val) {
	BitMap *bit_map = static_cast<BitMap *>(JS_GetOpaque(val, BitMap::__class_id));
	if (bit_map)
		BitMap::free(nullptr, bit_map);
}

static JSClassDef bit_map_class_def = {
	"BitMap",
	.finalizer = bit_map_class_finalizer
};

static JSValue bit_map_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BitMap *bit_map_class;
	JSValue obj = JS_NewObjectClass(ctx, BitMap::__class_id);
	if (JS_IsException(obj))
		return obj;
	bit_map_class = memnew(BitMap);
	if (!bit_map_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, bit_map_class);
	return obj;
}
static JSValue bit_map_class_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::create, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_create_from_image_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::create_from_image_alpha, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_set_bitv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::set_bitv, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_set_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::set_bit, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_get_bitv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BitMap::get_bitv, BitMap::__class_id, ctx, this_val, argv);
};
static JSValue bit_map_class_get_bit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BitMap::get_bit, BitMap::__class_id, ctx, this_val, argv);
};
static JSValue bit_map_class_set_bit_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::set_bit_rect, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_get_true_bit_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BitMap::get_true_bit_count, BitMap::__class_id, ctx, this_val, argv);
};
static JSValue bit_map_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BitMap::get_size, BitMap::__class_id, ctx, this_val, argv);
};
static JSValue bit_map_class_resize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::resize, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_grow_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BitMap::grow_mask, BitMap::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bit_map_class_convert_to_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BitMap::convert_to_image, BitMap::__class_id, ctx, this_val, argv);
};
static JSValue bit_map_class_opaque_to_polygons(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BitMap::opaque_to_polygons, BitMap::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry bit_map_class_proto_funcs[] = {
	JS_CFUNC_DEF("create", 1, &bit_map_class_create),
	JS_CFUNC_DEF("create_from_image_alpha", 2, &bit_map_class_create_from_image_alpha),
	JS_CFUNC_DEF("set_bitv", 2, &bit_map_class_set_bitv),
	JS_CFUNC_DEF("set_bit", 3, &bit_map_class_set_bit),
	JS_CFUNC_DEF("get_bitv", 1, &bit_map_class_get_bitv),
	JS_CFUNC_DEF("get_bit", 2, &bit_map_class_get_bit),
	JS_CFUNC_DEF("set_bit_rect", 2, &bit_map_class_set_bit_rect),
	JS_CFUNC_DEF("get_true_bit_count", 0, &bit_map_class_get_true_bit_count),
	JS_CFUNC_DEF("get_size", 0, &bit_map_class_get_size),
	JS_CFUNC_DEF("resize", 1, &bit_map_class_resize),
	JS_CFUNC_DEF("grow_mask", 2, &bit_map_class_grow_mask),
	JS_CFUNC_DEF("convert_to_image", 0, &bit_map_class_convert_to_image),
	JS_CFUNC_DEF("opaque_to_polygons", 2, &bit_map_class_opaque_to_polygons),
};

static int js_bit_map_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BitMap::__class_id);
	classes["BitMap"] = BitMap::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BitMap::__class_id, &bit_map_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BitMap::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, bit_map_class_proto_funcs, _countof(bit_map_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, bit_map_class_constructor, "BitMap", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BitMap", ctor);

	return 0;
}

JSModuleDef *_js_init_bit_map_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_bit_map_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BitMap");
	return m;
}

JSModuleDef *js_init_bit_map_module(JSContext *ctx) {
	return _js_init_bit_map_module(ctx, "godot/classes/bit_map");
}

void register_bit_map() {
	js_init_bit_map_module(ctx);
}