
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/random_number_generator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void random_number_generator_class_finalizer(JSRuntime *rt, JSValue val) {
	RandomNumberGenerator *random_number_generator = static_cast<RandomNumberGenerator *>(JS_GetOpaque(val, RandomNumberGenerator::__class_id));
	if (random_number_generator)
		RandomNumberGenerator::free(nullptr, random_number_generator);
}

static JSClassDef random_number_generator_class_def = {
	"RandomNumberGenerator",
	.finalizer = random_number_generator_class_finalizer
};

static JSValue random_number_generator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RandomNumberGenerator *random_number_generator_class;
	JSValue obj = JS_NewObjectClass(ctx, RandomNumberGenerator::__class_id);
	if (JS_IsException(obj))
		return obj;
	random_number_generator_class = memnew(RandomNumberGenerator);
	if (!random_number_generator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, random_number_generator_class);
	return obj;
}
static JSValue random_number_generator_class_set_seed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RandomNumberGenerator::set_seed, RandomNumberGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue random_number_generator_class_get_seed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::get_seed, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_set_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RandomNumberGenerator::set_state, RandomNumberGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue random_number_generator_class_get_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RandomNumberGenerator::get_state, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_randi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::randi, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_randf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::randf, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_randfn(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::randfn, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_randf_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::randf_range, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_randi_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::randi_range, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_rand_weighted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RandomNumberGenerator::rand_weighted, RandomNumberGenerator::__class_id, ctx, this_val, argv);
};
static JSValue random_number_generator_class_randomize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RandomNumberGenerator::randomize, RandomNumberGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry random_number_generator_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_seed", 1, &random_number_generator_class_set_seed),
	JS_CFUNC_DEF("get_seed", 0, &random_number_generator_class_get_seed),
	JS_CFUNC_DEF("set_state", 1, &random_number_generator_class_set_state),
	JS_CFUNC_DEF("get_state", 0, &random_number_generator_class_get_state),
	JS_CFUNC_DEF("randi", 0, &random_number_generator_class_randi),
	JS_CFUNC_DEF("randf", 0, &random_number_generator_class_randf),
	JS_CFUNC_DEF("randfn", 2, &random_number_generator_class_randfn),
	JS_CFUNC_DEF("randf_range", 2, &random_number_generator_class_randf_range),
	JS_CFUNC_DEF("randi_range", 2, &random_number_generator_class_randi_range),
	JS_CFUNC_DEF("rand_weighted", 1, &random_number_generator_class_rand_weighted),
	JS_CFUNC_DEF("randomize", 0, &random_number_generator_class_randomize),
};

static int js_random_number_generator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RandomNumberGenerator::__class_id);
	classes["RandomNumberGenerator"] = RandomNumberGenerator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RandomNumberGenerator::__class_id, &random_number_generator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RandomNumberGenerator::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, random_number_generator_class_proto_funcs, _countof(random_number_generator_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, random_number_generator_class_constructor, "RandomNumberGenerator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RandomNumberGenerator", ctor);

	return 0;
}

JSModuleDef *_js_init_random_number_generator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_random_number_generator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RandomNumberGenerator");
	return m;
}

JSModuleDef *js_init_random_number_generator_module(JSContext *ctx) {
	return _js_init_random_number_generator_module(ctx, "godot/classes/random_number_generator");
}

void register_random_number_generator() {
	js_init_random_number_generator_module(ctx);
}