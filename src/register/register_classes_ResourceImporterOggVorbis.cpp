#include <godot_cpp/classes/resource_importer_ogg_vorbis.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ResourceImporterOggVorbis() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ResourceImporterOggVorbis>("ResourceImporterOggVorbis")
            .constructor<>()
            .base<ResourceImporter>()
            .static_fun<static_cast<Ref<AudioStreamOggVorbis>(*)(const PackedByteArray &)>(&ResourceImporterOggVorbis::load_from_buffer)>("load_from_buffer")
            .static_fun<static_cast<Ref<AudioStreamOggVorbis>(*)(const String &)>(&ResourceImporterOggVorbis::load_from_file)>("load_from_file")
;}