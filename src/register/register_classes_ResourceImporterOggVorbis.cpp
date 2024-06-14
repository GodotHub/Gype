#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_importer_ogg_vorbis.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceImporterOggVorbis() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceImporterOggVorbis>("ResourceImporterOggVorbis")
			.constructor<>()
			.base<ResourceImporter>()
			.static_fun<static_cast<Ref<AudioStreamOggVorbis> (*)(const PackedByteArray &)>(&ResourceImporterOggVorbis::load_from_buffer)>((new std::string("load_from_buffer"))->c_str())
			.static_fun<static_cast<Ref<AudioStreamOggVorbis> (*)(const String &)>(&ResourceImporterOggVorbis::load_from_file)>((new std::string("load_from_file"))->c_str());
}