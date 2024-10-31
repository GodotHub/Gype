
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_effect_amplify.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_effect_amplify_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_effect_amplify_class_def = {
	"AudioEffectAmplify",
	.finalizer = audio_effect_amplify_class_finalizer
};

static JSValue audio_effect_amplify_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioEffectAmplify::__class_id);
	if (JS_IsException(obj))
		return obj;

	AudioEffectAmplify *audio_effect_amplify_class;
	if (argc == 1) 
		audio_effect_amplify_class = static_cast<AudioEffectAmplify *>(Variant(*argv).operator Object *());
	else 
		audio_effect_amplify_class = memnew(AudioEffectAmplify);
	if (!audio_effect_amplify_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_effect_amplify_class);
	return obj;
}
static JSValue audio_effect_amplify_class_set_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AudioEffectAmplify::set_volume_db, ctx, this_val, argc, argv);
};
static JSValue audio_effect_amplify_class_get_volume_db(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioEffectAmplify::get_volume_db, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_effect_amplify_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_volume_db", 1, &audio_effect_amplify_class_set_volume_db),
	JS_CFUNC_DEF("get_volume_db", 0, &audio_effect_amplify_class_get_volume_db),
};

static void define_audio_effect_amplify_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "volume_db"),
        JS_NewCFunction(ctx, audio_effect_amplify_class_get_volume_db, "get_volume_db", 0),
        JS_NewCFunction(ctx, audio_effect_amplify_class_set_volume_db, "set_volume_db", 1),
        JS_PROP_GETSET
    );
	
}

static void define_audio_effect_amplify_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_effect_amplify_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AudioEffectAmplify"] = AudioEffectAmplify::__class_id;
	class_id_list.insert(AudioEffectAmplify::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioEffectAmplify::__class_id, &audio_effect_amplify_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioEffectAmplify::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AudioEffect::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioEffectAmplify::__class_id, proto);

	define_audio_effect_amplify_property(ctx, proto);
	define_audio_effect_amplify_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_effect_amplify_class_proto_funcs, _countof(audio_effect_amplify_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_effect_amplify_class_constructor, "AudioEffectAmplify", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioEffectAmplify", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_effect_amplify_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/audio_effect';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_effect_amplify_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioEffectAmplify");
	return m;
}

JSModuleDef *js_init_audio_effect_amplify_module(JSContext *ctx) {
	return _js_init_audio_effect_amplify_module(ctx, "@godot/classes/audio_effect_amplify");
}

void register_audio_effect_amplify() {
	AudioEffectAmplify::__init_js_class_id();
	js_init_audio_effect_amplify_module(ctx);
}