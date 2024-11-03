
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_polyphonic.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_stream_polyphonic_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_stream_polyphonic_class_def = {
	"AudioStreamPolyphonic",
	.finalizer = audio_stream_polyphonic_class_finalizer
};

static JSValue audio_stream_polyphonic_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioStreamPolyphonic::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioStreamPolyphonic *audio_stream_polyphonic_class;
	if (argc == 1) 
		audio_stream_polyphonic_class = static_cast<AudioStreamPolyphonic *>(Variant(*argv).operator Object *());
	else 
		audio_stream_polyphonic_class = memnew(AudioStreamPolyphonic);
	if (!audio_stream_polyphonic_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_stream_polyphonic_class);
	return obj;
}
static JSValue audio_stream_polyphonic_class_set_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioStreamPolyphonic::set_polyphony, ctx, this_val, argc, argv);
};
static JSValue audio_stream_polyphonic_class_get_polyphony(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioStreamPolyphonic::get_polyphony, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_stream_polyphonic_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polyphony", 1, &audio_stream_polyphonic_class_set_polyphony),
	JS_CFUNC_DEF("get_polyphony", 0, &audio_stream_polyphonic_class_get_polyphony),
};

static void define_audio_stream_polyphonic_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "polyphony"),
        JS_NewCFunction(ctx, audio_stream_polyphonic_class_get_polyphony, "get_polyphony", 0),
        JS_NewCFunction(ctx, audio_stream_polyphonic_class_set_polyphony, "set_polyphony", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_stream_polyphonic_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_stream_polyphonic_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioStreamPolyphonic"] = AudioStreamPolyphonic::__class_id;
	class_id_list.insert(AudioStreamPolyphonic::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioStreamPolyphonic::__class_id, &audio_stream_polyphonic_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioStreamPolyphonic::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioStream::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioStreamPolyphonic::__class_id, proto);

	define_audio_stream_polyphonic_property(ctx, proto);
	define_audio_stream_polyphonic_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_stream_polyphonic_class_proto_funcs, _countof(audio_stream_polyphonic_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_stream_polyphonic_class_constructor, "AudioStreamPolyphonic", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AudioStreamPolyphonic", ctor);
	constructors[AudioStreamPolyphonic::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_audio_stream_polyphonic_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/audio_stream';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_stream_polyphonic_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioStreamPolyphonic");
	return m;
}

JSModuleDef *js_init_audio_stream_polyphonic_module(JSContext *ctx) {
	return _js_init_audio_stream_polyphonic_module(ctx, "@godot/classes/audio_stream_polyphonic");
}

void register_audio_stream_polyphonic() {
	AudioStreamPolyphonic::__init_js_class_id();
	js_init_audio_stream_polyphonic_module(ctx);
}