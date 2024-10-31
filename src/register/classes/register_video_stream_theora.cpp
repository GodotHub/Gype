
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/video_stream_theora.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_theora_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef video_stream_theora_class_def = {
	"VideoStreamTheora",
	.finalizer = video_stream_theora_class_finalizer
};

static JSValue video_stream_theora_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VideoStreamTheora::__class_id);
	if (JS_IsException(obj))
		return obj;

	VideoStreamTheora *video_stream_theora_class;
	if (argc == 1) 
		video_stream_theora_class = static_cast<VideoStreamTheora *>(Variant(*argv).operator Object *());
	else 
		video_stream_theora_class = memnew(VideoStreamTheora);
	if (!video_stream_theora_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, video_stream_theora_class);
	return obj;
}

static void define_video_stream_theora_property(JSContext *ctx, JSValue proto) {
	
}

static void define_video_stream_theora_enum(JSContext *ctx, JSValue proto) {
}

static int js_video_stream_theora_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VideoStreamTheora"] = VideoStreamTheora::__class_id;
	class_id_list.insert(VideoStreamTheora::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VideoStreamTheora::__class_id, &video_stream_theora_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VideoStreamTheora::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VideoStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStreamTheora::__class_id, proto);

	define_video_stream_theora_property(ctx, proto);
	define_video_stream_theora_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, video_stream_theora_class_constructor, "VideoStreamTheora", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VideoStreamTheora", ctor);

	return 0;
}

JSModuleDef *_js_init_video_stream_theora_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/video_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_theora_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStreamTheora");
	return m;
}

JSModuleDef *js_init_video_stream_theora_module(JSContext *ctx) {
	return _js_init_video_stream_theora_module(ctx, "@godot/classes/video_stream_theora");
}

void register_video_stream_theora() {
	VideoStreamTheora::__init_js_class_id();
	js_init_video_stream_theora_module(ctx);
}