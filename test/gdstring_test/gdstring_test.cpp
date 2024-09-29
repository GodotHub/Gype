#include "gdstring_test.hpp"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include <string>

void test_gdstring() {
	std::string code = R"xxx(
        let a = "123456232";
        // let b = "321";
        // let c = "123,321,456";
        // let d = undefined;
        GD.print(a.at(1));
        GD.print(a.charCodeAt(0));
        GD.print(a.charAt('1'));
        GD.print(a.concat(b));
        // GD.print(a.codePointAt(49));
        // GD.print(a.isWellFormed());
        // GD.print(a.toWellFormed());
        // GD.print(a.indexOf('3'));
        GD.print(a.match('3'));
        // GD.print(a.includes('123'));
        // GD.print(a.search('2'));
        // GD.print(c.split(','));
    )xxx";
	JSValue ret = JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}