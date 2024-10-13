
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/basis.hpp>

using namespace godot;

static void basis_class_finalizer(JSRuntime *rt, JSValue val) {
	Basis *basis = static_cast<Basis *>(JS_GetOpaque(val, Basis::__class_id));
	if (basis)
		memfree(basis);
}

static JSClassDef basis_class_def = {
	"Basis",
	.finalizer = basis_class_finalizer
};

static JSValue basis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Basis *basis_class;
	JSValue obj = JS_NewObjectClass(ctx, Basis::__class_id);
	if (JS_IsException(obj))
		return obj;
	basis_class = memnew(Basis);
	if (!basis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, basis_class);
	return obj;
}

void define_basis_property(JSContext *ctx, JSValue obj) {
}

static int js_basis_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Basis::__class_id);
	classes["Basis"] = Basis::__class_id;
	class_id_list.insert(Basis::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Basis::__class_id, &basis_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Basis::__class_id, proto);
	define_basis_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, basis_class_constructor, "Basis", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Basis", ctor);

	return 0;
}

JSModuleDef *_js_init_basis_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_basis_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Basis");
	return m;
}

JSModuleDef *js_init_basis_module(JSContext *ctx) {
	return _js_init_basis_module(ctx, "godot/classes/basis");
}

void register_basis() {
	Basis::__init_js_class_id();
	js_init_basis_module(ctx);
}