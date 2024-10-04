#include "dict_test/dict_test.hpp"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include <string>

void test_dict() {
	std::string code = R"xxx(
        let map = { test: "test", a: 2 };
        GD.print(map);
    )xxx";
	JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}