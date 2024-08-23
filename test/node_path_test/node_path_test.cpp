#include "node_path_test.hpp"
#include "quickjs/env.h"

void test_node_path() {
	JSValue ret = context.eval(R"xxx(
        import { Variant } from 'src/js_godot/variant/variant';
        import { StringName } from 'src/js_godot/variant/string_name';
        import { GDString } from 'src/js_godot/variant/gd_string';
        import { NodePath } from 'src/js_godot/variant/node_path';
		{
			let node_path = new NodePath('a/b')
			// (node_path.is_absolute());
		}
    )xxx",
			"<input>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(ret)) {
		JSValue excp = JS_GetException(context.ctx);
		const char *str = JS_ToCString(context.ctx, excp);
		printf(str);
	}
	JS_FreeValue(context.ctx, ret);
}