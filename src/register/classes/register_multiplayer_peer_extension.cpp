
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/multiplayer_peer_extension.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void multiplayer_peer_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	MultiplayerPeerExtension *multiplayer_peer_extension = static_cast<MultiplayerPeerExtension *>(JS_GetOpaque(val, MultiplayerPeerExtension::__class_id));
	if (multiplayer_peer_extension)
		MultiplayerPeerExtension::free(nullptr, multiplayer_peer_extension);
}

static JSClassDef multiplayer_peer_extension_class_def = {
	"MultiplayerPeerExtension",
	.finalizer = multiplayer_peer_extension_class_finalizer
};

static JSValue multiplayer_peer_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MultiplayerPeerExtension *multiplayer_peer_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, MultiplayerPeerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	multiplayer_peer_extension_class = memnew(MultiplayerPeerExtension);
	if (!multiplayer_peer_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, multiplayer_peer_extension_class);
	return obj;
}

static int js_multiplayer_peer_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MultiplayerPeerExtension::__class_id);
	classes["MultiplayerPeerExtension"] = MultiplayerPeerExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MultiplayerPeerExtension::__class_id, &multiplayer_peer_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, MultiplayerPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MultiplayerPeerExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, multiplayer_peer_extension_class_constructor, "MultiplayerPeerExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MultiplayerPeerExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_multiplayer_peer_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_multiplayer_peer_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MultiplayerPeerExtension");
	return m;
}

JSModuleDef *js_init_multiplayer_peer_extension_module(JSContext *ctx) {
	return _js_init_multiplayer_peer_extension_module(ctx, "godot/classes/multiplayer_peer_extension");
}

void register_multiplayer_peer_extension() {
	js_init_multiplayer_peer_extension_module(ctx);
}