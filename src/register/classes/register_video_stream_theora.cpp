
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_theora.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_theora_class_finalizer(JSRuntime *rt, JSValue val) {
	VideoStreamTheora *video_stream_theora = static_cast<VideoStreamTheora *>(JS_GetOpaque(val, VideoStreamTheora::__class_id));
	if (video_stream_theora)
		VideoStreamTheora::free(nullptr, video_stream_theora);
}

static JSClassDef video_stream_theora_class_def = {
	"VideoStreamTheora",
	.finalizer = video_stream_theora_class_finalizer
};

static JSValue video_stream_theora_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VideoStreamTheora *video_stream_theora_class;
	JSValue obj = JS_NewObjectClass(ctx, VideoStreamTheora::__class_id);
	if (JS_IsException(obj))
		return obj;
	video_stream_theora_class = memnew(VideoStreamTheora);
	if (!video_stream_theora_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, video_stream_theora_class);
	return obj;
}

static int js_video_stream_theora_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VideoStreamTheora::__class_id);
	classes["VideoStreamTheora"] = VideoStreamTheora::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VideoStreamTheora::__class_id, &video_stream_theora_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VideoStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStreamTheora::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, video_stream_theora_class_constructor, "VideoStreamTheora", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VideoStreamTheora", ctor);

	return 0;
}

JSModuleDef *_js_init_video_stream_theora_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_theora_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStreamTheora");
	return m;
}

JSModuleDef *js_init_video_stream_theora_module(JSContext *ctx) {
	return _js_init_video_stream_theora_module(ctx, "godot/classes/video_stream_theora");
}

void register_video_stream_theora() {
	js_init_video_stream_theora_module(ctx);
}