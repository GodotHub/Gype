#include "class_db_test/class_db_test.hpp"
#include "quickjs/env.h"

void test_class_db() {
	context.eval(R"xxx(
        import { ClassDB } from 'src/js_godot/core/class_db';
		import { UtilityFunctions } from "src/js_godot/variant/utility_functions";
        ClassDB._init_bindings();
        ClassDB.singleton.get_class_list();
    )xxx",
			"<eval>", JS_EVAL_TYPE_MODULE);
}