#include "register/register_utility_functions.h"
#include "quickjs/utils.h"
#include <godot_cpp/variant/utility_functions.hpp>

using namespace JSGodot;

void register_utility_functions() {
	auto gd = context.newObject();
	gd.add<&UtilityFunctions::print>("print");
	context.global()["GD"] = gd;
}