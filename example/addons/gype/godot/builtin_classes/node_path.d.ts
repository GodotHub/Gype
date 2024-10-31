

declare global {
export declare class NodePath {
  constructor();
  constructor(_from: NodePath);
  constructor(_from: String | StringName | string);
  public is_absolute(): boolean;
  public get_name_count(): number;
  public get_name(_idx: number): StringName;
  public get_subname_count(): number;
  public hash(): number;
  public get_subname(_idx: number): StringName;
  public get_concatenated_names(): StringName;
  public get_concatenated_subnames(): StringName;
  public slice(_begin: number, _end: number): NodePath;
  public get_as_property_path(): NodePath;
  public is_empty(): boolean;
}
}

export {};