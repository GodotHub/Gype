
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/class_db_singleton.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void class_db_class_finalizer(JSRuntime *rt, JSValue val) {
	ClassDBSingleton *class_db = static_cast<ClassDBSingleton *>(JS_GetOpaque(val, ClassDBSingleton::__class_id));
	if (class_db)
		ClassDBSingleton::free(nullptr, class_db);
}

static JSClassDef class_db_class_def = {
	"ClassDB",
	.finalizer = class_db_class_finalizer
};

static JSValue class_db_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ClassDBSingleton *class_db_class;
	JSValue obj = JS_NewObjectClass(ctx, ClassDBSingleton::__class_id);
	if (JS_IsException(obj))
		return obj;
	class_db_class = ClassDBSingleton::get_singleton();
	if (!class_db_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, class_db_class);
	return obj;
}
static JSValue class_db_class_get_class_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::get_class_list, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_get_inheriters_from_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::get_inheriters_from_class, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_get_parent_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::get_parent_class, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_exists, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_is_parent_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::is_parent_class, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_can_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::can_instantiate, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_instantiate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::instantiate, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_has_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_has_signal, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_signal, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_signal_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_signal_list, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_property_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_property_list, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_property, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_set_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_set_property, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_property_default_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_property_default_value, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_has_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_has_method, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_method_argument_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_method_argument_count, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_method_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_method_list, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_integer_constant_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_integer_constant_list, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_has_integer_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_has_integer_constant, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_integer_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_integer_constant, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_has_enum(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_has_enum, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_enum_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_enum_list, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_enum_constants(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_enum_constants, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_class_get_integer_constant_enum(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::class_get_integer_constant_enum, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_is_class_enum_bitfield(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::is_class_enum_bitfield, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static JSValue class_db_class_is_class_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ClassDBSingleton::is_class_enabled, ClassDBSingleton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry class_db_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_class_list", 0, &class_db_class_get_class_list),
	JS_CFUNC_DEF("get_inheriters_from_class", 1, &class_db_class_get_inheriters_from_class),
	JS_CFUNC_DEF("get_parent_class", 1, &class_db_class_get_parent_class),
	JS_CFUNC_DEF("class_exists", 1, &class_db_class_class_exists),
	JS_CFUNC_DEF("is_parent_class", 2, &class_db_class_is_parent_class),
	JS_CFUNC_DEF("can_instantiate", 1, &class_db_class_can_instantiate),
	JS_CFUNC_DEF("instantiate", 1, &class_db_class_instantiate),
	JS_CFUNC_DEF("class_has_signal", 2, &class_db_class_class_has_signal),
	JS_CFUNC_DEF("class_get_signal", 2, &class_db_class_class_get_signal),
	JS_CFUNC_DEF("class_get_signal_list", 2, &class_db_class_class_get_signal_list),
	JS_CFUNC_DEF("class_get_property_list", 2, &class_db_class_class_get_property_list),
	JS_CFUNC_DEF("class_get_property", 2, &class_db_class_class_get_property),
	JS_CFUNC_DEF("class_set_property", 3, &class_db_class_class_set_property),
	JS_CFUNC_DEF("class_get_property_default_value", 2, &class_db_class_class_get_property_default_value),
	JS_CFUNC_DEF("class_has_method", 3, &class_db_class_class_has_method),
	JS_CFUNC_DEF("class_get_method_argument_count", 3, &class_db_class_class_get_method_argument_count),
	JS_CFUNC_DEF("class_get_method_list", 2, &class_db_class_class_get_method_list),
	JS_CFUNC_DEF("class_get_integer_constant_list", 2, &class_db_class_class_get_integer_constant_list),
	JS_CFUNC_DEF("class_has_integer_constant", 2, &class_db_class_class_has_integer_constant),
	JS_CFUNC_DEF("class_get_integer_constant", 2, &class_db_class_class_get_integer_constant),
	JS_CFUNC_DEF("class_has_enum", 3, &class_db_class_class_has_enum),
	JS_CFUNC_DEF("class_get_enum_list", 2, &class_db_class_class_get_enum_list),
	JS_CFUNC_DEF("class_get_enum_constants", 3, &class_db_class_class_get_enum_constants),
	JS_CFUNC_DEF("class_get_integer_constant_enum", 3, &class_db_class_class_get_integer_constant_enum),
	JS_CFUNC_DEF("is_class_enum_bitfield", 3, &class_db_class_is_class_enum_bitfield),
	JS_CFUNC_DEF("is_class_enabled", 1, &class_db_class_is_class_enabled),
};

static int js_class_db_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ClassDBSingleton::__class_id);
	classes["ClassDB"] = ClassDBSingleton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ClassDBSingleton::__class_id, &class_db_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ClassDBSingleton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, class_db_class_proto_funcs, _countof(class_db_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, class_db_class_constructor, "ClassDB", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ClassDB", ctor);

	return 0;
}

JSModuleDef *_js_init_class_db_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_class_db_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ClassDB");
	return m;
}

JSModuleDef *js_init_class_db_module(JSContext *ctx) {
	return _js_init_class_db_module(ctx, "godot/classes/class_db");
}

void register_class_db() {
	js_init_class_db_module(ctx);
}