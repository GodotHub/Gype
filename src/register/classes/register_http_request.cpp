
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/http_request.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void http_request_class_finalizer(JSRuntime *rt, JSValue val) {
	HTTPRequest *http_request = static_cast<HTTPRequest *>(JS_GetOpaque(val, HTTPRequest::__class_id));
	if (http_request)
		HTTPRequest::free(nullptr, http_request);
}

static JSClassDef http_request_class_def = {
	"HTTPRequest",
	.finalizer = http_request_class_finalizer
};

static JSValue http_request_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HTTPRequest *http_request_class;
	JSValue obj = JS_NewObjectClass(ctx, HTTPRequest::__class_id);
	if (JS_IsException(obj))
		return obj;
	http_request_class = memnew(HTTPRequest);
	if (!http_request_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, http_request_class);
	return obj;
}
static JSValue http_request_class_request(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HTTPRequest::request, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_request_raw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HTTPRequest::request_raw, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_cancel_request(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::cancel_request, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_set_tls_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_tls_options, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_get_http_client_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_http_client_status, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_use_threads(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_use_threads, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_is_using_threads(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::is_using_threads, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_accept_gzip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_accept_gzip, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_is_accepting_gzip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::is_accepting_gzip, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_body_size_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_body_size_limit, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_get_body_size_limit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_body_size_limit, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_max_redirects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_max_redirects, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_get_max_redirects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_max_redirects, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_download_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_download_file, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_get_download_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_download_file, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_get_downloaded_bytes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_downloaded_bytes, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_get_body_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_body_size, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_timeout, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_get_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&HTTPRequest::get_timeout, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_download_chunk_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_download_chunk_size, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_get_download_chunk_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HTTPRequest::get_download_chunk_size, HTTPRequest::__class_id, ctx, this_val, argv);
};
static JSValue http_request_class_set_http_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_http_proxy, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue http_request_class_set_https_proxy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HTTPRequest::set_https_proxy, HTTPRequest::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry http_request_class_proto_funcs[] = {
	JS_CFUNC_DEF("request", 4, &http_request_class_request),
	JS_CFUNC_DEF("request_raw", 4, &http_request_class_request_raw),
	JS_CFUNC_DEF("cancel_request", 0, &http_request_class_cancel_request),
	JS_CFUNC_DEF("set_tls_options", 1, &http_request_class_set_tls_options),
	JS_CFUNC_DEF("get_http_client_status", 0, &http_request_class_get_http_client_status),
	JS_CFUNC_DEF("set_use_threads", 1, &http_request_class_set_use_threads),
	JS_CFUNC_DEF("is_using_threads", 0, &http_request_class_is_using_threads),
	JS_CFUNC_DEF("set_accept_gzip", 1, &http_request_class_set_accept_gzip),
	JS_CFUNC_DEF("is_accepting_gzip", 0, &http_request_class_is_accepting_gzip),
	JS_CFUNC_DEF("set_body_size_limit", 1, &http_request_class_set_body_size_limit),
	JS_CFUNC_DEF("get_body_size_limit", 0, &http_request_class_get_body_size_limit),
	JS_CFUNC_DEF("set_max_redirects", 1, &http_request_class_set_max_redirects),
	JS_CFUNC_DEF("get_max_redirects", 0, &http_request_class_get_max_redirects),
	JS_CFUNC_DEF("set_download_file", 1, &http_request_class_set_download_file),
	JS_CFUNC_DEF("get_download_file", 0, &http_request_class_get_download_file),
	JS_CFUNC_DEF("get_downloaded_bytes", 0, &http_request_class_get_downloaded_bytes),
	JS_CFUNC_DEF("get_body_size", 0, &http_request_class_get_body_size),
	JS_CFUNC_DEF("set_timeout", 1, &http_request_class_set_timeout),
	JS_CFUNC_DEF("get_timeout", 0, &http_request_class_get_timeout),
	JS_CFUNC_DEF("set_download_chunk_size", 1, &http_request_class_set_download_chunk_size),
	JS_CFUNC_DEF("get_download_chunk_size", 0, &http_request_class_get_download_chunk_size),
	JS_CFUNC_DEF("set_http_proxy", 2, &http_request_class_set_http_proxy),
	JS_CFUNC_DEF("set_https_proxy", 2, &http_request_class_set_https_proxy),
};

static int js_http_request_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HTTPRequest::__class_id);
	classes["HTTPRequest"] = HTTPRequest::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HTTPRequest::__class_id, &http_request_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HTTPRequest::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, http_request_class_proto_funcs, _countof(http_request_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, http_request_class_constructor, "HTTPRequest", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HTTPRequest", ctor);

	return 0;
}

JSModuleDef *_js_init_http_request_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_http_request_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HTTPRequest");
	return m;
}

JSModuleDef *js_init_http_request_module(JSContext *ctx) {
	return _js_init_http_request_module(ctx, "godot/classes/http_request");
}

void register_http_request() {
	js_init_http_request_module(ctx);
}