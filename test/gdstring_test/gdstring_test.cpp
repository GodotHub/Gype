#include "gdstring_test.hpp"
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include <string>

void test_gdstring() {
	std::string code = R"xxx(
        let a = "123456232";
        let b = "321";
        let c = "123,321,456";
        let d = undefined;
        GD.print('123');
        // GD.print(a);
        // GD.print(a.at(1));
        // GD.print(a.charCodeAt(0));
        // GD.print(a.charAt('1'));
        // GD.print(a.concat(b));
        // GD.print(a.codePointAt(0));
        // GD.print(a.isWellFormed());
        // GD.print(a.toWellFormed());
        // GD.print(a.indexOf('3'));
        // GD.print(a.match(/3/g));
        // GD.print(a.includes('123'));
        // GD.print(a.search('2'));
        // GD.print(c.split(','));
        // GD.print(a.substring(1,3));
        // GD.print(a.substr(1,3));
        // GD.print(a.slice(1,2));
        // GD.print(b.repeat(2));
        // GD.print(b.replace('3','5'));
        // GD.print(a.replaceAll('3','5'));

        // const str = '2024-09-30, 2023-05-22';
        // const regex = /(\d{4})-(\d{2})-(\d{2})/g;
        // const matches = str.matchAll(regex);
        // for (const match of matches) {
        //     GD.print(`Year: ${match[1]}, Month: ${match[2]}, Day: ${match[3]}`);
        // }
    )xxx";

	// JSValue ret = JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);

    JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}