#include "node_test/node_test.hpp"
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include <string>


void test_node() {
	std::string code = R"xxx(
        import { Node } from "godot/classes/node";
        let node = new Node();
        node.set_name('A');
        GD.print(node.get_name());
    )xxx";
	JS_Eval(ctx, code.c_str(), code.size(), "<eval>", JS_EVAL_TYPE_MODULE);
}