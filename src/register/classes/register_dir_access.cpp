
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/dir_access.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void dir_access_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef dir_access_class_def = {
	"DirAccess",
	.finalizer = dir_access_class_finalizer
};

static JSValue dir_access_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, DirAccess::__class_id);
	if (JS_IsException(obj))
		return obj;

	DirAccess *dir_access_class;
	if (argc == 1) 
		dir_access_class = static_cast<DirAccess *>(Variant(*argv).operator Object *());
	else 
		dir_access_class = memnew(DirAccess);
	if (!dir_access_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, dir_access_class);
	return obj;
}
static JSValue dir_access_class_list_dir_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::list_dir_begin, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_next(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::get_next, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_current_is_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirAccess::current_is_dir, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_list_dir_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&DirAccess::list_dir_end, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_files(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::get_files, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_directories(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::get_directories, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_current_drive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::get_current_drive, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_change_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::change_dir, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_current_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirAccess::get_current_dir, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_make_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::make_dir, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_make_dir_recursive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::make_dir_recursive, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_file_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::file_exists, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_dir_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::dir_exists, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_space_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::get_space_left, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_copy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::copy, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_rename(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::rename, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_remove(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::remove, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_is_link(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::is_link, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_read_link(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::read_link, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_create_link(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&DirAccess::create_link, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_set_include_navigational(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&DirAccess::set_include_navigational, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_include_navigational(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirAccess::get_include_navigational, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_set_include_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&DirAccess::set_include_hidden, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_include_hidden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirAccess::get_include_hidden, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_is_case_sensitive(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirAccess::is_case_sensitive, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_open(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::open, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_open_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::get_open_error, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_files_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::get_files_at, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_directories_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::get_directories_at, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_drive_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::get_drive_count, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_get_drive_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::get_drive_name, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_make_dir_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::make_dir_absolute, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_make_dir_recursive_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::make_dir_recursive_absolute, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_dir_exists_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::dir_exists_absolute, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_copy_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::copy_absolute, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_rename_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::rename_absolute, ctx, this_val, argc, argv);
};
static JSValue dir_access_class_remove_absolute(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&DirAccess::remove_absolute, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry dir_access_class_proto_funcs[] = {
	JS_CFUNC_DEF("list_dir_begin", 0, &dir_access_class_list_dir_begin),
	JS_CFUNC_DEF("get_next", 0, &dir_access_class_get_next),
	JS_CFUNC_DEF("current_is_dir", 0, &dir_access_class_current_is_dir),
	JS_CFUNC_DEF("list_dir_end", 0, &dir_access_class_list_dir_end),
	JS_CFUNC_DEF("get_files", 0, &dir_access_class_get_files),
	JS_CFUNC_DEF("get_directories", 0, &dir_access_class_get_directories),
	JS_CFUNC_DEF("get_current_drive", 0, &dir_access_class_get_current_drive),
	JS_CFUNC_DEF("change_dir", 1, &dir_access_class_change_dir),
	JS_CFUNC_DEF("get_current_dir", 1, &dir_access_class_get_current_dir),
	JS_CFUNC_DEF("make_dir", 1, &dir_access_class_make_dir),
	JS_CFUNC_DEF("make_dir_recursive", 1, &dir_access_class_make_dir_recursive),
	JS_CFUNC_DEF("file_exists", 1, &dir_access_class_file_exists),
	JS_CFUNC_DEF("dir_exists", 1, &dir_access_class_dir_exists),
	JS_CFUNC_DEF("get_space_left", 0, &dir_access_class_get_space_left),
	JS_CFUNC_DEF("copy", 3, &dir_access_class_copy),
	JS_CFUNC_DEF("rename", 2, &dir_access_class_rename),
	JS_CFUNC_DEF("remove", 1, &dir_access_class_remove),
	JS_CFUNC_DEF("is_link", 1, &dir_access_class_is_link),
	JS_CFUNC_DEF("read_link", 1, &dir_access_class_read_link),
	JS_CFUNC_DEF("create_link", 2, &dir_access_class_create_link),
	JS_CFUNC_DEF("set_include_navigational", 1, &dir_access_class_set_include_navigational),
	JS_CFUNC_DEF("get_include_navigational", 0, &dir_access_class_get_include_navigational),
	JS_CFUNC_DEF("set_include_hidden", 1, &dir_access_class_set_include_hidden),
	JS_CFUNC_DEF("get_include_hidden", 0, &dir_access_class_get_include_hidden),
	JS_CFUNC_DEF("is_case_sensitive", 1, &dir_access_class_is_case_sensitive),
};
static const JSCFunctionListEntry dir_access_class_static_funcs[] = {
	JS_CFUNC_DEF("open", 1, &dir_access_class_open),
	JS_CFUNC_DEF("get_open_error", 0, &dir_access_class_get_open_error),
	JS_CFUNC_DEF("get_files_at", 1, &dir_access_class_get_files_at),
	JS_CFUNC_DEF("get_directories_at", 1, &dir_access_class_get_directories_at),
	JS_CFUNC_DEF("get_drive_count", 0, &dir_access_class_get_drive_count),
	JS_CFUNC_DEF("get_drive_name", 1, &dir_access_class_get_drive_name),
	JS_CFUNC_DEF("make_dir_absolute", 1, &dir_access_class_make_dir_absolute),
	JS_CFUNC_DEF("make_dir_recursive_absolute", 1, &dir_access_class_make_dir_recursive_absolute),
	JS_CFUNC_DEF("dir_exists_absolute", 1, &dir_access_class_dir_exists_absolute),
	JS_CFUNC_DEF("copy_absolute", 3, &dir_access_class_copy_absolute),
	JS_CFUNC_DEF("rename_absolute", 2, &dir_access_class_rename_absolute),
	JS_CFUNC_DEF("remove_absolute", 1, &dir_access_class_remove_absolute),
};

static void define_dir_access_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "include_navigational"),
        JS_NewCFunction(ctx, dir_access_class_get_include_navigational, "get_include_navigational", 0),
        JS_NewCFunction(ctx, dir_access_class_set_include_navigational, "set_include_navigational", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "include_hidden"),
        JS_NewCFunction(ctx, dir_access_class_get_include_hidden, "get_include_hidden", 0),
        JS_NewCFunction(ctx, dir_access_class_set_include_hidden, "set_include_hidden", 1),
        JS_PROP_GETSET
    );
	
}

static void define_dir_access_enum(JSContext *ctx, JSValue proto) {
}

static int js_dir_access_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["DirAccess"] = DirAccess::__class_id;
	class_id_list.insert(DirAccess::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), DirAccess::__class_id, &dir_access_class_def);

	JSValue proto = JS_NewObjectClass(ctx, DirAccess::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DirAccess::__class_id, proto);

	define_dir_access_property(ctx, proto);
	define_dir_access_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, dir_access_class_proto_funcs, _countof(dir_access_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, dir_access_class_constructor, "DirAccess", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, dir_access_class_static_funcs, _countof(dir_access_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "DirAccess", ctor);

	return 0;
}

JSModuleDef *_js_init_dir_access_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_dir_access_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DirAccess");
	return m;
}

JSModuleDef *js_init_dir_access_module(JSContext *ctx) {
	return _js_init_dir_access_module(ctx, "@godot/classes/dir_access");
}

void register_dir_access() {
	DirAccess::__init_js_class_id();
	js_init_dir_access_module(ctx);
}