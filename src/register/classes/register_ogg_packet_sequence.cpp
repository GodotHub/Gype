
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ogg_packet_sequence_class_finalizer(JSRuntime *rt, JSValue val) {
	OggPacketSequence *ogg_packet_sequence = static_cast<OggPacketSequence *>(JS_GetOpaque(val, OggPacketSequence::__class_id));
	if (ogg_packet_sequence)
		OggPacketSequence::free(nullptr, ogg_packet_sequence);
}

static JSClassDef ogg_packet_sequence_class_def = {
	"OggPacketSequence",
	.finalizer = ogg_packet_sequence_class_finalizer
};

static JSValue ogg_packet_sequence_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OggPacketSequence *ogg_packet_sequence_class;
	JSValue obj = JS_NewObjectClass(ctx, OggPacketSequence::__class_id);
	if (JS_IsException(obj))
		return obj;
	ogg_packet_sequence_class = memnew(OggPacketSequence);
	if (!ogg_packet_sequence_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, ogg_packet_sequence_class);
	return obj;
}
static JSValue ogg_packet_sequence_class_set_packet_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OggPacketSequence::set_packet_data, OggPacketSequence::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ogg_packet_sequence_class_get_packet_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OggPacketSequence::get_packet_data, OggPacketSequence::__class_id, ctx, this_val, argv);
};
static JSValue ogg_packet_sequence_class_set_packet_granule_positions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OggPacketSequence::set_packet_granule_positions, OggPacketSequence::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ogg_packet_sequence_class_get_packet_granule_positions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OggPacketSequence::get_packet_granule_positions, OggPacketSequence::__class_id, ctx, this_val, argv);
};
static JSValue ogg_packet_sequence_class_set_sampling_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OggPacketSequence::set_sampling_rate, OggPacketSequence::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ogg_packet_sequence_class_get_sampling_rate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OggPacketSequence::get_sampling_rate, OggPacketSequence::__class_id, ctx, this_val, argv);
};
static JSValue ogg_packet_sequence_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OggPacketSequence::get_length, OggPacketSequence::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry ogg_packet_sequence_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_packet_data", 1, &ogg_packet_sequence_class_set_packet_data),
	JS_CFUNC_DEF("get_packet_data", 0, &ogg_packet_sequence_class_get_packet_data),
	JS_CFUNC_DEF("set_packet_granule_positions", 1, &ogg_packet_sequence_class_set_packet_granule_positions),
	JS_CFUNC_DEF("get_packet_granule_positions", 0, &ogg_packet_sequence_class_get_packet_granule_positions),
	JS_CFUNC_DEF("set_sampling_rate", 1, &ogg_packet_sequence_class_set_sampling_rate),
	JS_CFUNC_DEF("get_sampling_rate", 0, &ogg_packet_sequence_class_get_sampling_rate),
	JS_CFUNC_DEF("get_length", 0, &ogg_packet_sequence_class_get_length),
};

static int js_ogg_packet_sequence_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OggPacketSequence::__class_id);
	classes["OggPacketSequence"] = OggPacketSequence::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OggPacketSequence::__class_id, &ogg_packet_sequence_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OggPacketSequence::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, ogg_packet_sequence_class_proto_funcs, _countof(ogg_packet_sequence_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, ogg_packet_sequence_class_constructor, "OggPacketSequence", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OggPacketSequence", ctor);

	return 0;
}

JSModuleDef *_js_init_ogg_packet_sequence_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ogg_packet_sequence_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OggPacketSequence");
	return m;
}

JSModuleDef *js_init_ogg_packet_sequence_module(JSContext *ctx) {
	return _js_init_ogg_packet_sequence_module(ctx, "godot/classes/ogg_packet_sequence");
}

void register_ogg_packet_sequence() {
	js_init_ogg_packet_sequence_module(ctx);
}