
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void v_box_container_class_finalizer(JSRuntime *rt, JSValue val) {
	VBoxContainer *v_box_container = static_cast<VBoxContainer *>(JS_GetOpaque(val, VBoxContainer::__class_id));
	if (v_box_container)
		VBoxContainer::free(nullptr, v_box_container);
}

static JSClassDef v_box_container_class_def = {
	"VBoxContainer",
	.finalizer = v_box_container_class_finalizer
};

static JSValue v_box_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VBoxContainer *v_box_container_class;
	JSValue obj = JS_NewObjectClass(ctx, VBoxContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	v_box_container_class = memnew(VBoxContainer);
	if (!v_box_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, v_box_container_class);
	return obj;
}

static int js_v_box_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VBoxContainer::__class_id);
	classes["VBoxContainer"] = VBoxContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VBoxContainer::__class_id, &v_box_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VBoxContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, v_box_container_class_constructor, "VBoxContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VBoxContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_v_box_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_box_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VBoxContainer");
	return m;
}

JSModuleDef *js_init_v_box_container_module(JSContext *ctx) {
	return _js_init_v_box_container_module(ctx, "godot/classes/v_box_container");
}

void register_v_box_container() {
	js_init_v_box_container_module(ctx);
}