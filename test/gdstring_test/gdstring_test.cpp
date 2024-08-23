#include "gdstring_test.hpp"
#include "quickjs/env.h"

void test_gdstring() {
	JSValue ret = context.eval(R"xxx(
        import { Variant } from 'src/js_godot/variant/variant';
        import { StringName } from 'src/js_godot/variant/string_name';
        import { GDString } from 'src/js_godot/variant/gd_string';
		import { UtilityFunctions } from "src/js_godot/variant/utility_functions";
		{
			let string = new GDString('123456');
			// new Variant(new StringName('123'));
			// UtilityFunctions.print(new Variant(new StringName('123')).opaque);
			// let string2 = new GDString('123789');
			// let string3 = new GDString();
			// GD.print(string.length());
			// GD.print(string.casecmp_to(string2));
			// GD.print(string.nocasecmp_to(string2));
			// GD.print(string.naturalcasecmp_to(string2));
			// GD.print(string.naturalnocasecmp_to(string2));
			// GD.print(string.reverse());
			// GD.print(string.substr(0, 2))
			// UtilityFunctions.print(new Variant(string));
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