
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_playback_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef video_stream_playback_class_def = {
	"VideoStreamPlayback",
	.finalizer = video_stream_playback_class_finalizer
};

static JSValue video_stream_playback_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VideoStreamPlayback::__class_id);
	if (JS_IsException(obj))
		return obj;

	VideoStreamPlayback *video_stream_playback_class;
	if (argc == 1) 
		video_stream_playback_class = static_cast<VideoStreamPlayback *>(Variant(*argv).operator Object *());
	else 
		video_stream_playback_class = memnew(VideoStreamPlayback);
	if (!video_stream_playback_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, video_stream_playback_class);
	return obj;
}
static JSValue video_stream_playback_class_mix_audio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&VideoStreamPlayback::mix_audio, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry video_stream_playback_class_proto_funcs[] = {
	JS_CFUNC_DEF("mix_audio", 3, &video_stream_playback_class_mix_audio),
};

static void define_video_stream_playback_property(JSContext *ctx, JSValue proto) {
	
}

static void define_video_stream_playback_enum(JSContext *ctx, JSValue proto) {
}

static int js_video_stream_playback_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VideoStreamPlayback"] = VideoStreamPlayback::__class_id;
	class_id_list.insert(VideoStreamPlayback::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VideoStreamPlayback::__class_id, &video_stream_playback_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VideoStreamPlayback::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStreamPlayback::__class_id, proto);

	define_video_stream_playback_property(ctx, proto);
	define_video_stream_playback_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, video_stream_playback_class_proto_funcs, _countof(video_stream_playback_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, video_stream_playback_class_constructor, "VideoStreamPlayback", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VideoStreamPlayback", ctor);

	return 0;
}

JSModuleDef *_js_init_video_stream_playback_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_playback_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStreamPlayback");
	return m;
}

JSModuleDef *js_init_video_stream_playback_module(JSContext *ctx) {
	return _js_init_video_stream_playback_module(ctx, "@godot/classes/video_stream_playback");
}

void register_video_stream_playback() {
	VideoStreamPlayback::__init_js_class_id();
	js_init_video_stream_playback_module(ctx);
}