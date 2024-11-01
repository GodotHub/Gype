
import { Noise } from "@godot/classes/noise";

export declare class FastNoiseLite extends Noise{
  public set_noise_type(_type: number): void;
  public get_noise_type(): number;
  public set_seed(_seed: number): void;
  public get_seed(): number;
  public set_frequency(_freq: number): void;
  public get_frequency(): number;
  public set_offset(_offset: Vector3): void;
  public get_offset(): Vector3;
  public set_fractal_type(_type: number): void;
  public get_fractal_type(): number;
  public set_fractal_octaves(_octave_count: number): void;
  public get_fractal_octaves(): number;
  public set_fractal_lacunarity(_lacunarity: number): void;
  public get_fractal_lacunarity(): number;
  public set_fractal_gain(_gain: number): void;
  public get_fractal_gain(): number;
  public set_fractal_weighted_strength(_weighted_strength: number): void;
  public get_fractal_weighted_strength(): number;
  public set_fractal_ping_pong_strength(_ping_pong_strength: number): void;
  public get_fractal_ping_pong_strength(): number;
  public set_cellular_distance_function(_func: number): void;
  public get_cellular_distance_function(): number;
  public set_cellular_jitter(_jitter: number): void;
  public get_cellular_jitter(): number;
  public set_cellular_return_type(_ret: number): void;
  public get_cellular_return_type(): number;
  public set_domain_warp_enabled(_domain_warp_enabled: boolean): void;
  public is_domain_warp_enabled(): boolean;
  public set_domain_warp_type(_domain_warp_type: number): void;
  public get_domain_warp_type(): number;
  public set_domain_warp_amplitude(_domain_warp_amplitude: number): void;
  public get_domain_warp_amplitude(): number;
  public set_domain_warp_frequency(_domain_warp_frequency: number): void;
  public get_domain_warp_frequency(): number;
  public set_domain_warp_fractal_type(_domain_warp_fractal_type: number): void;
  public get_domain_warp_fractal_type(): number;
  public set_domain_warp_fractal_octaves(_domain_warp_octave_count: number): void;
  public get_domain_warp_fractal_octaves(): number;
  public set_domain_warp_fractal_lacunarity(_domain_warp_lacunarity: number): void;
  public get_domain_warp_fractal_lacunarity(): number;
  public set_domain_warp_fractal_gain(_domain_warp_gain: number): void;
  public get_domain_warp_fractal_gain(): number;
  public get noise_type(): number {
    get_noise_type();
  }
  public set noise_type(value): void {
    set_noise_type(value);
  }
  public get seed(): number {
    get_seed();
  }
  public set seed(value): void {
    set_seed(value);
  }
  public get frequency(): number {
    get_frequency();
  }
  public set frequency(value): void {
    set_frequency(value);
  }
  public get offset(): Vector3 {
    get_offset();
  }
  public set offset(value): void {
    set_offset(value);
  }
  public get fractal_type(): number {
    get_fractal_type();
  }
  public set fractal_type(value): void {
    set_fractal_type(value);
  }
  public get fractal_octaves(): number {
    get_fractal_octaves();
  }
  public set fractal_octaves(value): void {
    set_fractal_octaves(value);
  }
  public get fractal_lacunarity(): number {
    get_fractal_lacunarity();
  }
  public set fractal_lacunarity(value): void {
    set_fractal_lacunarity(value);
  }
  public get fractal_gain(): number {
    get_fractal_gain();
  }
  public set fractal_gain(value): void {
    set_fractal_gain(value);
  }
  public get fractal_weighted_strength(): number {
    get_fractal_weighted_strength();
  }
  public set fractal_weighted_strength(value): void {
    set_fractal_weighted_strength(value);
  }
  public get fractal_ping_pong_strength(): number {
    get_fractal_ping_pong_strength();
  }
  public set fractal_ping_pong_strength(value): void {
    set_fractal_ping_pong_strength(value);
  }
  public get cellular_distance_function(): number {
    get_cellular_distance_function();
  }
  public set cellular_distance_function(value): void {
    set_cellular_distance_function(value);
  }
  public get cellular_jitter(): number {
    get_cellular_jitter();
  }
  public set cellular_jitter(value): void {
    set_cellular_jitter(value);
  }
  public get cellular_return_type(): number {
    get_cellular_return_type();
  }
  public set cellular_return_type(value): void {
    set_cellular_return_type(value);
  }
  public get domain_warp_enabled(): boolean {
    is_domain_warp_enabled();
  }
  public set domain_warp_enabled(value): void {
    set_domain_warp_enabled(value);
  }
  public get domain_warp_type(): number {
    get_domain_warp_type();
  }
  public set domain_warp_type(value): void {
    set_domain_warp_type(value);
  }
  public get domain_warp_amplitude(): number {
    get_domain_warp_amplitude();
  }
  public set domain_warp_amplitude(value): void {
    set_domain_warp_amplitude(value);
  }
  public get domain_warp_frequency(): number {
    get_domain_warp_frequency();
  }
  public set domain_warp_frequency(value): void {
    set_domain_warp_frequency(value);
  }
  public get domain_warp_fractal_type(): number {
    get_domain_warp_fractal_type();
  }
  public set domain_warp_fractal_type(value): void {
    set_domain_warp_fractal_type(value);
  }
  public get domain_warp_fractal_octaves(): number {
    get_domain_warp_fractal_octaves();
  }
  public set domain_warp_fractal_octaves(value): void {
    set_domain_warp_fractal_octaves(value);
  }
  public get domain_warp_fractal_lacunarity(): number {
    get_domain_warp_fractal_lacunarity();
  }
  public set domain_warp_fractal_lacunarity(value): void {
    set_domain_warp_fractal_lacunarity(value);
  }
  public get domain_warp_fractal_gain(): number {
    get_domain_warp_fractal_gain();
  }
  public set domain_warp_fractal_gain(value): void {
    set_domain_warp_fractal_gain(value);
  }
  static NoiseType = {
    TYPE_VALUE = 5,
    TYPE_VALUE_CUBIC = 4,
    TYPE_PERLIN = 3,
    TYPE_CELLULAR = 2,
    TYPE_SIMPLEX = 0,
    TYPE_SIMPLEX_SMOOTH = 1,
  }
  static FractalType = {
    FRACTAL_NONE = 0,
    FRACTAL_FBM = 1,
    FRACTAL_RIDGED = 2,
    FRACTAL_PING_PONG = 3,
  }
  static CellularDistanceFunction = {
    DISTANCE_EUCLIDEAN = 0,
    DISTANCE_EUCLIDEAN_SQUARED = 1,
    DISTANCE_MANHATTAN = 2,
    DISTANCE_HYBRID = 3,
  }
  static CellularReturnType = {
    RETURN_CELL_VALUE = 0,
    RETURN_DISTANCE = 1,
    RETURN_DISTANCE2 = 2,
    RETURN_DISTANCE2_ADD = 3,
    RETURN_DISTANCE2_SUB = 4,
    RETURN_DISTANCE2_MUL = 5,
    RETURN_DISTANCE2_DIV = 6,
  }
  static DomainWarpType = {
    DOMAIN_WARP_SIMPLEX = 0,
    DOMAIN_WARP_SIMPLEX_REDUCED = 1,
    DOMAIN_WARP_BASIC_GRID = 2,
  }
  static DomainWarpFractalType = {
    DOMAIN_WARP_FRACTAL_NONE = 0,
    DOMAIN_WARP_FRACTAL_PROGRESSIVE = 1,
    DOMAIN_WARP_FRACTAL_INDEPENDENT = 2,
  }
}