
import { AudioStreamOggVorbis } from "@godot/classes/audio_stream_ogg_vorbis";
import { ResourceImporter } from "@godot/classes/resource_importer";
export declare class ResourceImporterOggVorbis extends ResourceImporter{
  public
 static load_from_buffer(_buffer: PackedByteArray): AudioStreamOggVorbis;
  public
 static load_from_file(_path: GDString | StringName | string): AudioStreamOggVorbis;
}