
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeerExtension *packet_peer_extension = static_cast<PacketPeerExtension *>(JS_GetOpaque(val, PacketPeerExtension::__class_id));
	if (packet_peer_extension)
		PacketPeerExtension::free(nullptr, packet_peer_extension);
}

static JSClassDef packet_peer_extension_class_def = {
	"PacketPeerExtension",
	.finalizer = packet_peer_extension_class_finalizer
};

static JSValue packet_peer_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PacketPeerExtension *packet_peer_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, PacketPeerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	packet_peer_extension_class = memnew(PacketPeerExtension);
	if (!packet_peer_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packet_peer_extension_class);
	return obj;
}

static int js_packet_peer_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PacketPeerExtension::__class_id);
	classes["PacketPeerExtension"] = PacketPeerExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerExtension::__class_id, &packet_peer_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_extension_class_constructor, "PacketPeerExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PacketPeerExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerExtension");
	return m;
}

JSModuleDef *js_init_packet_peer_extension_module(JSContext *ctx) {
	return _js_init_packet_peer_extension_module(ctx, "godot/classes/packet_peer_extension");
}

void register_packet_peer_extension() {
	js_init_packet_peer_extension_module(ctx);
}