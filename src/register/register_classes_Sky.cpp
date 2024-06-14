#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Sky() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Sky>("Sky")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Ref<Material> (Sky::*)() const>(&Sky::get_material), static_cast<void (Sky::*)(const Ref<Material> &)>(&Sky::set_material)>((new std::string("sky_material"))->c_str())
			.property<static_cast<Sky::ProcessMode (Sky::*)() const>(&Sky::get_process_mode), static_cast<void (Sky::*)(Sky::ProcessMode)>(&Sky::set_process_mode)>((new std::string("process_mode"))->c_str())
			.property<static_cast<Sky::RadianceSize (Sky::*)() const>(&Sky::get_radiance_size), static_cast<void (Sky::*)(Sky::RadianceSize)>(&Sky::set_radiance_size)>((new std::string("radiance_size"))->c_str());
	qjs::Value _RadianceSize = context->newObject();
	_RadianceSize[(new std::string("RADIANCE_SIZE_32"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_32;
	_RadianceSize[(new std::string("RADIANCE_SIZE_64"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_64;
	_RadianceSize[(new std::string("RADIANCE_SIZE_128"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_128;
	_RadianceSize[(new std::string("RADIANCE_SIZE_256"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_256;
	_RadianceSize[(new std::string("RADIANCE_SIZE_512"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_512;
	_RadianceSize[(new std::string("RADIANCE_SIZE_1024"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_1024;
	_RadianceSize[(new std::string("RADIANCE_SIZE_2048"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_2048;
	_RadianceSize[(new std::string("RADIANCE_SIZE_MAX"))->c_str()] = Sky::RadianceSize::RADIANCE_SIZE_MAX;
	_module.add("RadianceSize", std::move(_RadianceSize));
	qjs::Value _ProcessMode = context->newObject();
	_ProcessMode[(new std::string("PROCESS_MODE_AUTOMATIC"))->c_str()] = Sky::ProcessMode::PROCESS_MODE_AUTOMATIC;
	_ProcessMode[(new std::string("PROCESS_MODE_QUALITY"))->c_str()] = Sky::ProcessMode::PROCESS_MODE_QUALITY;
	_ProcessMode[(new std::string("PROCESS_MODE_INCREMENTAL"))->c_str()] = Sky::ProcessMode::PROCESS_MODE_INCREMENTAL;
	_ProcessMode[(new std::string("PROCESS_MODE_REALTIME"))->c_str()] = Sky::ProcessMode::PROCESS_MODE_REALTIME;
	_module.add("ProcessMode", std::move(_ProcessMode));
}