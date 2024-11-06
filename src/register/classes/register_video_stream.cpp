
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void video_stream_class_finalizer(JSRuntime *rt, JSValue val) {
	VideoStream *video_stream = static_cast<VideoStream *>(JS_GetOpaque(val, VideoStream::__class_id));
	if (video_stream)
		memdelete(video_stream);
}

static JSClassDef video_stream_class_def = {
	"VideoStream",
	.finalizer = video_stream_class_finalizer
};

static JSValue video_stream_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VideoStream::__class_id);
	if (JS_IsException(obj))
		return obj;

	VideoStream *video_stream_class;
	if (argc == 1) 
		video_stream_class = static_cast<VideoStream *>(Variant(*argv).operator Object *());
	else 
		video_stream_class = memnew(VideoStream);
	if (!video_stream_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, video_stream_class);
	return obj;
}
static JSValue video_stream_class_set_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VideoStream::set_file, ctx, this_val, argc, argv);
};
static JSValue video_stream_class_get_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&VideoStream::get_file, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry video_stream_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_file", 1, &video_stream_class_set_file),
	JS_CFUNC_DEF("get_file", 0, &video_stream_class_get_file),
};

static void define_video_stream_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "file"),
        JS_NewCFunction(ctx, video_stream_class_get_file, "get_file", 0),
        JS_NewCFunction(ctx, video_stream_class_set_file, "set_file", 1),
        JS_PROP_GETSET
    );
	
}

static void define_video_stream_enum(JSContext *ctx, JSValue proto) {
}

static int js_video_stream_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VideoStream"] = VideoStream::__class_id;
	class_id_list.insert(VideoStream::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VideoStream::__class_id, &video_stream_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VideoStream::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VideoStream::__class_id, proto);

	define_video_stream_property(ctx, proto);
	define_video_stream_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, video_stream_class_proto_funcs, _countof(video_stream_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, video_stream_class_constructor, "VideoStream", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VideoStream", ctor);
	constructors[VideoStream::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_video_stream_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_video_stream_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VideoStream");
	return m;
}

JSModuleDef *js_init_video_stream_module(JSContext *ctx) {
	return _js_init_video_stream_module(ctx, "@godot/classes/video_stream");
}

void register_video_stream() {
	VideoStream::__init_js_class_id();
	js_init_video_stream_module(ctx);
}