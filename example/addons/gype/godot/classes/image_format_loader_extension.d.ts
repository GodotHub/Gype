
import { Image } from "@godot/classes/image";
import { ImageFormatLoader } from "@godot/classes/image_format_loader";
import { FileAccess } from "@godot/classes/file_access";

export declare class ImageFormatLoaderExtension extends ImageFormatLoader{
  public _get_recognized_extensions(): PackedStringArray;
  public _load_image(_image: Image, _fileaccess: FileAccess, _flags: number, _scale: number): number;
  public add_format_loader(): void;
  public remove_format_loader(): void;
}