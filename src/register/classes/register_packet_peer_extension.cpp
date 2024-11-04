
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeerExtension *packet_peer_extension = static_cast<PacketPeerExtension *>(JS_GetOpaque(val, PacketPeerExtension::__class_id));
	if (packet_peer_extension)
		memdelete(packet_peer_extension);
}

static JSClassDef packet_peer_extension_class_def = {
	"PacketPeerExtension",
	.finalizer = packet_peer_extension_class_finalizer
};

static JSValue packet_peer_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PacketPeerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	PacketPeerExtension *packet_peer_extension_class;
	if (argc == 1) 
		packet_peer_extension_class = static_cast<PacketPeerExtension *>(Variant(*argv).operator Object *());
	else 
		packet_peer_extension_class = memnew(PacketPeerExtension);
	if (!packet_peer_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packet_peer_extension_class);
	return obj;
}

static void define_packet_peer_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_packet_peer_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_packet_peer_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PacketPeerExtension"] = PacketPeerExtension::__class_id;
	class_id_list.insert(PacketPeerExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerExtension::__class_id, &packet_peer_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PacketPeerExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerExtension::__class_id, proto);

	define_packet_peer_extension_property(ctx, proto);
	define_packet_peer_extension_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_extension_class_constructor, "PacketPeerExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PacketPeerExtension", ctor);
	constructors[PacketPeerExtension::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_packet_peer_extension_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerExtension");
	return m;
}

JSModuleDef *js_init_packet_peer_extension_module(JSContext *ctx) {
	return _js_init_packet_peer_extension_module(ctx, "@godot/classes/packet_peer_extension");
}

void register_packet_peer_extension() {
	PacketPeerExtension::__init_js_class_id();
	js_init_packet_peer_extension_module(ctx);
}