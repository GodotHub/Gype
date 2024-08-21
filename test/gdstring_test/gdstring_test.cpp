#include "gdstring_test.hpp"
#include "quickjs/utils.h"

void test_gdstring() {
	JSValue ret = context.eval(R"xxx(
        import { Variant } from 'src/js_godot/variant/variant';
        import { StringName } from 'src/js_godot/variant/string_name';
        import { GDString } from 'src/js_godot/variant/gdstring';
		{
			let string = new GDString('123456');
			let string2 = new GDString('123789');
			// GD.print(string.length());
			GD.print(string.casecmp_to(string2));
			// GD.print(string.nocasecmp_to(string2));
			// GD.print(string.naturalcasecmp_to());
			// GD.print(string.naturalnocasecmp_to());
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