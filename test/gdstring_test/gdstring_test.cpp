#include "gdstring_test.hpp"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include <string>

void test_gdstring() {
	std::string code = R"xxx(
        let a = "123456";
        GD.print(a.at(0));
    )xxx";
	JSValue ret = JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}