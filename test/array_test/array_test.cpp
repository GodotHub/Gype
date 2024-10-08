#include "array_test.hpp"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "utils/env.h"
#include <string>

void test_array() {
	std::string code = R"xxx(
        let arr = [1.0,[2,2,-1],3,'4',5,true];
        let arr2 = [2,5];
        let arr3 = [1,2,3,4,5,6];
        // arr3[10] = 100;
        GD.print(arr);
        GD.print(arr3[10]);
        GD.print(arr[1]);
        GD.print(arr.at(1));
        GD.print(arr.with(0,-50));
        GD.print(arr2.every(e=>e>1))
        GD.print(arr.concat(arr2));
        GD.print(arr2.map(e=>e*10));
        GD.print(arr2.reduce((e1,e2)=>Math.max(e1, e2)));
        GD.print(arr3.fill(-10, 1, 3));
        GD.print(arr.find(e=>e==3));
        GD.print(arr.indexOf(3));
        arr3.pop();
        arr3.push(100);
        GD.print(arr3);
        arr3.shift();
        arr3.unshift(100);
        GD.print(arr3);
        GD.print(arr3.reverse());
        GD.print(arr3.toReversed());
        GD.print(arr3.slice(1,3));
        // for (const value of arr.values()) {
        //     GD.print(value);
        // }
        // for (const key of arr.keys()) {
        //     GD.print(key);
        // }
        // for (const entry of arr.entries()) {
        //     GD.print(entry);
        // }
    )xxx";
	JSValue ret = JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
	is_exception(ctx, ret);
}