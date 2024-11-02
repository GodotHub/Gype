
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
  public get noise_type(): number;
  public set noise_type(value): void;
  public get seed(): number;
  public set seed(value): void;
  public get frequency(): number;
  public set frequency(value): void;
  public get offset(): Vector3;
  public set offset(value): void;
  public get fractal_type(): number;
  public set fractal_type(value): void;
  public get fractal_octaves(): number;
  public set fractal_octaves(value): void;
  public get fractal_lacunarity(): number;
  public set fractal_lacunarity(value): void;
  public get fractal_gain(): number;
  public set fractal_gain(value): void;
  public get fractal_weighted_strength(): number;
  public set fractal_weighted_strength(value): void;
  public get fractal_ping_pong_strength(): number;
  public set fractal_ping_pong_strength(value): void;
  public get cellular_distance_function(): number;
  public set cellular_distance_function(value): void;
  public get cellular_jitter(): number;
  public set cellular_jitter(value): void;
  public get cellular_return_type(): number;
  public set cellular_return_type(value): void;
  public get domain_warp_enabled(): boolean;
  public set domain_warp_enabled(value): void;
  public get domain_warp_type(): number;
  public set domain_warp_type(value): void;
  public get domain_warp_amplitude(): number;
  public set domain_warp_amplitude(value): void;
  public get domain_warp_frequency(): number;
  public set domain_warp_frequency(value): void;
  public get domain_warp_fractal_type(): number;
  public set domain_warp_fractal_type(value): void;
  public get domain_warp_fractal_octaves(): number;
  public set domain_warp_fractal_octaves(value): void;
  public get domain_warp_fractal_lacunarity(): number;
  public set domain_warp_fractal_lacunarity(value): void;
  public get domain_warp_fractal_gain(): number;
  public set domain_warp_fractal_gain(value): void;
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