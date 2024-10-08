
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/multiplayer_api_extension.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void multiplayer_api_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiplayerAPIExtension *multiplayer_api_extension = static_cast<MultiplayerAPIExtension *>(JS_GetOpaque(val, MultiplayerAPIExtension::__class_id));
	if (multiplayer_api_extension)
		MultiplayerAPIExtension::free(nullptr, multiplayer_api_extension);
}

static JSClassDef multiplayer_api_extension_class_def = {
	"MultiplayerAPIExtension",
	.finalizer = multiplayer_api_extension_class_finalizer
};

static JSValue multiplayer_api_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MultiplayerAPIExtension *multiplayer_api_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, MultiplayerAPIExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	multiplayer_api_extension_class = memnew(MultiplayerAPIExtension);
	if (!multiplayer_api_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, multiplayer_api_extension_class);
	return obj;
}

static int js_multiplayer_api_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MultiplayerAPIExtension::__class_id);
	classes["MultiplayerAPIExtension"] = MultiplayerAPIExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerAPIExtension::__class_id, &multiplayer_api_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerAPI::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerAPIExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_api_extension_class_constructor, "MultiplayerAPIExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MultiplayerAPIExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_api_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_api_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerAPIExtension");
	return m;
}

JSModuleDef *js_init_multiplayer_api_extension_module(JSContext *ctx) {
	return _js_init_multiplayer_api_extension_module(ctx, "godot/classes/multiplayer_api_extension");
}

void register_multiplayer_api_extension() {
	js_init_multiplayer_api_extension_module(ctx);
}