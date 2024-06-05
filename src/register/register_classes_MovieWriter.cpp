#include <godot_cpp/classes/audio_server.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/movie_writer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MovieWriter() {
	qjs::Context::Module &_module = _General;
	_module.class_<MovieWriter>("MovieWriter")
			.constructor<>()
			.fun<static_cast<uint32_t (MovieWriter::*)() const>(&MovieWriter::_get_audio_mix_rate)>("_get_audio_mix_rate")
			.fun<static_cast<AudioServer::SpeakerMode (MovieWriter::*)() const>(&MovieWriter::_get_audio_speaker_mode)>("_get_audio_speaker_mode")
			.fun<static_cast<bool (MovieWriter::*)(const String &) const>(&MovieWriter::_handles_file)>("_handles_file")
			.fun<static_cast<Error (MovieWriter::*)(const Vector2i &, uint32_t, const String &)>(&MovieWriter::_write_begin)>("_write_begin")
			.fun<static_cast<Error (MovieWriter::*)(const Ref<Image> &, const void *)>(&MovieWriter::_write_frame)>("_write_frame")
			.fun<static_cast<void (MovieWriter::*)()>(&MovieWriter::_write_end)>("_write_end")
			.static_fun<&MovieWriter::add_writer>("add_writer");
}