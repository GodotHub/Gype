#include <godot_cpp/classes/random_number_generator.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RandomNumberGenerator() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RandomNumberGenerator>("RandomNumberGenerator")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<uint64_t(RandomNumberGenerator::*)()>(&RandomNumberGenerator::get_seed),static_cast<void(RandomNumberGenerator::*)(uint64_t)>(&RandomNumberGenerator::set_seed)>("seed")
            .property<static_cast<uint64_t(RandomNumberGenerator::*)()const>(&RandomNumberGenerator::get_state),static_cast<void(RandomNumberGenerator::*)(uint64_t)>(&RandomNumberGenerator::set_state)>("state")
            .fun<static_cast<uint32_t(RandomNumberGenerator::*)()>(&RandomNumberGenerator::randi)>("randi")
            .fun<static_cast<double(RandomNumberGenerator::*)()>(&RandomNumberGenerator::randf)>("randf")
            .fun<static_cast<double(RandomNumberGenerator::*)(double,double)>(&RandomNumberGenerator::randfn)>("randfn")
            .fun<static_cast<double(RandomNumberGenerator::*)(double,double)>(&RandomNumberGenerator::randf_range)>("randf_range")
            .fun<static_cast<int32_t(RandomNumberGenerator::*)(int32_t,int32_t)>(&RandomNumberGenerator::randi_range)>("randi_range")
            .fun<static_cast<int64_t(RandomNumberGenerator::*)(const PackedFloat32Array &)>(&RandomNumberGenerator::rand_weighted)>("rand_weighted")
            .fun<static_cast<void(RandomNumberGenerator::*)()>(&RandomNumberGenerator::randomize)>("randomize")
;}