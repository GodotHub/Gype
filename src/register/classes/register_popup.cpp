
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void popup_class_finalizer(JSRuntime *rt, JSValue val) {
	Popup *popup = static_cast<Popup *>(JS_GetOpaque(val, Popup::__class_id));
	if (popup)
		Popup::free(nullptr, popup);
}

static JSClassDef popup_class_def = {
	"Popup",
	.finalizer = popup_class_finalizer
};

static JSValue popup_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Popup *popup_class;
	JSValue obj = JS_NewObjectClass(ctx, Popup::__class_id);
	if (JS_IsException(obj))
		return obj;
	popup_class = memnew(Popup);
	if (!popup_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, popup_class);
	return obj;
}

static int js_popup_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Popup::__class_id);
	classes["Popup"] = Popup::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Popup::__class_id, &popup_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Window::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Popup::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, popup_class_constructor, "Popup", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Popup", ctor);

	return 0;
}

JSModuleDef *_js_init_popup_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_popup_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Popup");
	return m;
}

JSModuleDef *js_init_popup_module(JSContext *ctx) {
	return _js_init_popup_module(ctx, "godot/classes/popup");
}

void register_popup() {
	js_init_popup_module(ctx);
}