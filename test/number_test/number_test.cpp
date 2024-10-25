#include "number_test/number_test.hpp"
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include <string>


void test_number() {
	std::string code = R"xxx(
        let a = 5;
        GD.print(a.toExponential());
        GD.print(a.toFixed());
        GD.print(a.toPrecision());
        GD.print(a.toString());
        GD.print(a.toLocaleString());
        GD.print(a.valueOf());
        GD.print(parseInt('123.321'));
        GD.print(parseFloat('123.321'));
        GD.print(isNaN(0/0));
        GD.print(isFinite(0/1));
        GD.print(Number.isInteger(0));
        GD.print(Number.isSafeInteger(0));
        GD.print(Number.EPSILON);
    )xxx";
    
	// JSValue ret = JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);

    JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}