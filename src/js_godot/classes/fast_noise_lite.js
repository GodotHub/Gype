import * as internal from '__internal__';
import { Noise } from 'src/js_godot/classesnoise'
import { Vector3 } from 'src/js_godot/variant/vector3'
class _MethodBindings {
    method_set_noise_type;
    method_get_noise_type;
    method_set_seed;
    method_get_seed;
    method_set_frequency;
    method_get_frequency;
    method_set_offset;
    method_get_offset;
    method_set_fractal_type;
    method_get_fractal_type;
    method_set_fractal_octaves;
    method_get_fractal_octaves;
    method_set_fractal_lacunarity;
    method_get_fractal_lacunarity;
    method_set_fractal_gain;
    method_get_fractal_gain;
    method_set_fractal_weighted_strength;
    method_get_fractal_weighted_strength;
    method_set_fractal_ping_pong_strength;
    method_get_fractal_ping_pong_strength;
    method_set_cellular_distance_function;
    method_get_cellular_distance_function;
    method_set_cellular_jitter;
    method_get_cellular_jitter;
    method_set_cellular_return_type;
    method_get_cellular_return_type;
    method_set_domain_warp_enabled;
    method_is_domain_warp_enabled;
    method_set_domain_warp_type;
    method_get_domain_warp_type;
    method_set_domain_warp_amplitude;
    method_get_domain_warp_amplitude;
    method_set_domain_warp_frequency;
    method_get_domain_warp_frequency;
    method_set_domain_warp_fractal_type;
    method_get_domain_warp_fractal_type;
    method_set_domain_warp_fractal_octaves;
    method_get_domain_warp_fractal_octaves;
    method_set_domain_warp_fractal_lacunarity;
    method_get_domain_warp_fractal_lacunarity;
    method_set_domain_warp_fractal_gain;
    method_get_domain_warp_fractal_gain;
}


export class FastNoiseLite extends Noise{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FastNoiseLite");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_noise_type");
      this._bindings.method_set_noise_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2624461392
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_noise_type");
      this._bindings.method_get_noise_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1458108610
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_seed");
      this._bindings.method_set_seed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_seed");
      this._bindings.method_get_seed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_frequency");
      this._bindings.method_set_frequency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_frequency");
      this._bindings.method_get_frequency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_fractal_type");
      this._bindings.method_set_fractal_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4132731174
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_fractal_type");
      this._bindings.method_get_fractal_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1036889279
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_fractal_octaves");
      this._bindings.method_set_fractal_octaves = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_fractal_octaves");
      this._bindings.method_get_fractal_octaves = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_fractal_lacunarity");
      this._bindings.method_set_fractal_lacunarity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_fractal_lacunarity");
      this._bindings.method_get_fractal_lacunarity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_fractal_gain");
      this._bindings.method_set_fractal_gain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_fractal_gain");
      this._bindings.method_get_fractal_gain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_fractal_weighted_strength");
      this._bindings.method_set_fractal_weighted_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_fractal_weighted_strength");
      this._bindings.method_get_fractal_weighted_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_fractal_ping_pong_strength");
      this._bindings.method_set_fractal_ping_pong_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_fractal_ping_pong_strength");
      this._bindings.method_get_fractal_ping_pong_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_cellular_distance_function");
      this._bindings.method_set_cellular_distance_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1006013267
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_cellular_distance_function");
      this._bindings.method_get_cellular_distance_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2021274088
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_cellular_jitter");
      this._bindings.method_set_cellular_jitter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_cellular_jitter");
      this._bindings.method_get_cellular_jitter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_cellular_return_type");
      this._bindings.method_set_cellular_return_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2654169698
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_cellular_return_type");
      this._bindings.method_get_cellular_return_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3699796343
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_enabled");
      this._bindings.method_set_domain_warp_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("is_domain_warp_enabled");
      this._bindings.method_is_domain_warp_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_type");
      this._bindings.method_set_domain_warp_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3629692980
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_type");
      this._bindings.method_get_domain_warp_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2980162020
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_amplitude");
      this._bindings.method_set_domain_warp_amplitude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_amplitude");
      this._bindings.method_get_domain_warp_amplitude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_frequency");
      this._bindings.method_set_domain_warp_frequency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_frequency");
      this._bindings.method_get_domain_warp_frequency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_fractal_type");
      this._bindings.method_set_domain_warp_fractal_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3999408287
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_fractal_type");
      this._bindings.method_get_domain_warp_fractal_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        407716934
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_fractal_octaves");
      this._bindings.method_set_domain_warp_fractal_octaves = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_fractal_octaves");
      this._bindings.method_get_domain_warp_fractal_octaves = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_fractal_lacunarity");
      this._bindings.method_set_domain_warp_fractal_lacunarity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_fractal_lacunarity");
      this._bindings.method_get_domain_warp_fractal_lacunarity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("set_domain_warp_fractal_gain");
      this._bindings.method_set_domain_warp_fractal_gain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FastNoiseLite");
      let methodname = new StringName("get_domain_warp_fractal_gain");
      this._bindings.method_get_domain_warp_fractal_gain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_noise_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_noise_type,
      this._owner,
      _type
    );
  }
  get_noise_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_noise_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_seed(_seed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_seed,
      this._owner,
      _seed
    );
  }
  get_seed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_seed,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_frequency(_freq) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frequency,
      this._owner,
      _freq
    );
  }
  get_frequency() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frequency,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _offset
    );
  }
  get_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_fractal_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractal_type,
      this._owner,
      _type
    );
  }
  get_fractal_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractal_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_fractal_octaves(_octave_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractal_octaves,
      this._owner,
      _octave_count
    );
  }
  get_fractal_octaves() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractal_octaves,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_fractal_lacunarity(_lacunarity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractal_lacunarity,
      this._owner,
      _lacunarity
    );
  }
  get_fractal_lacunarity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractal_lacunarity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fractal_gain(_gain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractal_gain,
      this._owner,
      _gain
    );
  }
  get_fractal_gain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractal_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fractal_weighted_strength(_weighted_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractal_weighted_strength,
      this._owner,
      _weighted_strength
    );
  }
  get_fractal_weighted_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractal_weighted_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fractal_ping_pong_strength(_ping_pong_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractal_ping_pong_strength,
      this._owner,
      _ping_pong_strength
    );
  }
  get_fractal_ping_pong_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractal_ping_pong_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_cellular_distance_function(_func) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cellular_distance_function,
      this._owner,
      _func
    );
  }
  get_cellular_distance_function() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cellular_distance_function,
      this._owner,
			Variant.INT,
      
    );
  }
  set_cellular_jitter(_jitter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cellular_jitter,
      this._owner,
      _jitter
    );
  }
  get_cellular_jitter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cellular_jitter,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_cellular_return_type(_ret) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cellular_return_type,
      this._owner,
      _ret
    );
  }
  get_cellular_return_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cellular_return_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_domain_warp_enabled(_domain_warp_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_enabled,
      this._owner,
      _domain_warp_enabled
    );
  }
  is_domain_warp_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_domain_warp_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_domain_warp_type(_domain_warp_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_type,
      this._owner,
      _domain_warp_type
    );
  }
  get_domain_warp_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_domain_warp_amplitude(_domain_warp_amplitude) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_amplitude,
      this._owner,
      _domain_warp_amplitude
    );
  }
  get_domain_warp_amplitude() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_amplitude,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_domain_warp_frequency(_domain_warp_frequency) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_frequency,
      this._owner,
      _domain_warp_frequency
    );
  }
  get_domain_warp_frequency() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_frequency,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_domain_warp_fractal_type(_domain_warp_fractal_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_fractal_type,
      this._owner,
      _domain_warp_fractal_type
    );
  }
  get_domain_warp_fractal_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_fractal_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_domain_warp_fractal_octaves(_domain_warp_octave_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_fractal_octaves,
      this._owner,
      _domain_warp_octave_count
    );
  }
  get_domain_warp_fractal_octaves() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_fractal_octaves,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_domain_warp_fractal_lacunarity(_domain_warp_lacunarity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_fractal_lacunarity,
      this._owner,
      _domain_warp_lacunarity
    );
  }
  get_domain_warp_fractal_lacunarity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_fractal_lacunarity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_domain_warp_fractal_gain(_domain_warp_gain) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_domain_warp_fractal_gain,
      this._owner,
      _domain_warp_gain
    );
  }
  get_domain_warp_fractal_gain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_domain_warp_fractal_gain,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  static NoiseType = {
    TYPE_VALUE: 5,
    TYPE_VALUE_CUBIC: 4,
    TYPE_PERLIN: 3,
    TYPE_CELLULAR: 2,
    TYPE_SIMPLEX: 0,
    TYPE_SIMPLEX_SMOOTH: 1,
  }
  static FractalType = {
    FRACTAL_NONE: 0,
    FRACTAL_FBM: 1,
    FRACTAL_RIDGED: 2,
    FRACTAL_PING_PONG: 3,
  }
  static CellularDistanceFunction = {
    DISTANCE_EUCLIDEAN: 0,
    DISTANCE_EUCLIDEAN_SQUARED: 1,
    DISTANCE_MANHATTAN: 2,
    DISTANCE_HYBRID: 3,
  }
  static CellularReturnType = {
    RETURN_CELL_VALUE: 0,
    RETURN_DISTANCE: 1,
    RETURN_DISTANCE2: 2,
    RETURN_DISTANCE2_ADD: 3,
    RETURN_DISTANCE2_SUB: 4,
    RETURN_DISTANCE2_MUL: 5,
    RETURN_DISTANCE2_DIV: 6,
  }
  static DomainWarpType = {
    DOMAIN_WARP_SIMPLEX: 0,
    DOMAIN_WARP_SIMPLEX_REDUCED: 1,
    DOMAIN_WARP_BASIC_GRID: 2,
  }
  static DomainWarpFractalType = {
    DOMAIN_WARP_FRACTAL_NONE: 0,
    DOMAIN_WARP_FRACTAL_PROGRESSIVE: 1,
    DOMAIN_WARP_FRACTAL_INDEPENDENT: 2,
  }
}