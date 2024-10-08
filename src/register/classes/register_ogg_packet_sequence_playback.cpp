
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void ogg_packet_sequence_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	OggPacketSequencePlayback *ogg_packet_sequence_playback = static_cast<OggPacketSequencePlayback *>(JS_GetOpaque(val, OggPacketSequencePlayback::__class_id));
	if (ogg_packet_sequence_playback)
		OggPacketSequencePlayback::free(nullptr, ogg_packet_sequence_playback);
}

static JSClassDef ogg_packet_sequence_playback_class_def = {
	"OggPacketSequencePlayback",
	.finalizer = ogg_packet_sequence_playback_class_finalizer
};

static JSValue ogg_packet_sequence_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OggPacketSequencePlayback *ogg_packet_sequence_playback_class;
	JSValue obj = JS_NewObjectClass(ctx, OggPacketSequencePlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	ogg_packet_sequence_playback_class = memnew(OggPacketSequencePlayback);
	if (!ogg_packet_sequence_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, ogg_packet_sequence_playback_class);
	return obj;
}

static int js_ogg_packet_sequence_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OggPacketSequencePlayback::__class_id);
	classes["OggPacketSequencePlayback"] = OggPacketSequencePlayback::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OggPacketSequencePlayback::__class_id, &ogg_packet_sequence_playback_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OggPacketSequencePlayback::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, ogg_packet_sequence_playback_class_constructor, "OggPacketSequencePlayback", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OggPacketSequencePlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_ogg_packet_sequence_playback_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ogg_packet_sequence_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OggPacketSequencePlayback");
	return m;
}

JSModuleDef *js_init_ogg_packet_sequence_playback_module(JSContext *ctx) {
	return _js_init_ogg_packet_sequence_playback_module(ctx, "godot/classes/ogg_packet_sequence_playback");
}

void register_ogg_packet_sequence_playback() {
	js_init_ogg_packet_sequence_playback_module(ctx);
}