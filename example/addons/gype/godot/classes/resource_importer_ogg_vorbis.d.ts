
import { ResourceImporter } from "@godot/classes/resource_importer";
import { AudioStreamOggVorbis } from "@godot/classes/audio_stream_ogg_vorbis";

export declare class ResourceImporterOggVorbis extends ResourceImporter{
  public load_from_buffer(_buffer: PackedByteArray): AudioStreamOggVorbis;
  public load_from_file(_path: String | StringName | string): AudioStreamOggVorbis;
}