
#include <godot_cpp/classes/random_number_generator.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RandomNumberGenerator() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RandomNumberGenerator>("RandomNumberGenerator")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<uint64_t (RandomNumberGenerator::*)()>(&RandomNumberGenerator::get_seed), static_cast<void (RandomNumberGenerator::*)(uint64_t)>(&RandomNumberGenerator::set_seed)>((new std::string("seed"))->c_str())
			.property<static_cast<uint64_t (RandomNumberGenerator::*)() const>(&RandomNumberGenerator::get_state), static_cast<void (RandomNumberGenerator::*)(uint64_t)>(&RandomNumberGenerator::set_state)>((new std::string("state"))->c_str())
			.fun<static_cast<uint32_t (RandomNumberGenerator::*)()>(&RandomNumberGenerator::randi)>((new std::string("randi"))->c_str())
			.fun<static_cast<double (RandomNumberGenerator::*)()>(&RandomNumberGenerator::randf)>((new std::string("randf"))->c_str())
			.fun<static_cast<double (RandomNumberGenerator::*)(double, double)>(&RandomNumberGenerator::randfn)>((new std::string("randfn"))->c_str())
			.fun<static_cast<double (RandomNumberGenerator::*)(double, double)>(&RandomNumberGenerator::randf_range)>((new std::string("randf_range"))->c_str())
			.fun<static_cast<int32_t (RandomNumberGenerator::*)(int32_t, int32_t)>(&RandomNumberGenerator::randi_range)>((new std::string("randi_range"))->c_str())
			.fun<static_cast<int64_t (RandomNumberGenerator::*)(const PackedFloat32Array &)>(&RandomNumberGenerator::rand_weighted)>((new std::string("rand_weighted"))->c_str())
			.fun<static_cast<void (RandomNumberGenerator::*)()>(&RandomNumberGenerator::randomize)>((new std::string("randomize"))->c_str());
}