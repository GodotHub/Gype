
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ogg_packet_sequence_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef ogg_packet_sequence_playback_class_def = {
	"OggPacketSequencePlayback",
	.finalizer = ogg_packet_sequence_playback_class_finalizer
};

static JSValue ogg_packet_sequence_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OggPacketSequencePlayback::__class_id);
	if (JS_IsException(obj))
		return obj;

	OggPacketSequencePlayback *ogg_packet_sequence_playback_class;
	if (argc == 1) 
		ogg_packet_sequence_playback_class = static_cast<OggPacketSequencePlayback *>(Variant(*argv).operator Object *());
	else 
		ogg_packet_sequence_playback_class = memnew(OggPacketSequencePlayback);
	if (!ogg_packet_sequence_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, ogg_packet_sequence_playback_class);
	return obj;
}

static void define_ogg_packet_sequence_playback_property(JSContext *ctx, JSValue proto) {
	
}

static void define_ogg_packet_sequence_playback_enum(JSContext *ctx, JSValue proto) {
}

static int js_ogg_packet_sequence_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OggPacketSequencePlayback"] = OggPacketSequencePlayback::__class_id;
	class_id_list.insert(OggPacketSequencePlayback::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OggPacketSequencePlayback::__class_id, &ogg_packet_sequence_playback_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OggPacketSequencePlayback::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OggPacketSequencePlayback::__class_id, proto);

	define_ogg_packet_sequence_playback_property(ctx, proto);
	define_ogg_packet_sequence_playback_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, ogg_packet_sequence_playback_class_constructor, "OggPacketSequencePlayback", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OggPacketSequencePlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_ogg_packet_sequence_playback_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ogg_packet_sequence_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OggPacketSequencePlayback");
	return m;
}

JSModuleDef *js_init_ogg_packet_sequence_playback_module(JSContext *ctx) {
	return _js_init_ogg_packet_sequence_playback_module(ctx, "@godot/classes/ogg_packet_sequence_playback");
}

void register_ogg_packet_sequence_playback() {
	OggPacketSequencePlayback::__init_js_class_id();
	js_init_ogg_packet_sequence_playback_module(ctx);
}