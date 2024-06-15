#include <godot_cpp/classes/audio_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_AudioServer() {
	qjs::Value js_singleton = context->newObject();
    AudioServer *singleton = AudioServer::get_singleton();
    js_singleton.add("set_bus_count", [singleton](int32_t amount)->void{singleton->set_bus_count(amount);});
    js_singleton.add("get_bus_count", [singleton]()->int64_t{return singleton->get_bus_count();});
    js_singleton.add("remove_bus", [singleton](int32_t index)->void{singleton->remove_bus(index);});
    js_singleton.add("add_bus", [singleton](int32_t at_position)->void{singleton->add_bus(at_position);});
    js_singleton.add("move_bus", [singleton](int32_t index,int32_t to_index)->void{singleton->move_bus(index,to_index);});
    js_singleton.add("set_bus_name", [singleton](int32_t bus_idx,const String & name)->void{singleton->set_bus_name(bus_idx,name);});
    js_singleton.add("get_bus_name", [singleton](int32_t bus_idx)->String{return singleton->get_bus_name(bus_idx);});
    js_singleton.add("get_bus_index", [singleton](const StringName & bus_name)->int64_t{return singleton->get_bus_index(bus_name);});
    js_singleton.add("get_bus_channels", [singleton](int32_t bus_idx)->int64_t{return singleton->get_bus_channels(bus_idx);});
    js_singleton.add("set_bus_volume_db", [singleton](int32_t bus_idx,double volume_db)->void{singleton->set_bus_volume_db(bus_idx,volume_db);});
    js_singleton.add("get_bus_volume_db", [singleton](int32_t bus_idx)->double{return singleton->get_bus_volume_db(bus_idx);});
    js_singleton.add("set_bus_send", [singleton](int32_t bus_idx,const StringName & send)->void{singleton->set_bus_send(bus_idx,send);});
    js_singleton.add("get_bus_send", [singleton](int32_t bus_idx)->StringName{return singleton->get_bus_send(bus_idx);});
    js_singleton.add("set_bus_solo", [singleton](int32_t bus_idx,bool enable)->void{singleton->set_bus_solo(bus_idx,enable);});
    js_singleton.add("is_bus_solo", [singleton](int32_t bus_idx)->bool{return singleton->is_bus_solo(bus_idx);});
    js_singleton.add("set_bus_mute", [singleton](int32_t bus_idx,bool enable)->void{singleton->set_bus_mute(bus_idx,enable);});
    js_singleton.add("is_bus_mute", [singleton](int32_t bus_idx)->bool{return singleton->is_bus_mute(bus_idx);});
    js_singleton.add("set_bus_bypass_effects", [singleton](int32_t bus_idx,bool enable)->void{singleton->set_bus_bypass_effects(bus_idx,enable);});
    js_singleton.add("is_bus_bypassing_effects", [singleton](int32_t bus_idx)->bool{return singleton->is_bus_bypassing_effects(bus_idx);});
    js_singleton.add("add_bus_effect", [singleton](int32_t bus_idx,const Ref<AudioEffect> & effect,int32_t at_position)->void{singleton->add_bus_effect(bus_idx,effect,at_position);});
    js_singleton.add("remove_bus_effect", [singleton](int32_t bus_idx,int32_t effect_idx)->void{singleton->remove_bus_effect(bus_idx,effect_idx);});
    js_singleton.add("get_bus_effect_count", [singleton](int32_t bus_idx)->int64_t{return singleton->get_bus_effect_count(bus_idx);});
    js_singleton.add("get_bus_effect", [singleton](int32_t bus_idx,int32_t effect_idx)->Ref<AudioEffect>{return singleton->get_bus_effect(bus_idx,effect_idx);});
    js_singleton.add("get_bus_effect_instance", [singleton](int32_t bus_idx,int32_t effect_idx,int32_t channel)->Ref<AudioEffectInstance>{return singleton->get_bus_effect_instance(bus_idx,effect_idx,channel);});
    js_singleton.add("swap_bus_effects", [singleton](int32_t bus_idx,int32_t effect_idx,int32_t by_effect_idx)->void{singleton->swap_bus_effects(bus_idx,effect_idx,by_effect_idx);});
    js_singleton.add("set_bus_effect_enabled", [singleton](int32_t bus_idx,int32_t effect_idx,bool enabled)->void{singleton->set_bus_effect_enabled(bus_idx,effect_idx,enabled);});
    js_singleton.add("is_bus_effect_enabled", [singleton](int32_t bus_idx,int32_t effect_idx)->bool{return singleton->is_bus_effect_enabled(bus_idx,effect_idx);});
    js_singleton.add("get_bus_peak_volume_left_db", [singleton](int32_t bus_idx,int32_t channel)->double{return singleton->get_bus_peak_volume_left_db(bus_idx,channel);});
    js_singleton.add("get_bus_peak_volume_right_db", [singleton](int32_t bus_idx,int32_t channel)->double{return singleton->get_bus_peak_volume_right_db(bus_idx,channel);});
    js_singleton.add("set_playback_speed_scale", [singleton](double scale)->void{singleton->set_playback_speed_scale(scale);});
    js_singleton.add("get_playback_speed_scale", [singleton]()->double{return singleton->get_playback_speed_scale();});
    js_singleton.add("lock", [singleton]()->void{singleton->lock();});
    js_singleton.add("unlock", [singleton]()->void{singleton->unlock();});
    js_singleton.add("get_speaker_mode", [singleton]()->AudioServer::SpeakerMode{return singleton->get_speaker_mode();});
    js_singleton.add("get_mix_rate", [singleton]()->double{return singleton->get_mix_rate();});
    js_singleton.add("get_output_device_list", [singleton]()->PackedStringArray{return singleton->get_output_device_list();});
    js_singleton.add("get_output_device", [singleton]()->String{return singleton->get_output_device();});
    js_singleton.add("set_output_device", [singleton](const String & name)->void{singleton->set_output_device(name);});
    js_singleton.add("get_time_to_next_mix", [singleton]()->double{return singleton->get_time_to_next_mix();});
    js_singleton.add("get_time_since_last_mix", [singleton]()->double{return singleton->get_time_since_last_mix();});
    js_singleton.add("get_output_latency", [singleton]()->double{return singleton->get_output_latency();});
    js_singleton.add("get_input_device_list", [singleton]()->PackedStringArray{return singleton->get_input_device_list();});
    js_singleton.add("get_input_device", [singleton]()->String{return singleton->get_input_device();});
    js_singleton.add("set_input_device", [singleton](const String & name)->void{singleton->set_input_device(name);});
    js_singleton.add("set_bus_layout", [singleton](const Ref<AudioBusLayout> & bus_layout)->void{singleton->set_bus_layout(bus_layout);});
    js_singleton.add("generate_bus_layout", [singleton]()->Ref<AudioBusLayout>{return singleton->generate_bus_layout();});
    js_singleton.add("set_enable_tagging_used_audio_streams", [singleton](bool enable)->void{singleton->set_enable_tagging_used_audio_streams(enable);});
    context->global()["AudioServer"] = js_singleton;

    qjs::Value _SpeakerMode = context->newObject();
    _SpeakerMode["SPEAKER_MODE_STEREO"] = AudioServer::SpeakerMode::SPEAKER_MODE_STEREO;
    _SpeakerMode["SPEAKER_SURROUND_31"] = AudioServer::SpeakerMode::SPEAKER_SURROUND_31;
    _SpeakerMode["SPEAKER_SURROUND_51"] = AudioServer::SpeakerMode::SPEAKER_SURROUND_51;
    _SpeakerMode["SPEAKER_SURROUND_71"] = AudioServer::SpeakerMode::SPEAKER_SURROUND_71;
    js_singleton["SpeakerMode"] = _SpeakerMode;
}