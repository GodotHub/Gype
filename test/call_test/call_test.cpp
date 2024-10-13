#include "dict_test/dict_test.hpp"
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include <string>

void test_call() {
	std::string code = R"xxx(
        function my() {
            GD.print('my');
        }
        class Test {
            test() {
                GD.print('func test');
            }
        }
        my();
    )xxx";
	JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}