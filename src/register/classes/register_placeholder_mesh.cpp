
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/placeholder_mesh.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef placeholder_mesh_class_def = {
	"PlaceholderMesh",
	.finalizer = placeholder_mesh_class_finalizer
};

static JSValue placeholder_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PlaceholderMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	PlaceholderMesh *placeholder_mesh_class;
	if (argc == 1) 
		placeholder_mesh_class = static_cast<PlaceholderMesh *>(static_cast<Object *>(Variant(*argv)));
	else 
		placeholder_mesh_class = memnew(PlaceholderMesh);
	if (!placeholder_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, placeholder_mesh_class);	
	return obj;
}
static JSValue placeholder_mesh_class_set_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PlaceholderMesh::set_aabb, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry placeholder_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_aabb", 1, &placeholder_mesh_class_set_aabb),
};

static void define_placeholder_mesh_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "aabb"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, placeholder_mesh_class_set_aabb, "set_aabb", 1),
        JS_PROP_GETSET
    );
	
}

static void define_placeholder_mesh_enum(JSContext *ctx, JSValue proto) {
}

static int js_placeholder_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PlaceholderMesh::__class_id);
	classes["PlaceholderMesh"] = PlaceholderMesh::__class_id;
	class_id_list.insert(PlaceholderMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderMesh::__class_id, &placeholder_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PlaceholderMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Mesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderMesh::__class_id, proto);

	define_placeholder_mesh_property(ctx, proto);
	define_placeholder_mesh_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, placeholder_mesh_class_proto_funcs, _countof(placeholder_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, placeholder_mesh_class_constructor, "PlaceholderMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PlaceholderMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderMesh");
	return m;
}

JSModuleDef *js_init_placeholder_mesh_module(JSContext *ctx) {
	return _js_init_placeholder_mesh_module(ctx, "@godot/classes/placeholder_mesh");
}

void register_placeholder_mesh() {
	PlaceholderMesh::__init_js_class_id();
	js_init_placeholder_mesh_module(ctx);
}