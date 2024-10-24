
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void http_client_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef http_client_class_def = {
	"HTTPClient",
	.finalizer = http_client_class_finalizer
};

static JSValue http_client_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, HTTPClient::__class_id);
	if (JS_IsException(obj))
		return obj;
	HTTPClient *http_client_class = memnew(HTTPClient);
	if (!http_client_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, http_client_class);	
	return obj;
}
static JSValue http_client_class_connect_to_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::connect_to_host, ctx, this_val, argc, argv);
};
static JSValue http_client_class_set_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&HTTPClient::set_connection, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue http_client_class_get_connection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::get_connection, ctx, this_val, argc, argv);
};
static JSValue http_client_class_request_raw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::request_raw, ctx, this_val, argc, argv);
};
static JSValue http_client_class_request(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::request, ctx, this_val, argc, argv);
};
static JSValue http_client_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&HTTPClient::close, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue http_client_class_has_response(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::has_response, ctx, this_val, argc, argv);
};
static JSValue http_client_class_is_response_chunked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::is_response_chunked, ctx, this_val, argc, argv);
};
static JSValue http_client_class_get_response_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::get_response_code, ctx, this_val, argc, argv);
};
static JSValue http_client_class_get_response_headers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::get_response_headers, ctx, this_val, argc, argv);
};
static JSValue http_client_class_get_response_headers_as_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::get_response_headers_as_dictionary, ctx, this_val, argc, argv);
};
static JSValue http_client_class_get_response_body_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::get_response_body_length, ctx, this_val, argc, argv);
};
static JSValue http_client_class_read_response_body_chunk(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::read_response_body_chunk, ctx, this_val, argc, argv);
};
static JSValue http_client_class_set_read_chunk_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&HTTPClient::set_read_chunk_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue http_client_class_get_read_chunk_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::get_read_chunk_size, ctx, this_val, argc, argv);
};
static JSValue http_client_class_set_blocking_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&HTTPClient::set_blocking_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue http_client_class_is_blocking_mode_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::is_blocking_mode_enabled, ctx, this_val, argc, argv);
};
static JSValue http_client_class_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HTTPClient::get_status, ctx, this_val, argc, argv);
};
static JSValue http_client_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::poll, ctx, this_val, argc, argv);
};
static JSValue http_client_class_set_http_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&HTTPClient::set_http_proxy, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue http_client_class_set_https_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&HTTPClient::set_https_proxy, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue http_client_class_query_string_from_dict(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&HTTPClient::query_string_from_dict, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry http_client_class_proto_funcs[] = {
	JS_CFUNC_DEF("connect_to_host", 3, &http_client_class_connect_to_host),
	JS_CFUNC_DEF("set_connection", 1, &http_client_class_set_connection),
	JS_CFUNC_DEF("get_connection", 0, &http_client_class_get_connection),
	JS_CFUNC_DEF("request_raw", 4, &http_client_class_request_raw),
	JS_CFUNC_DEF("request", 4, &http_client_class_request),
	JS_CFUNC_DEF("close", 0, &http_client_class_close),
	JS_CFUNC_DEF("has_response", 0, &http_client_class_has_response),
	JS_CFUNC_DEF("is_response_chunked", 0, &http_client_class_is_response_chunked),
	JS_CFUNC_DEF("get_response_code", 0, &http_client_class_get_response_code),
	JS_CFUNC_DEF("get_response_headers", 0, &http_client_class_get_response_headers),
	JS_CFUNC_DEF("get_response_headers_as_dictionary", 0, &http_client_class_get_response_headers_as_dictionary),
	JS_CFUNC_DEF("get_response_body_length", 0, &http_client_class_get_response_body_length),
	JS_CFUNC_DEF("read_response_body_chunk", 0, &http_client_class_read_response_body_chunk),
	JS_CFUNC_DEF("set_read_chunk_size", 1, &http_client_class_set_read_chunk_size),
	JS_CFUNC_DEF("get_read_chunk_size", 0, &http_client_class_get_read_chunk_size),
	JS_CFUNC_DEF("set_blocking_mode", 1, &http_client_class_set_blocking_mode),
	JS_CFUNC_DEF("is_blocking_mode_enabled", 0, &http_client_class_is_blocking_mode_enabled),
	JS_CFUNC_DEF("get_status", 0, &http_client_class_get_status),
	JS_CFUNC_DEF("poll", 0, &http_client_class_poll),
	JS_CFUNC_DEF("set_http_proxy", 2, &http_client_class_set_http_proxy),
	JS_CFUNC_DEF("set_https_proxy", 2, &http_client_class_set_https_proxy),
	JS_CFUNC_DEF("query_string_from_dict", 1, &http_client_class_query_string_from_dict),
};

void define_http_client_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "blocking_mode_enabled"),
        JS_NewCFunction(ctx, http_client_class_is_blocking_mode_enabled, "is_blocking_mode_enabled", 0),
        JS_NewCFunction(ctx, http_client_class_set_blocking_mode, "set_blocking_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "connection"),
        JS_NewCFunction(ctx, http_client_class_get_connection, "get_connection", 0),
        JS_NewCFunction(ctx, http_client_class_set_connection, "set_connection", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "read_chunk_size"),
        JS_NewCFunction(ctx, http_client_class_get_read_chunk_size, "get_read_chunk_size", 0),
        JS_NewCFunction(ctx, http_client_class_set_read_chunk_size, "set_read_chunk_size", 1),
        JS_PROP_GETSET
    );
}

static int js_http_client_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&HTTPClient::__class_id);
	classes["HTTPClient"] = HTTPClient::__class_id;
	class_id_list.insert(HTTPClient::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HTTPClient::__class_id, &http_client_class_def);

	JSValue proto = JS_NewObjectClass(ctx, HTTPClient::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HTTPClient::__class_id, proto);

	define_http_client_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, http_client_class_proto_funcs, _countof(http_client_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, http_client_class_constructor, "HTTPClient", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HTTPClient", ctor);

	return 0;
}

JSModuleDef *_js_init_http_client_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_http_client_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HTTPClient");
	return m;
}

JSModuleDef *js_init_http_client_module(JSContext *ctx) {
	return _js_init_http_client_module(ctx, "godot/classes/http_client");
}

void register_http_client() {
	HTTPClient::__init_js_class_id();
	js_init_http_client_module(ctx);
}