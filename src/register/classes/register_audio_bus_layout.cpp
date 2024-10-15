
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_bus_layout_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioBusLayout *audio_bus_layout = static_cast<AudioBusLayout *>(JS_GetOpaque(val, AudioBusLayout::__class_id));
	if (audio_bus_layout)
		memdelete(audio_bus_layout);
}

static JSClassDef audio_bus_layout_class_def = {
	"AudioBusLayout",
	.finalizer = audio_bus_layout_class_finalizer
};

static JSValue audio_bus_layout_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AudioBusLayout::__class_id);
	if (JS_IsException(obj))
		return obj;
	AudioBusLayout *audio_bus_layout_class = memnew(AudioBusLayout);
	if (!audio_bus_layout_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, audio_bus_layout_class);	
	return obj;
}

void define_audio_bus_layout_property(JSContext *ctx, JSValue obj) {
}

static int js_audio_bus_layout_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AudioBusLayout::__class_id);
	classes["AudioBusLayout"] = AudioBusLayout::__class_id;
	class_id_list.insert(AudioBusLayout::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AudioBusLayout::__class_id, &audio_bus_layout_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AudioBusLayout::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioBusLayout::__class_id, proto);

	define_audio_bus_layout_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, audio_bus_layout_class_constructor, "AudioBusLayout", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AudioBusLayout", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_bus_layout_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_audio_bus_layout_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AudioBusLayout");
	return m;
}

JSModuleDef *js_init_audio_bus_layout_module(JSContext *ctx) {
	return _js_init_audio_bus_layout_module(ctx, "godot/classes/audio_bus_layout");
}

void register_audio_bus_layout() {
	AudioBusLayout::__init_js_class_id();
	js_init_audio_bus_layout_module(ctx);
}