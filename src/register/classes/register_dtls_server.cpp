
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/dtls_server.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void dtls_server_class_finalizer(JSRuntime *rt, JSValue val) {
	DTLSServer *dtls_server = static_cast<DTLSServer *>(JS_GetOpaque(val, DTLSServer::__class_id));
	if (dtls_server)
		DTLSServer::free(nullptr, dtls_server);
}

static JSClassDef dtls_server_class_def = {
	"DTLSServer",
	.finalizer = dtls_server_class_finalizer
};

static JSValue dtls_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	DTLSServer *dtls_server_class;
	JSValue obj = JS_NewObjectClass(ctx, DTLSServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	dtls_server_class = memnew(DTLSServer);
	if (!dtls_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, dtls_server_class);
	return obj;
}
static JSValue dtls_server_class_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&DTLSServer::setup, DTLSServer::__class_id, ctx, this_val, argv);
};
static JSValue dtls_server_class_take_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&DTLSServer::take_connection, DTLSServer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry dtls_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("setup", 1, &dtls_server_class_setup),
	JS_CFUNC_DEF("take_connection", 1, &dtls_server_class_take_connection),
};

static int js_dtls_server_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&DTLSServer::__class_id);
	classes["DTLSServer"] = DTLSServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), DTLSServer::__class_id, &dtls_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DTLSServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, dtls_server_class_proto_funcs, _countof(dtls_server_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, dtls_server_class_constructor, "DTLSServer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "DTLSServer", ctor);

	return 0;
}

JSModuleDef *_js_init_dtls_server_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_dtls_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DTLSServer");
	return m;
}

JSModuleDef *js_init_dtls_server_module(JSContext *ctx) {
	return _js_init_dtls_server_module(ctx, "godot/classes/dtls_server");
}

void register_dtls_server() {
	js_init_dtls_server_module(ctx);
}