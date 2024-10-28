

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
  public create_depth_correction(_flip_y: boolean): void;
  public create_light_atlas_rect(_rect: Rect2): void;
  public create_perspective(_fovy: number, _aspect: number, _z_near: number, _z_far: number, _flip_fov: boolean): void;
  public create_perspective_hmd(_fovy: number, _aspect: number, _z_near: number, _z_far: number, _flip_fov: boolean, _eye: number, _intraocular_dist: number, _convergence_dist: number): void;
  public create_for_hmd(_eye: number, _aspect: number, _intraocular_dist: number, _display_width: number, _display_to_lens: number, _oversample: number, _z_near: number, _z_far: number): void;
  public create_orthogonal(_left: number, _right: number, _bottom: number, _top: number, _z_near: number, _z_far: number): void;
  public create_orthogonal_aspect(_size: number, _aspect: number, _z_near: number, _z_far: number, _flip_fov: boolean): void;
  public create_frustum(_left: number, _right: number, _bottom: number, _top: number, _z_near: number, _z_far: number): void;
  public create_frustum_aspect(_size: number, _aspect: number, _offset: Vector2, _z_near: number, _z_far: number, _flip_fov: boolean): void;
  public create_fit_aabb(_aabb: AABB): void;
  public determinant(): void;
  public perspective_znear_adjusted(_new_znear: number): void;
  public get_projection_plane(_plane: number): void;
  public flipped_y(): void;
  public jitter_offseted(_offset: Vector2): void;
  public get_fovy(_fovx: number, _aspect: number): void;
  public get_z_far(): void;
  public get_z_near(): void;
  public get_aspect(): void;
  public get_fov(): void;
  public is_orthogonal(): void;
  public get_viewport_half_extents(): void;
  public get_far_plane_half_extents(): void;
  public inverse(): void;
  public get_pixels_per_meter(_for_pixel_width: number): void;
  public get_lod_multiplier(): void;
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