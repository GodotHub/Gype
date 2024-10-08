
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void main_loop_class_finalizer(JSRuntime *rt, JSValue val) {
	MainLoop *main_loop = static_cast<MainLoop *>(JS_GetOpaque(val, MainLoop::__class_id));
	if (main_loop)
		MainLoop::free(nullptr, main_loop);
}

static JSClassDef main_loop_class_def = {
	"MainLoop",
	.finalizer = main_loop_class_finalizer
};

static JSValue main_loop_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MainLoop *main_loop_class;
	JSValue obj = JS_NewObjectClass(ctx, MainLoop::__class_id);
	if (JS_IsException(obj))
		return obj;
	main_loop_class = memnew(MainLoop);
	if (!main_loop_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, main_loop_class);
	return obj;
}

static int js_main_loop_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MainLoop::__class_id);
	classes["MainLoop"] = MainLoop::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MainLoop::__class_id, &main_loop_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MainLoop::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, main_loop_class_constructor, "MainLoop", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MainLoop", ctor);

	return 0;
}

JSModuleDef *_js_init_main_loop_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_main_loop_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MainLoop");
	return m;
}

JSModuleDef *js_init_main_loop_module(JSContext *ctx) {
	return _js_init_main_loop_module(ctx, "godot/classes/main_loop");
}

void register_main_loop() {
	js_init_main_loop_module(ctx);
}