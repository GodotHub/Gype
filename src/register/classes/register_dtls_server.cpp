
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/dtls_server.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void dtls_server_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef dtls_server_class_def = {
	"DTLSServer",
	.finalizer = dtls_server_class_finalizer
};

static JSValue dtls_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, DTLSServer::__class_id);
	if (JS_IsException(obj))
		return obj;

	DTLSServer *dtls_server_class;
	if (argc == 1) 
		dtls_server_class = static_cast<DTLSServer *>(Variant(*argv).operator Object *());
	else 
		dtls_server_class = memnew(DTLSServer);
	if (!dtls_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, dtls_server_class);
	return obj;
}
static JSValue dtls_server_class_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DTLSServer::setup, ctx, this_val, argc, argv);
};
static JSValue dtls_server_class_take_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DTLSServer::take_connection, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry dtls_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("setup", 1, &dtls_server_class_setup),
	JS_CFUNC_DEF("take_connection", 1, &dtls_server_class_take_connection),
};

static void define_dtls_server_property(JSContext *ctx, JSValue proto) {
	
}

static void define_dtls_server_enum(JSContext *ctx, JSValue proto) {
}

static int js_dtls_server_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["DTLSServer"] = DTLSServer::__class_id;
	class_id_list.insert(DTLSServer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), DTLSServer::__class_id, &dtls_server_class_def);

	JSValue proto = JS_NewObjectClass(ctx, DTLSServer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DTLSServer::__class_id, proto);

	define_dtls_server_property(ctx, proto);
	define_dtls_server_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, dtls_server_class_proto_funcs, _countof(dtls_server_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, dtls_server_class_constructor, "DTLSServer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "DTLSServer", ctor);

	return 0;
}

JSModuleDef *_js_init_dtls_server_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_dtls_server_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DTLSServer");
	return m;
}

JSModuleDef *js_init_dtls_server_module(JSContext *ctx) {
	return _js_init_dtls_server_module(ctx, "@godot/classes/dtls_server");
}

void register_dtls_server() {
	DTLSServer::__init_js_class_id();
	js_init_dtls_server_module(ctx);
}