
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void main_loop_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef main_loop_class_def = {
	"MainLoop",
	.finalizer = main_loop_class_finalizer
};

static JSValue main_loop_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MainLoop::__class_id);
	if (JS_IsException(obj))
		return obj;
	MainLoop *main_loop_class;
	if (argc == 1) {
		Variant vobj = *argv;
		main_loop_class = static_cast<MainLoop *>(static_cast<Object *>(vobj));
	} else {
		main_loop_class = memnew(MainLoop);
	}
	if (!main_loop_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, main_loop_class);	
	return obj;
}

void define_main_loop_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_main_loop_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MainLoop::__class_id);
	classes["MainLoop"] = MainLoop::__class_id;
	class_id_list.insert(MainLoop::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MainLoop::__class_id, &main_loop_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MainLoop::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MainLoop::__class_id, proto);

	define_main_loop_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, main_loop_class_constructor, "MainLoop", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MainLoop", ctor);

	return 0;
}

JSModuleDef *_js_init_main_loop_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_main_loop_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MainLoop");
	return m;
}

JSModuleDef *js_init_main_loop_module(JSContext *ctx) {
	return _js_init_main_loop_module(ctx, "@godot/classes/main_loop");
}

void register_main_loop() {
	MainLoop::__init_js_class_id();
	js_init_main_loop_module(ctx);
}