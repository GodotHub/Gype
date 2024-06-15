#include <godot_cpp/classes/fast_noise_lite.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FastNoiseLite() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<FastNoiseLite>("FastNoiseLite")
            .constructor<>()
            .base<Noise>()
            .property<static_cast<FastNoiseLite::NoiseType(FastNoiseLite::*)()const>(&FastNoiseLite::get_noise_type),static_cast<void(FastNoiseLite::*)(FastNoiseLite::NoiseType)>(&FastNoiseLite::set_noise_type)>("noise_type")
            .property<static_cast<int32_t(FastNoiseLite::*)()const>(&FastNoiseLite::get_seed),static_cast<void(FastNoiseLite::*)(int32_t)>(&FastNoiseLite::set_seed)>("seed")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_frequency),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_frequency)>("frequency")
            .property<static_cast<Vector3(FastNoiseLite::*)()const>(&FastNoiseLite::get_offset),static_cast<void(FastNoiseLite::*)(const Vector3 &)>(&FastNoiseLite::set_offset)>("offset")
            .property<static_cast<FastNoiseLite::FractalType(FastNoiseLite::*)()const>(&FastNoiseLite::get_fractal_type),static_cast<void(FastNoiseLite::*)(FastNoiseLite::FractalType)>(&FastNoiseLite::set_fractal_type)>("fractal_type")
            .property<static_cast<int32_t(FastNoiseLite::*)()const>(&FastNoiseLite::get_fractal_octaves),static_cast<void(FastNoiseLite::*)(int32_t)>(&FastNoiseLite::set_fractal_octaves)>("fractal_octaves")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_fractal_lacunarity),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_lacunarity)>("fractal_lacunarity")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_fractal_gain),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_gain)>("fractal_gain")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_fractal_weighted_strength),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_weighted_strength)>("fractal_weighted_strength")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_fractal_ping_pong_strength),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_ping_pong_strength)>("fractal_ping_pong_strength")
            .property<static_cast<FastNoiseLite::CellularDistanceFunction(FastNoiseLite::*)()const>(&FastNoiseLite::get_cellular_distance_function),static_cast<void(FastNoiseLite::*)(FastNoiseLite::CellularDistanceFunction)>(&FastNoiseLite::set_cellular_distance_function)>("cellular_distance_function")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_cellular_jitter),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_cellular_jitter)>("cellular_jitter")
            .property<static_cast<FastNoiseLite::CellularReturnType(FastNoiseLite::*)()const>(&FastNoiseLite::get_cellular_return_type),static_cast<void(FastNoiseLite::*)(FastNoiseLite::CellularReturnType)>(&FastNoiseLite::set_cellular_return_type)>("cellular_return_type")
            .property<static_cast<bool(FastNoiseLite::*)()const>(&FastNoiseLite::is_domain_warp_enabled),static_cast<void(FastNoiseLite::*)(bool)>(&FastNoiseLite::set_domain_warp_enabled)>("domain_warp_enabled")
            .property<static_cast<FastNoiseLite::DomainWarpType(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_type),static_cast<void(FastNoiseLite::*)(FastNoiseLite::DomainWarpType)>(&FastNoiseLite::set_domain_warp_type)>("domain_warp_type")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_amplitude),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_amplitude)>("domain_warp_amplitude")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_frequency),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_frequency)>("domain_warp_frequency")
            .property<static_cast<FastNoiseLite::DomainWarpFractalType(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_fractal_type),static_cast<void(FastNoiseLite::*)(FastNoiseLite::DomainWarpFractalType)>(&FastNoiseLite::set_domain_warp_fractal_type)>("domain_warp_fractal_type")
            .property<static_cast<int32_t(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_fractal_octaves),static_cast<void(FastNoiseLite::*)(int32_t)>(&FastNoiseLite::set_domain_warp_fractal_octaves)>("domain_warp_fractal_octaves")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_fractal_lacunarity),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_fractal_lacunarity)>("domain_warp_fractal_lacunarity")
            .property<static_cast<double(FastNoiseLite::*)()const>(&FastNoiseLite::get_domain_warp_fractal_gain),static_cast<void(FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_fractal_gain)>("domain_warp_fractal_gain")
;    qjs::Value _NoiseType = context->newObject();
    _NoiseType["TYPE_VALUE"] = FastNoiseLite::NoiseType::TYPE_VALUE;
    _NoiseType["TYPE_VALUE_CUBIC"] = FastNoiseLite::NoiseType::TYPE_VALUE_CUBIC;
    _NoiseType["TYPE_PERLIN"] = FastNoiseLite::NoiseType::TYPE_PERLIN;
    _NoiseType["TYPE_CELLULAR"] = FastNoiseLite::NoiseType::TYPE_CELLULAR;
    _NoiseType["TYPE_SIMPLEX"] = FastNoiseLite::NoiseType::TYPE_SIMPLEX;
    _NoiseType["TYPE_SIMPLEX_SMOOTH"] = FastNoiseLite::NoiseType::TYPE_SIMPLEX_SMOOTH;
    _module.add("NoiseType", std::move(_NoiseType));
    qjs::Value _FractalType = context->newObject();
    _FractalType["FRACTAL_NONE"] = FastNoiseLite::FractalType::FRACTAL_NONE;
    _FractalType["FRACTAL_FBM"] = FastNoiseLite::FractalType::FRACTAL_FBM;
    _FractalType["FRACTAL_RIDGED"] = FastNoiseLite::FractalType::FRACTAL_RIDGED;
    _FractalType["FRACTAL_PING_PONG"] = FastNoiseLite::FractalType::FRACTAL_PING_PONG;
    _module.add("FractalType", std::move(_FractalType));
    qjs::Value _CellularDistanceFunction = context->newObject();
    _CellularDistanceFunction["DISTANCE_EUCLIDEAN"] = FastNoiseLite::CellularDistanceFunction::DISTANCE_EUCLIDEAN;
    _CellularDistanceFunction["DISTANCE_EUCLIDEAN_SQUARED"] = FastNoiseLite::CellularDistanceFunction::DISTANCE_EUCLIDEAN_SQUARED;
    _CellularDistanceFunction["DISTANCE_MANHATTAN"] = FastNoiseLite::CellularDistanceFunction::DISTANCE_MANHATTAN;
    _CellularDistanceFunction["DISTANCE_HYBRID"] = FastNoiseLite::CellularDistanceFunction::DISTANCE_HYBRID;
    _module.add("CellularDistanceFunction", std::move(_CellularDistanceFunction));
    qjs::Value _CellularReturnType = context->newObject();
    _CellularReturnType["RETURN_CELL_VALUE"] = FastNoiseLite::CellularReturnType::RETURN_CELL_VALUE;
    _CellularReturnType["RETURN_DISTANCE"] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE;
    _CellularReturnType["RETURN_DISTANCE2"] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2;
    _CellularReturnType["RETURN_DISTANCE2_ADD"] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_ADD;
    _CellularReturnType["RETURN_DISTANCE2_SUB"] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_SUB;
    _CellularReturnType["RETURN_DISTANCE2_MUL"] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_MUL;
    _CellularReturnType["RETURN_DISTANCE2_DIV"] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_DIV;
    _module.add("CellularReturnType", std::move(_CellularReturnType));
    qjs::Value _DomainWarpType = context->newObject();
    _DomainWarpType["DOMAIN_WARP_SIMPLEX"] = FastNoiseLite::DomainWarpType::DOMAIN_WARP_SIMPLEX;
    _DomainWarpType["DOMAIN_WARP_SIMPLEX_REDUCED"] = FastNoiseLite::DomainWarpType::DOMAIN_WARP_SIMPLEX_REDUCED;
    _DomainWarpType["DOMAIN_WARP_BASIC_GRID"] = FastNoiseLite::DomainWarpType::DOMAIN_WARP_BASIC_GRID;
    _module.add("DomainWarpType", std::move(_DomainWarpType));
    qjs::Value _DomainWarpFractalType = context->newObject();
    _DomainWarpFractalType["DOMAIN_WARP_FRACTAL_NONE"] = FastNoiseLite::DomainWarpFractalType::DOMAIN_WARP_FRACTAL_NONE;
    _DomainWarpFractalType["DOMAIN_WARP_FRACTAL_PROGRESSIVE"] = FastNoiseLite::DomainWarpFractalType::DOMAIN_WARP_FRACTAL_PROGRESSIVE;
    _DomainWarpFractalType["DOMAIN_WARP_FRACTAL_INDEPENDENT"] = FastNoiseLite::DomainWarpFractalType::DOMAIN_WARP_FRACTAL_INDEPENDENT;
    _module.add("DomainWarpFractalType", std::move(_DomainWarpFractalType));
}