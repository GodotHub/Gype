
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/split_container.hpp>
#include <godot_cpp/classes/h_split_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void h_split_container_class_finalizer(JSRuntime *rt, JSValue val) {
	HSplitContainer *h_split_container = static_cast<HSplitContainer *>(JS_GetOpaque(val, HSplitContainer::__class_id));
	if (h_split_container)
		HSplitContainer::free(nullptr, h_split_container);
}

static JSClassDef h_split_container_class_def = {
	"HSplitContainer",
	.finalizer = h_split_container_class_finalizer
};

static JSValue h_split_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HSplitContainer *h_split_container_class;
	JSValue obj = JS_NewObjectClass(ctx, HSplitContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	h_split_container_class = memnew(HSplitContainer);
	if (!h_split_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, h_split_container_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_h_split_container_property(JSContext *ctx, JSValue obj) {
}

static int js_h_split_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&HSplitContainer::__class_id);
	classes["HSplitContainer"] = HSplitContainer::__class_id;
	class_id_list.insert(HSplitContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HSplitContainer::__class_id, &h_split_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SplitContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HSplitContainer::__class_id, proto);
	define_h_split_container_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, h_split_container_class_constructor, "HSplitContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HSplitContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_h_split_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/split_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_h_split_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HSplitContainer");
	return m;
}

JSModuleDef *js_init_h_split_container_module(JSContext *ctx) {
	return _js_init_h_split_container_module(ctx, "godot/classes/h_split_container");
}

void register_h_split_container() {
	HSplitContainer::__init_js_class_id();
	js_init_h_split_container_module(ctx);
}