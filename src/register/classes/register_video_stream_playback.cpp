
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	VideoStreamPlayback *video_stream_playback = static_cast<VideoStreamPlayback *>(JS_GetOpaque(val, VideoStreamPlayback::__class_id));
	if (video_stream_playback)
		VideoStreamPlayback::free(nullptr, video_stream_playback);
}

static JSClassDef video_stream_playback_class_def = {
	"VideoStreamPlayback",
	.finalizer = video_stream_playback_class_finalizer
};

static JSValue video_stream_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VideoStreamPlayback *video_stream_playback_class;
	JSValue obj = JS_NewObjectClass(ctx, VideoStreamPlayback::__class_id);
	if (JS_IsException(obj))
		return obj;
	video_stream_playback_class = memnew(VideoStreamPlayback);
	if (!video_stream_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, video_stream_playback_class);
	return obj;
}
static JSValue video_stream_playback_class_mix_audio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&VideoStreamPlayback::mix_audio, VideoStreamPlayback::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry video_stream_playback_class_proto_funcs[] = {
	JS_CFUNC_DEF("mix_audio", 3, &video_stream_playback_class_mix_audio),
};

static int js_video_stream_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VideoStreamPlayback::__class_id);
	classes["VideoStreamPlayback"] = VideoStreamPlayback::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VideoStreamPlayback::__class_id, &video_stream_playback_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStreamPlayback::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, video_stream_playback_class_proto_funcs, _countof(video_stream_playback_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, video_stream_playback_class_constructor, "VideoStreamPlayback", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VideoStreamPlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_video_stream_playback_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStreamPlayback");
	return m;
}

JSModuleDef *js_init_video_stream_playback_module(JSContext *ctx) {
	return _js_init_video_stream_playback_module(ctx, "godot/classes/video_stream_playback");
}

void register_video_stream_playback() {
	js_init_video_stream_playback_module(ctx);
}