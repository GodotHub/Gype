#include "gdstring_test.hpp"
#include "quickjs/env.h"

void test_gdstring() {
	JSValue ret = context.eval(R"xxx(
        import { Variant } from 'src/js_godot/variant/variant';
        import { StringName } from 'src/js_godot/variant/string_name';
        import { GDString } from 'src/js_godot/variant/gd_string';
		{
			let string = new GDString('123456');
			let string2 = new GDString('123789');
			let string3 = new GDString();
			GD.print(string);
			GD.print(string3);
			GD.print(string.length());
			GD.print(string.casecmp_to(string2));
			GD.print(string.nocasecmp_to(string2));
			GD.print(string.naturalcasecmp_to(string2));
			GD.print(string.naturalnocasecmp_to(string2));
			GD.print(string.reverse());
			GD.print(string.substr(0, 2));
			GD.print(new Variant(string));
		}
    )xxx",
			"<eval>", JS_EVAL_TYPE_MODULE);
}