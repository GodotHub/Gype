
#include <godot_cpp/classes/audio_server.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/movie_writer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MovieWriter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MovieWriter>("MovieWriter")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<uint32_t (MovieWriter::*)() const>(&MovieWriter::_get_audio_mix_rate)>((new std::string("_get_audio_mix_rate"))->c_str())
			.fun<static_cast<AudioServer::SpeakerMode (MovieWriter::*)() const>(&MovieWriter::_get_audio_speaker_mode)>((new std::string("_get_audio_speaker_mode"))->c_str())
			.fun<static_cast<bool (MovieWriter::*)(const String &) const>(&MovieWriter::_handles_file)>((new std::string("_handles_file"))->c_str())
			.fun<static_cast<Error (MovieWriter::*)(const Vector2i &, uint32_t, const String &)>(&MovieWriter::_write_begin)>((new std::string("_write_begin"))->c_str())
			.fun<static_cast<Error (MovieWriter::*)(const Ref<Image> &, const void *)>(&MovieWriter::_write_frame)>((new std::string("_write_frame"))->c_str())
			.fun<static_cast<void (MovieWriter::*)()>(&MovieWriter::_write_end)>((new std::string("_write_end"))->c_str())
			.static_fun<static_cast<void (*)(MovieWriter *)>(&MovieWriter::add_writer)>((new std::string("add_writer"))->c_str());
}