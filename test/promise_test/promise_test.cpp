#include "promise_test/promise_test.hpp"
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include <string>

void test_promise() {
	std::string code = R"xxx(
        function asyncTask() {
            return new Promise((resolve, reject)=>{
                resolve();
            });
        }
        async function test() {
            await asyncTask();
            GD.print(123456);
        }
        test();
    )xxx";
	JSValue state = JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
	int err;
	JSContext *pctx;
	while ((err = JS_ExecutePendingJob(rt, &pctx)) > 0) {
		printf("process finish");
	}
	is_exception(ctx, state);
}