

declare global {
export declare class NodePath {
  constructor();
  constructor(_from: NodePath);
  constructor(_from: String);
  public is_absolute(): void;
  public get_name_count(): void;
  public get_name(_idx: number): void;
  public get_subname_count(): void;
  public hash(): void;
  public get_subname(_idx: number): void;
  public get_concatenated_names(): void;
  public get_concatenated_subnames(): void;
  public slice(_begin: number, _end: number): void;
  public get_as_property_path(): void;
  public is_empty(): void;
}
}

export {};