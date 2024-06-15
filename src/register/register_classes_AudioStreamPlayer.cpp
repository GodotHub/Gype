#include <godot_cpp/classes/audio_stream_player.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlayer() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<AudioStreamPlayer>("AudioStreamPlayer")
            .constructor<>()
            .base<Node>()
            .property<static_cast<Ref<AudioStream>(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_stream),static_cast<void(AudioStreamPlayer::*)(const Ref<AudioStream> &)>(&AudioStreamPlayer::set_stream)>("stream")
            .property<static_cast<double(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_volume_db),static_cast<void(AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::set_volume_db)>("volume_db")
            .property<static_cast<double(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_pitch_scale),static_cast<void(AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::set_pitch_scale)>("pitch_scale")
            .property<static_cast<bool(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::is_playing)>("playing")
            .property<static_cast<bool(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::is_autoplay_enabled),static_cast<void(AudioStreamPlayer::*)(bool)>(&AudioStreamPlayer::set_autoplay)>("autoplay")
            .property<static_cast<bool(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_stream_paused),static_cast<void(AudioStreamPlayer::*)(bool)>(&AudioStreamPlayer::set_stream_paused)>("stream_paused")
            .property<static_cast<AudioStreamPlayer::MixTarget(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_mix_target),static_cast<void(AudioStreamPlayer::*)(AudioStreamPlayer::MixTarget)>(&AudioStreamPlayer::set_mix_target)>("mix_target")
            .property<static_cast<int32_t(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_max_polyphony),static_cast<void(AudioStreamPlayer::*)(int32_t)>(&AudioStreamPlayer::set_max_polyphony)>("max_polyphony")
            .property<static_cast<StringName(AudioStreamPlayer::*)()const>(&AudioStreamPlayer::get_bus),static_cast<void(AudioStreamPlayer::*)(const StringName &)>(&AudioStreamPlayer::set_bus)>("bus")
            .fun<static_cast<void(AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::play)>("play")
            .fun<static_cast<void(AudioStreamPlayer::*)(double)>(&AudioStreamPlayer::seek)>("seek")
            .fun<static_cast<void(AudioStreamPlayer::*)()>(&AudioStreamPlayer::stop)>("stop")
            .fun<static_cast<double(AudioStreamPlayer::*)()>(&AudioStreamPlayer::get_playback_position)>("get_playback_position")
            .fun<static_cast<bool(AudioStreamPlayer::*)()>(&AudioStreamPlayer::has_stream_playback)>("has_stream_playback")
            .fun<static_cast<Ref<AudioStreamPlayback>(AudioStreamPlayer::*)()>(&AudioStreamPlayer::get_stream_playback)>("get_stream_playback")
;    qjs::Value _MixTarget = context->newObject();
    _MixTarget["MIX_TARGET_STEREO"] = AudioStreamPlayer::MixTarget::MIX_TARGET_STEREO;
    _MixTarget["MIX_TARGET_SURROUND"] = AudioStreamPlayer::MixTarget::MIX_TARGET_SURROUND;
    _MixTarget["MIX_TARGET_CENTER"] = AudioStreamPlayer::MixTarget::MIX_TARGET_CENTER;
    _module.add("MixTarget", std::move(_MixTarget));
}