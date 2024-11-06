

declare global {
export declare class Projection {
  constructor();
  constructor(_from: Projection);
  constructor(_from: Transform3D);
  constructor(_x_axis: Vector4, _y_axis: Vector4, _z_axis: Vector4, _w_axis: Vector4);
  public x: Vector4;
  public y: Vector4;
  public z: Vector4;
  public w: Vector4;
  public create_depth_correction(_flip_y: boolean): Projection;
  public create_light_atlas_rect(_rect: Rect2): Projection;
  public create_perspective(_fovy: number, _aspect: number, _z_near: number, _z_far: number, _flip_fov: boolean = false): Projection;
  public create_perspective_hmd(_fovy: number, _aspect: number, _z_near: number, _z_far: number, _flip_fov: boolean, _eye: number, _intraocular_dist: number, _convergence_dist: number): Projection;
  public create_for_hmd(_eye: number, _aspect: number, _intraocular_dist: number, _display_width: number, _display_to_lens: number, _oversample: number, _z_near: number, _z_far: number): Projection;
  public create_orthogonal(_left: number, _right: number, _bottom: number, _top: number, _z_near: number, _z_far: number): Projection;
  public create_orthogonal_aspect(_size: number, _aspect: number, _z_near: number, _z_far: number, _flip_fov: boolean = false): Projection;
  public create_frustum(_left: number, _right: number, _bottom: number, _top: number, _z_near: number, _z_far: number): Projection;
  public create_frustum_aspect(_size: number, _aspect: number, _offset: Vector2, _z_near: number, _z_far: number, _flip_fov: boolean = false): Projection;
  public create_fit_aabb(_aabb: AABB): Projection;
  public determinant(): number;
  public perspective_znear_adjusted(_new_znear: number): Projection;
  public get_projection_plane(_plane: number): Plane;
  public flipped_y(): Projection;
  public jitter_offseted(_offset: Vector2): Projection;
  public get_fovy(_fovx: number, _aspect: number): number;
  public get_z_far(): number;
  public get_z_near(): number;
  public get_aspect(): number;
  public get_fov(): number;
  public is_orthogonal(): boolean;
  public get_viewport_half_extents(): Vector2;
  public get_far_plane_half_extents(): Vector2;
  public inverse(): Projection;
  public get_pixels_per_meter(_for_pixel_width: number): number;
  public get_lod_multiplier(): number;
  static Planes = {
    PLANE_NEAR = 0,
    PLANE_FAR = 1,
    PLANE_LEFT = 2,
    PLANE_TOP = 3,
    PLANE_RIGHT = 4,
    PLANE_BOTTOM = 5,
  }
}
}

export {};