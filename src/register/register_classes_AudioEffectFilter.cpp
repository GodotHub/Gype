#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectFilter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectFilter>("AudioEffectFilter")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectFilter::*)()const>(&AudioEffectFilter::get_cutoff),static_cast<void(AudioEffectFilter::*)(double)>(&AudioEffectFilter::set_cutoff)>("cutoff_hz")
            .property<static_cast<double(AudioEffectFilter::*)()const>(&AudioEffectFilter::get_resonance),static_cast<void(AudioEffectFilter::*)(double)>(&AudioEffectFilter::set_resonance)>("resonance")
            .property<static_cast<double(AudioEffectFilter::*)()const>(&AudioEffectFilter::get_gain),static_cast<void(AudioEffectFilter::*)(double)>(&AudioEffectFilter::set_gain)>("gain")
            .property<static_cast<AudioEffectFilter::FilterDB(AudioEffectFilter::*)()const>(&AudioEffectFilter::get_db),static_cast<void(AudioEffectFilter::*)(AudioEffectFilter::FilterDB)>(&AudioEffectFilter::set_db)>("db")
;    qjs::Value _FilterDB = context->newObject();
    _FilterDB["FILTER_6DB"] = AudioEffectFilter::FilterDB::FILTER_6DB;
    _FilterDB["FILTER_12DB"] = AudioEffectFilter::FilterDB::FILTER_12DB;
    _FilterDB["FILTER_18DB"] = AudioEffectFilter::FilterDB::FILTER_18DB;
    _FilterDB["FILTER_24DB"] = AudioEffectFilter::FilterDB::FILTER_24DB;
    _module.add("FilterDB", std::move(_FilterDB));
}