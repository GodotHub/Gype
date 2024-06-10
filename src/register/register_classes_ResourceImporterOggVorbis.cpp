#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/resource_importer_ogg_vorbis.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceImporterOggVorbis() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceImporterOggVorbis>("ResourceImporterOggVorbis")
			.constructor<>()
			.static_fun<&ResourceImporterOggVorbis::load_from_buffer>("load_from_buffer")
			.static_fun<&ResourceImporterOggVorbis::load_from_file>("load_from_file");
}