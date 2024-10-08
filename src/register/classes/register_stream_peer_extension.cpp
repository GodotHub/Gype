
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	StreamPeerExtension *stream_peer_extension = static_cast<StreamPeerExtension *>(JS_GetOpaque(val, StreamPeerExtension::__class_id));
	if (stream_peer_extension)
		StreamPeerExtension::free(nullptr, stream_peer_extension);
}

static JSClassDef stream_peer_extension_class_def = {
	"StreamPeerExtension",
	.finalizer = stream_peer_extension_class_finalizer
};

static JSValue stream_peer_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StreamPeerExtension *stream_peer_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, StreamPeerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	stream_peer_extension_class = memnew(StreamPeerExtension);
	if (!stream_peer_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, stream_peer_extension_class);
	return obj;
}

static int js_stream_peer_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StreamPeerExtension::__class_id);
	classes["StreamPeerExtension"] = StreamPeerExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerExtension::__class_id, &stream_peer_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_extension_class_constructor, "StreamPeerExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StreamPeerExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeerExtension");
	return m;
}

JSModuleDef *js_init_stream_peer_extension_module(JSContext *ctx) {
	return _js_init_stream_peer_extension_module(ctx, "godot/classes/stream_peer_extension");
}

void register_stream_peer_extension() {
	js_init_stream_peer_extension_module(ctx);
}