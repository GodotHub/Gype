
import { AudioStream } from "@godot/classes/audio_stream";
import { Node3D } from "@godot/classes/node3d";
import { AudioStreamPlayback } from "@godot/classes/audio_stream_playback";
export declare class AudioStreamPlayer3D extends Node3D{
  public set_stream(_stream: AudioStream): void;
  public get_stream(): AudioStream;
  public set_volume_db(_volume_db: number): void;
  public get_volume_db(): number;
  public set_unit_size(_unit_size: number): void;
  public get_unit_size(): number;
  public set_max_db(_max_db: number): void;
  public get_max_db(): number;
  public set_pitch_scale(_pitch_scale: number): void;
  public get_pitch_scale(): number;
  public play(_from_position: number = 0.0): void;
  public seek(_to_position: number): void;
  public stop(): void;
  public is_playing(): boolean;
  public get_playback_position(): number;
  public set_bus(_bus: GDString | StringName | string): void;
  public get_bus(): StringName;
  public set_autoplay(_enable: boolean): void;
  public is_autoplay_enabled(): boolean;
  public set_max_distance(_meters: number): void;
  public get_max_distance(): number;
  public set_area_mask(_mask: number): void;
  public get_area_mask(): number;
  public set_emission_angle(_degrees: number): void;
  public get_emission_angle(): number;
  public set_emission_angle_enabled(_enabled: boolean): void;
  public is_emission_angle_enabled(): boolean;
  public set_emission_angle_filter_attenuation_db(_db: number): void;
  public get_emission_angle_filter_attenuation_db(): number;
  public set_attenuation_filter_cutoff_hz(_degrees: number): void;
  public get_attenuation_filter_cutoff_hz(): number;
  public set_attenuation_filter_db(_db: number): void;
  public get_attenuation_filter_db(): number;
  public set_attenuation_model(_model: number): void;
  public get_attenuation_model(): number;
  public set_doppler_tracking(_mode: number): void;
  public get_doppler_tracking(): number;
  public set_stream_paused(_pause: boolean): void;
  public get_stream_paused(): boolean;
  public set_max_polyphony(_max_polyphony: number): void;
  public get_max_polyphony(): number;
  public set_panning_strength(_panning_strength: number): void;
  public get_panning_strength(): number;
  public has_stream_playback(): boolean;
  public get_stream_playback(): AudioStreamPlayback;
  public set_playback_type(_playback_type: number): void;
  public get_playback_type(): number;
  public get stream(): AudioStream;
  public set stream(value): void;
  public get attenuation_model(): number;
  public set attenuation_model(value): void;
  public get volume_db(): number;
  public set volume_db(value): void;
  public get unit_size(): number;
  public set unit_size(value): void;
  public get max_db(): number;
  public set max_db(value): void;
  public get pitch_scale(): number;
  public set pitch_scale(value): void;
  public get playing(): boolean;
  public set playing(value): void;
  public get autoplay(): boolean;
  public set autoplay(value): void;
  public get stream_paused(): boolean;
  public set stream_paused(value): void;
  public get max_distance(): number;
  public set max_distance(value): void;
  public get max_polyphony(): number;
  public set max_polyphony(value): void;
  public get panning_strength(): number;
  public set panning_strength(value): void;
  public get bus(): StringName;
  public set bus(value): void;
  public get area_mask(): number;
  public set area_mask(value): void;
  public get playback_type(): number;
  public set playback_type(value): void;
  public get emission_angle_enabled(): boolean;
  public set emission_angle_enabled(value): void;
  public get emission_angle_degrees(): number;
  public set emission_angle_degrees(value): void;
  public get emission_angle_filter_attenuation_db(): number;
  public set emission_angle_filter_attenuation_db(value): void;
  public get attenuation_filter_cutoff_hz(): number;
  public set attenuation_filter_cutoff_hz(value): void;
  public get attenuation_filter_db(): number;
  public set attenuation_filter_db(value): void;
  public get doppler_tracking(): number;
  public set doppler_tracking(value): void;
  static AttenuationModel = {
    ATTENUATION_INVERSE_DISTANCE = 0,
    ATTENUATION_INVERSE_SQUARE_DISTANCE = 1,
    ATTENUATION_LOGARITHMIC = 2,
    ATTENUATION_DISABLED = 3,
  }
  static DopplerTracking = {
    DOPPLER_TRACKING_DISABLED = 0,
    DOPPLER_TRACKING_IDLE_STEP = 1,
    DOPPLER_TRACKING_PHYSICS_STEP = 2,
  }
  public get finished(): Signal;
}