
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void audio_bus_layout_class_finalizer(JSRuntime *rt, JSValue val) {
	AudioBusLayout *audio_bus_layout = static_cast<AudioBusLayout *>(JS_GetOpaque(val, AudioBusLayout::__class_id));
	if (audio_bus_layout)
		AudioBusLayout::free(nullptr, audio_bus_layout);
}

static JSClassDef audio_bus_layout_class_def = {
	"AudioBusLayout",
	.finalizer = audio_bus_layout_class_finalizer
};

static JSValue audio_bus_layout_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AudioBusLayout *audio_bus_layout_class;
	JSValue obj = JS_NewObjectClass(ctx, AudioBusLayout::__class_id);
	if (JS_IsException(obj))
		return obj;
	audio_bus_layout_class = memnew(AudioBusLayout);
	if (!audio_bus_layout_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, audio_bus_layout_class);
	return obj;
}

static int js_audio_bus_layout_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AudioBusLayout::__class_id);
	classes["AudioBusLayout"] = AudioBusLayout::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AudioBusLayout::__class_id, &audio_bus_layout_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AudioBusLayout::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, audio_bus_layout_class_constructor, "AudioBusLayout", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AudioBusLayout", ctor);

	return 0;
}

JSModuleDef *_js_init_audio_bus_layout_module(JSContext *ctx, const char *module_name) {
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
	js_init_audio_bus_layout_module(ctx);
}