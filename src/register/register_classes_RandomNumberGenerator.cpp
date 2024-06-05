#include <godot_cpp/classes/random_number_generator.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RandomNumberGenerator() {
	qjs::Context::Module &_module = _General;
	_module.class_<RandomNumberGenerator>("RandomNumberGenerator")
			.constructor<>()
			.property<&RandomNumberGenerator::get_seed, &RandomNumberGenerator::set_seed>("seed")
			.property<&RandomNumberGenerator::get_state, &RandomNumberGenerator::set_state>("state")
			.fun<static_cast<uint32_t (RandomNumberGenerator::*)()>(&RandomNumberGenerator::randi)>("randi")
			.fun<static_cast<double (RandomNumberGenerator::*)()>(&RandomNumberGenerator::randf)>("randf")
			.fun<static_cast<double (RandomNumberGenerator::*)(double, double)>(&RandomNumberGenerator::randfn)>("randfn")
			.fun<static_cast<double (RandomNumberGenerator::*)(double, double)>(&RandomNumberGenerator::randf_range)>("randf_range")
			.fun<static_cast<int32_t (RandomNumberGenerator::*)(int32_t, int32_t)>(&RandomNumberGenerator::randi_range)>("randi_range")
			.fun<static_cast<void (RandomNumberGenerator::*)()>(&RandomNumberGenerator::randomize)>("randomize");
}