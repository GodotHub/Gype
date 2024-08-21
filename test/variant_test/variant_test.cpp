#include "variant_test.hpp"
#include "quickjs/utils.h"

void test_variant() {
	JSValue ret = context.eval(R"xxx(
        import { Variant } from 'src/js_godot/variant/variant';
        import { StringName } from 'src/js_godot/variant/string_name';
        import { GDString } from 'src/js_godot/variant/gdstring';
		{
			// let gdstring = new GDString('123');
			// let string_name = new StringName('123');
			// let a = new Variant(gdstring);
			// let b = new Variant(a);
			let c = new Variant(true);
			let d = new Variant(1);
			let e = new Variant(1.0);
			let f = new Variant();
		}
    )xxx",
			"<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(ret)) {
		JSValue excp = JS_GetException(context.ctx);
		const char *str = JS_ToCString(context.ctx, excp);
		printf(str);
	}
	JS_FreeValue(context.ctx, ret);
}