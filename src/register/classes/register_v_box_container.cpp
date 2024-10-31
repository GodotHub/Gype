
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void v_box_container_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef v_box_container_class_def = {
	"VBoxContainer",
	.finalizer = v_box_container_class_finalizer
};

static JSValue v_box_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VBoxContainer::__class_id);
	if (JS_IsException(obj))
		return obj;

	VBoxContainer *v_box_container_class;
	if (argc == 1) 
		v_box_container_class = static_cast<VBoxContainer *>(static_cast<Object *>(Variant(*argv)));
	else 
		v_box_container_class = memnew(VBoxContainer);
	if (!v_box_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, v_box_container_class);	
	return obj;
}

static void define_v_box_container_property(JSContext *ctx, JSValue proto) {
	
}

static void define_v_box_container_enum(JSContext *ctx, JSValue proto) {
}

static int js_v_box_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VBoxContainer::__class_id);
	classes["VBoxContainer"] = VBoxContainer::__class_id;
	class_id_list.insert(VBoxContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VBoxContainer::__class_id, &v_box_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VBoxContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, BoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VBoxContainer::__class_id, proto);

	define_v_box_container_property(ctx, proto);
	define_v_box_container_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, v_box_container_class_constructor, "VBoxContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VBoxContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_v_box_container_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/box_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_box_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VBoxContainer");
	return m;
}

JSModuleDef *js_init_v_box_container_module(JSContext *ctx) {
	return _js_init_v_box_container_module(ctx, "@godot/classes/v_box_container");
}

void register_v_box_container() {
	VBoxContainer::__init_js_class_id();
	js_init_v_box_container_module(ctx);
}