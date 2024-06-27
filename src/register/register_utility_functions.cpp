#include "register/register_utility_functions.h"
#include "qjspp/utils.h"
#include <godot_cpp/variant/utility_functions.hpp>

using namespace JSGodot;

void register_utility_functions() {
	auto gd = context.newObject();
	gd['print'] = UtilityFunctions::print;
	context.global()['GD'] = gd;
}