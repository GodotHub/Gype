
#include <godot_cpp/classes/fast_noise_lite.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FastNoiseLite() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FastNoiseLite>("FastNoiseLite")
			.constructor<>()
			.base<Noise>()
			.property<static_cast<FastNoiseLite::NoiseType (FastNoiseLite::*)() const>(&FastNoiseLite::get_noise_type), static_cast<void (FastNoiseLite::*)(FastNoiseLite::NoiseType)>(&FastNoiseLite::set_noise_type)>((new std::string("noise_type"))->c_str())
			.property<static_cast<int32_t (FastNoiseLite::*)() const>(&FastNoiseLite::get_seed), static_cast<void (FastNoiseLite::*)(int32_t)>(&FastNoiseLite::set_seed)>((new std::string("seed"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_frequency), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_frequency)>((new std::string("frequency"))->c_str())
			.property<static_cast<Vector3 (FastNoiseLite::*)() const>(&FastNoiseLite::get_offset), static_cast<void (FastNoiseLite::*)(const Vector3 &)>(&FastNoiseLite::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<FastNoiseLite::FractalType (FastNoiseLite::*)() const>(&FastNoiseLite::get_fractal_type), static_cast<void (FastNoiseLite::*)(FastNoiseLite::FractalType)>(&FastNoiseLite::set_fractal_type)>((new std::string("fractal_type"))->c_str())
			.property<static_cast<int32_t (FastNoiseLite::*)() const>(&FastNoiseLite::get_fractal_octaves), static_cast<void (FastNoiseLite::*)(int32_t)>(&FastNoiseLite::set_fractal_octaves)>((new std::string("fractal_octaves"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_fractal_lacunarity), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_lacunarity)>((new std::string("fractal_lacunarity"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_fractal_gain), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_gain)>((new std::string("fractal_gain"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_fractal_weighted_strength), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_weighted_strength)>((new std::string("fractal_weighted_strength"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_fractal_ping_pong_strength), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_fractal_ping_pong_strength)>((new std::string("fractal_ping_pong_strength"))->c_str())
			.property<static_cast<FastNoiseLite::CellularDistanceFunction (FastNoiseLite::*)() const>(&FastNoiseLite::get_cellular_distance_function), static_cast<void (FastNoiseLite::*)(FastNoiseLite::CellularDistanceFunction)>(&FastNoiseLite::set_cellular_distance_function)>((new std::string("cellular_distance_function"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_cellular_jitter), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_cellular_jitter)>((new std::string("cellular_jitter"))->c_str())
			.property<static_cast<FastNoiseLite::CellularReturnType (FastNoiseLite::*)() const>(&FastNoiseLite::get_cellular_return_type), static_cast<void (FastNoiseLite::*)(FastNoiseLite::CellularReturnType)>(&FastNoiseLite::set_cellular_return_type)>((new std::string("cellular_return_type"))->c_str())
			.property<static_cast<bool (FastNoiseLite::*)() const>(&FastNoiseLite::is_domain_warp_enabled), static_cast<void (FastNoiseLite::*)(bool)>(&FastNoiseLite::set_domain_warp_enabled)>((new std::string("domain_warp_enabled"))->c_str())
			.property<static_cast<FastNoiseLite::DomainWarpType (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_type), static_cast<void (FastNoiseLite::*)(FastNoiseLite::DomainWarpType)>(&FastNoiseLite::set_domain_warp_type)>((new std::string("domain_warp_type"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_amplitude), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_amplitude)>((new std::string("domain_warp_amplitude"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_frequency), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_frequency)>((new std::string("domain_warp_frequency"))->c_str())
			.property<static_cast<FastNoiseLite::DomainWarpFractalType (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_fractal_type), static_cast<void (FastNoiseLite::*)(FastNoiseLite::DomainWarpFractalType)>(&FastNoiseLite::set_domain_warp_fractal_type)>((new std::string("domain_warp_fractal_type"))->c_str())
			.property<static_cast<int32_t (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_fractal_octaves), static_cast<void (FastNoiseLite::*)(int32_t)>(&FastNoiseLite::set_domain_warp_fractal_octaves)>((new std::string("domain_warp_fractal_octaves"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_fractal_lacunarity), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_fractal_lacunarity)>((new std::string("domain_warp_fractal_lacunarity"))->c_str())
			.property<static_cast<double (FastNoiseLite::*)() const>(&FastNoiseLite::get_domain_warp_fractal_gain), static_cast<void (FastNoiseLite::*)(double)>(&FastNoiseLite::set_domain_warp_fractal_gain)>((new std::string("domain_warp_fractal_gain"))->c_str());
	qjs::Value _NoiseType = context->newObject();
	_NoiseType[(new std::string("TYPE_VALUE"))->c_str()] = FastNoiseLite::NoiseType::TYPE_VALUE;
	_NoiseType[(new std::string("TYPE_VALUE_CUBIC"))->c_str()] = FastNoiseLite::NoiseType::TYPE_VALUE_CUBIC;
	_NoiseType[(new std::string("TYPE_PERLIN"))->c_str()] = FastNoiseLite::NoiseType::TYPE_PERLIN;
	_NoiseType[(new std::string("TYPE_CELLULAR"))->c_str()] = FastNoiseLite::NoiseType::TYPE_CELLULAR;
	_NoiseType[(new std::string("TYPE_SIMPLEX"))->c_str()] = FastNoiseLite::NoiseType::TYPE_SIMPLEX;
	_NoiseType[(new std::string("TYPE_SIMPLEX_SMOOTH"))->c_str()] = FastNoiseLite::NoiseType::TYPE_SIMPLEX_SMOOTH;
	_module.add("NoiseType", std::move(_NoiseType));
	qjs::Value _FractalType = context->newObject();
	_FractalType[(new std::string("FRACTAL_NONE"))->c_str()] = FastNoiseLite::FractalType::FRACTAL_NONE;
	_FractalType[(new std::string("FRACTAL_FBM"))->c_str()] = FastNoiseLite::FractalType::FRACTAL_FBM;
	_FractalType[(new std::string("FRACTAL_RIDGED"))->c_str()] = FastNoiseLite::FractalType::FRACTAL_RIDGED;
	_FractalType[(new std::string("FRACTAL_PING_PONG"))->c_str()] = FastNoiseLite::FractalType::FRACTAL_PING_PONG;
	_module.add("FractalType", std::move(_FractalType));
	qjs::Value _CellularDistanceFunction = context->newObject();
	_CellularDistanceFunction[(new std::string("DISTANCE_EUCLIDEAN"))->c_str()] = FastNoiseLite::CellularDistanceFunction::DISTANCE_EUCLIDEAN;
	_CellularDistanceFunction[(new std::string("DISTANCE_EUCLIDEAN_SQUARED"))->c_str()] = FastNoiseLite::CellularDistanceFunction::DISTANCE_EUCLIDEAN_SQUARED;
	_CellularDistanceFunction[(new std::string("DISTANCE_MANHATTAN"))->c_str()] = FastNoiseLite::CellularDistanceFunction::DISTANCE_MANHATTAN;
	_CellularDistanceFunction[(new std::string("DISTANCE_HYBRID"))->c_str()] = FastNoiseLite::CellularDistanceFunction::DISTANCE_HYBRID;
	_module.add("CellularDistanceFunction", std::move(_CellularDistanceFunction));
	qjs::Value _CellularReturnType = context->newObject();
	_CellularReturnType[(new std::string("RETURN_CELL_VALUE"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_CELL_VALUE;
	_CellularReturnType[(new std::string("RETURN_DISTANCE"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE;
	_CellularReturnType[(new std::string("RETURN_DISTANCE2"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2;
	_CellularReturnType[(new std::string("RETURN_DISTANCE2_ADD"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_ADD;
	_CellularReturnType[(new std::string("RETURN_DISTANCE2_SUB"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_SUB;
	_CellularReturnType[(new std::string("RETURN_DISTANCE2_MUL"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_MUL;
	_CellularReturnType[(new std::string("RETURN_DISTANCE2_DIV"))->c_str()] = FastNoiseLite::CellularReturnType::RETURN_DISTANCE2_DIV;
	_module.add("CellularReturnType", std::move(_CellularReturnType));
	qjs::Value _DomainWarpType = context->newObject();
	_DomainWarpType[(new std::string("DOMAIN_WARP_SIMPLEX"))->c_str()] = FastNoiseLite::DomainWarpType::DOMAIN_WARP_SIMPLEX;
	_DomainWarpType[(new std::string("DOMAIN_WARP_SIMPLEX_REDUCED"))->c_str()] = FastNoiseLite::DomainWarpType::DOMAIN_WARP_SIMPLEX_REDUCED;
	_DomainWarpType[(new std::string("DOMAIN_WARP_BASIC_GRID"))->c_str()] = FastNoiseLite::DomainWarpType::DOMAIN_WARP_BASIC_GRID;
	_module.add("DomainWarpType", std::move(_DomainWarpType));
	qjs::Value _DomainWarpFractalType = context->newObject();
	_DomainWarpFractalType[(new std::string("DOMAIN_WARP_FRACTAL_NONE"))->c_str()] = FastNoiseLite::DomainWarpFractalType::DOMAIN_WARP_FRACTAL_NONE;
	_DomainWarpFractalType[(new std::string("DOMAIN_WARP_FRACTAL_PROGRESSIVE"))->c_str()] = FastNoiseLite::DomainWarpFractalType::DOMAIN_WARP_FRACTAL_PROGRESSIVE;
	_DomainWarpFractalType[(new std::string("DOMAIN_WARP_FRACTAL_INDEPENDENT"))->c_str()] = FastNoiseLite::DomainWarpFractalType::DOMAIN_WARP_FRACTAL_INDEPENDENT;
	_module.add("DomainWarpFractalType", std::move(_DomainWarpFractalType));
}