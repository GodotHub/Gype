
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_class_finalizer(JSRuntime *rt, JSValue val) {
	VideoStream *video_stream = static_cast<VideoStream *>(JS_GetOpaque(val, VideoStream::__class_id));
	if (video_stream)
		VideoStream::free(nullptr, video_stream);
}

static JSClassDef video_stream_class_def = {
	"VideoStream",
	.finalizer = video_stream_class_finalizer
};

static JSValue video_stream_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VideoStream *video_stream_class;
	JSValue obj = JS_NewObjectClass(ctx, VideoStream::__class_id);
	if (JS_IsException(obj))
		return obj;
	video_stream_class = memnew(VideoStream);
	if (!video_stream_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, video_stream_class);
	return obj;
}
static JSValue video_stream_class_set_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VideoStream::set_file, VideoStream::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue video_stream_class_get_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&VideoStream::get_file, VideoStream::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry video_stream_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_file", 1, &video_stream_class_set_file),
	JS_CFUNC_DEF("get_file", 0, &video_stream_class_get_file),
};

static int js_video_stream_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VideoStream::__class_id);
	classes["VideoStream"] = VideoStream::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VideoStream::__class_id, &video_stream_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStream::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, video_stream_class_proto_funcs, _countof(video_stream_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, video_stream_class_constructor, "VideoStream", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VideoStream", ctor);

	return 0;
}

JSModuleDef *_js_init_video_stream_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStream");
	return m;
}

JSModuleDef *js_init_video_stream_module(JSContext *ctx) {
	return _js_init_video_stream_module(ctx, "godot/classes/video_stream");
}

void register_video_stream() {
	js_init_video_stream_module(ctx);
}