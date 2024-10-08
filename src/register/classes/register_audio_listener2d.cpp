
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_listener2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_listener2d_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioListener2D *audio_listener2d = static_cast<AudioListener2D *>(JS_GetOpaque(val, AudioListener2D::__class_id));
	if (audio_listener2d)
		AudioListener2D::free(nullptr, audio_listener2d);
}

static JSClassDef audio_listener2d_class_def = {
	"AudioListener2D",
	.finalizer = audio_listener2d_class_finalizer
};

static JSValue audio_listener2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioListener2D *audio_listener2d_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioListener2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_listener2d_class = memnew(AudioListener2D);
	if (!audio_listener2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_listener2d_class);
	return obj;
}
static JSValue audio_listener2d_class_make_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioListener2D::make_current, AudioListener2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_listener2d_class_clear_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioListener2D::clear_current, AudioListener2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_listener2d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioListener2D::is_current, AudioListener2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_listener2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("make_current", 0, &audio_listener2d_class_make_current),
	JS_CFUNC_DEF("clear_current", 0, &audio_listener2d_class_clear_current),
	JS_CFUNC_DEF("is_current", 0, &audio_listener2d_class_is_current),
};

static int js_audio_listener2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioListener2D::__class_id);
	classes["AudioListener2D"] = AudioListener2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioListener2D::__class_id, &audio_listener2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioListener2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_listener2d_class_proto_funcs, _countof(audio_listener2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_listener2d_class_constructor, "AudioListener2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioListener2D", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_listener2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_listener2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioListener2D");
	return m;
}

JSModuleDef *js_init_audio_listener2d_module(JSContext *ctx) {
	return _js_init_audio_listener2d_module(ctx, "godot/classes/audio_listener2d");
}

void register_audio_listener2d() {
	js_init_audio_listener2d_module(ctx);
}