
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/audio_listener2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_listener2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef audio_listener2d_class_def = {
	"AudioListener2D",
	.finalizer = audio_listener2d_class_finalizer
};

static JSValue audio_listener2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioListener2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioListener2D *audio_listener2d_class;
	if (argc == 1) {
		Variant vobj = *argv;
		audio_listener2d_class = static_cast<AudioListener2D *>(static_cast<Object *>(vobj));
	} else {
		audio_listener2d_class = memnew(AudioListener2D);
	}
	if (!audio_listener2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_listener2d_class);	
	return obj;
}
static JSValue audio_listener2d_class_make_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioListener2D::make_current, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_listener2d_class_clear_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&AudioListener2D::clear_current, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue audio_listener2d_class_is_current(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AudioListener2D::is_current, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry audio_listener2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("make_current", 0, &audio_listener2d_class_make_current),
	JS_CFUNC_DEF("clear_current", 0, &audio_listener2d_class_clear_current),
	JS_CFUNC_DEF("is_current", 0, &audio_listener2d_class_is_current),
};

void define_audio_listener2d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_audio_listener2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioListener2D::__class_id);
	classes["AudioListener2D"] = AudioListener2D::__class_id;
	class_id_list.insert(AudioListener2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioListener2D::__class_id, &audio_listener2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioListener2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioListener2D::__class_id, proto);

	define_audio_listener2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, audio_listener2d_class_proto_funcs, _countof(audio_listener2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, audio_listener2d_class_constructor, "AudioListener2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioListener2D", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_listener2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_listener2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioListener2D");
	return m;
}

JSModuleDef *js_init_audio_listener2d_module(JSContext *ctx) {
	return _js_init_audio_listener2d_module(ctx, "@godot/classes/audio_listener2d");
}

void register_audio_listener2d() {
	AudioListener2D::__init_js_class_id();
	js_init_audio_listener2d_module(ctx);
}