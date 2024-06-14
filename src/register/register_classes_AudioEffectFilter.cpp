#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectFilter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectFilter>("AudioEffectFilter")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectFilter::*)() const>(&AudioEffectFilter::get_cutoff), static_cast<void (AudioEffectFilter::*)(double)>(&AudioEffectFilter::set_cutoff)>((new std::string("cutoff_hz"))->c_str())
			.property<static_cast<double (AudioEffectFilter::*)() const>(&AudioEffectFilter::get_resonance), static_cast<void (AudioEffectFilter::*)(double)>(&AudioEffectFilter::set_resonance)>((new std::string("resonance"))->c_str())
			.property<static_cast<double (AudioEffectFilter::*)() const>(&AudioEffectFilter::get_gain), static_cast<void (AudioEffectFilter::*)(double)>(&AudioEffectFilter::set_gain)>((new std::string("gain"))->c_str())
			.property<static_cast<AudioEffectFilter::FilterDB (AudioEffectFilter::*)() const>(&AudioEffectFilter::get_db), static_cast<void (AudioEffectFilter::*)(AudioEffectFilter::FilterDB)>(&AudioEffectFilter::set_db)>((new std::string("db"))->c_str());
	qjs::Value _FilterDB = context->newObject();
	_FilterDB[(new std::string("FILTER_6DB"))->c_str()] = AudioEffectFilter::FilterDB::FILTER_6DB;
	_FilterDB[(new std::string("FILTER_12DB"))->c_str()] = AudioEffectFilter::FilterDB::FILTER_12DB;
	_FilterDB[(new std::string("FILTER_18DB"))->c_str()] = AudioEffectFilter::FilterDB::FILTER_18DB;
	_FilterDB[(new std::string("FILTER_24DB"))->c_str()] = AudioEffectFilter::FilterDB::FILTER_24DB;
	_module.add("FilterDB", std::move(_FilterDB));
}