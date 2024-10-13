
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/movie_writer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void movie_writer_class_finalizer(JSRuntime *rt, JSValue val) {
	MovieWriter *movie_writer = static_cast<MovieWriter *>(JS_GetOpaque(val, MovieWriter::__class_id));
	if (movie_writer)
		MovieWriter::free(nullptr, movie_writer);
}

static JSClassDef movie_writer_class_def = {
	"MovieWriter",
	.finalizer = movie_writer_class_finalizer
};

static JSValue movie_writer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MovieWriter *movie_writer_class;
	JSValue obj = JS_NewObjectClass(ctx, MovieWriter::__class_id);
	if (JS_IsException(obj))
		return obj;
	movie_writer_class = memnew(MovieWriter);
	if (!movie_writer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, movie_writer_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue movie_writer_class_add_writer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_static_method_no_ret(&MovieWriter::add_writer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry movie_writer_class_static_funcs[] = {
	JS_CFUNC_DEF("add_writer", 1, &movie_writer_class_add_writer),
};

void define_movie_writer_property(JSContext *ctx, JSValue obj) {
}

static int js_movie_writer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MovieWriter::__class_id);
	classes["MovieWriter"] = MovieWriter::__class_id;
	class_id_list.insert(MovieWriter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MovieWriter::__class_id, &movie_writer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MovieWriter::__class_id, proto);
	define_movie_writer_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, movie_writer_class_constructor, "MovieWriter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, movie_writer_class_static_funcs, _countof(movie_writer_class_static_funcs));

	JS_SetModuleExport(ctx, m, "MovieWriter", ctor);

	return 0;
}

JSModuleDef *_js_init_movie_writer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_movie_writer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MovieWriter");
	return m;
}

JSModuleDef *js_init_movie_writer_module(JSContext *ctx) {
	return _js_init_movie_writer_module(ctx, "godot/classes/movie_writer");
}

void register_movie_writer() {
	MovieWriter::__init_js_class_id();
	js_init_movie_writer_module(ctx);
}