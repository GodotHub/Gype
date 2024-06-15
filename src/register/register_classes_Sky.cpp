#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Sky() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Sky>("Sky")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Ref<Material>(Sky::*)()const>(&Sky::get_material),static_cast<void(Sky::*)(const Ref<Material> &)>(&Sky::set_material)>("sky_material")
            .property<static_cast<Sky::ProcessMode(Sky::*)()const>(&Sky::get_process_mode),static_cast<void(Sky::*)(Sky::ProcessMode)>(&Sky::set_process_mode)>("process_mode")
            .property<static_cast<Sky::RadianceSize(Sky::*)()const>(&Sky::get_radiance_size),static_cast<void(Sky::*)(Sky::RadianceSize)>(&Sky::set_radiance_size)>("radiance_size")
;    qjs::Value _RadianceSize = context->newObject();
    _RadianceSize["RADIANCE_SIZE_32"] = Sky::RadianceSize::RADIANCE_SIZE_32;
    _RadianceSize["RADIANCE_SIZE_64"] = Sky::RadianceSize::RADIANCE_SIZE_64;
    _RadianceSize["RADIANCE_SIZE_128"] = Sky::RadianceSize::RADIANCE_SIZE_128;
    _RadianceSize["RADIANCE_SIZE_256"] = Sky::RadianceSize::RADIANCE_SIZE_256;
    _RadianceSize["RADIANCE_SIZE_512"] = Sky::RadianceSize::RADIANCE_SIZE_512;
    _RadianceSize["RADIANCE_SIZE_1024"] = Sky::RadianceSize::RADIANCE_SIZE_1024;
    _RadianceSize["RADIANCE_SIZE_2048"] = Sky::RadianceSize::RADIANCE_SIZE_2048;
    _RadianceSize["RADIANCE_SIZE_MAX"] = Sky::RadianceSize::RADIANCE_SIZE_MAX;
    _module.add("RadianceSize", std::move(_RadianceSize));
    qjs::Value _ProcessMode = context->newObject();
    _ProcessMode["PROCESS_MODE_AUTOMATIC"] = Sky::ProcessMode::PROCESS_MODE_AUTOMATIC;
    _ProcessMode["PROCESS_MODE_QUALITY"] = Sky::ProcessMode::PROCESS_MODE_QUALITY;
    _ProcessMode["PROCESS_MODE_INCREMENTAL"] = Sky::ProcessMode::PROCESS_MODE_INCREMENTAL;
    _ProcessMode["PROCESS_MODE_REALTIME"] = Sky::ProcessMode::PROCESS_MODE_REALTIME;
    _module.add("ProcessMode", std::move(_ProcessMode));
}