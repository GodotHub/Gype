
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_listener3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_listener3d_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioListener3D *audio_listener3d = static_cast<AudioListener3D *>(JS_GetOpaque(val, AudioListener3D::__class_id));
	if (audio_listener3d)
		AudioListener3D::free(nullptr, audio_listener3d);
}

static JSClassDef audio_listener3d_class_def = {
	"AudioListener3D",
	.finalizer = audio_listener3d_class_finalizer
};

static JSValue audio_listener3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioListener3D *audio_listener3d_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioListener3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_listener3d_class = memnew(AudioListener3D);
	if (!audio_listener3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_listener3d_class);
	return obj;
}
static JSValue audio_listener3d_class_make_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioListener3D::make_current, AudioListener3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_listener3d_class_clear_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AudioListener3D::clear_current, AudioListener3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue audio_listener3d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioListener3D::is_current, AudioListener3D::__class_id, ctx, this_val, argv);
};
static JSValue audio_listener3d_class_get_listener_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AudioListener3D::get_listener_transform, AudioListener3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry audio_listener3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("make_current", 0, &audio_listener3d_class_make_current),
	JS_CFUNC_DEF("clear_current", 0, &audio_listener3d_class_clear_current),
	JS_CFUNC_DEF("is_current", 0, &audio_listener3d_class_is_current),
	JS_CFUNC_DEF("get_listener_transform", 0, &audio_listener3d_class_get_listener_transform),
};

static int js_audio_listener3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioListener3D::__class_id);
	classes["AudioListener3D"] = AudioListener3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioListener3D::__class_id, &audio_listener3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioListener3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_listener3d_class_proto_funcs, _countof(audio_listener3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, audio_listener3d_class_constructor, "AudioListener3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioListener3D", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_listener3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_listener3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioListener3D");
	return m;
}

JSModuleDef *js_init_audio_listener3d_module(JSContext *ctx) {
	return _js_init_audio_listener3d_module(ctx, "godot/classes/audio_listener3d");
}

void register_audio_listener3d() {
	js_init_audio_listener3d_module(ctx);
}