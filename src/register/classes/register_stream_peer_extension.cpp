
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/stream_peer_extension.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef stream_peer_extension_class_def = {
	"StreamPeerExtension",
	.finalizer = stream_peer_extension_class_finalizer
};

static JSValue stream_peer_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StreamPeerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	StreamPeerExtension *stream_peer_extension_class;
	if (argc == 1) {
		Variant vobj = *argv;
		stream_peer_extension_class = static_cast<StreamPeerExtension *>(static_cast<Object *>(vobj));
	} else {
		stream_peer_extension_class = memnew(StreamPeerExtension);
	}
	if (!stream_peer_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, stream_peer_extension_class);	
	return obj;
}

void define_stream_peer_extension_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_stream_peer_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StreamPeerExtension::__class_id);
	classes["StreamPeerExtension"] = StreamPeerExtension::__class_id;
	class_id_list.insert(StreamPeerExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerExtension::__class_id, &stream_peer_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StreamPeerExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerExtension::__class_id, proto);

	define_stream_peer_extension_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_extension_class_constructor, "StreamPeerExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StreamPeerExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/stream_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeerExtension");
	return m;
}

JSModuleDef *js_init_stream_peer_extension_module(JSContext *ctx) {
	return _js_init_stream_peer_extension_module(ctx, "@godot/classes/stream_peer_extension");
}

void register_stream_peer_extension() {
	StreamPeerExtension::__init_js_class_id();
	js_init_stream_peer_extension_module(ctx);
}