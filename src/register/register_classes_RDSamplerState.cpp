#include <godot_cpp/classes/rd_sampler_state.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDSamplerState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDSamplerState>("RDSamplerState")
			.constructor<>()
			.property<&RDSamplerState::get_mag_filter, &RDSamplerState::set_mag_filter>("mag_filter")
			.property<&RDSamplerState::get_min_filter, &RDSamplerState::set_min_filter>("min_filter")
			.property<&RDSamplerState::get_mip_filter, &RDSamplerState::set_mip_filter>("mip_filter")
			.property<&RDSamplerState::get_repeat_u, &RDSamplerState::set_repeat_u>("repeat_u")
			.property<&RDSamplerState::get_repeat_v, &RDSamplerState::set_repeat_v>("repeat_v")
			.property<&RDSamplerState::get_repeat_w, &RDSamplerState::set_repeat_w>("repeat_w")
			.property<&RDSamplerState::get_lod_bias, &RDSamplerState::set_lod_bias>("lod_bias")
			.property<&RDSamplerState::get_use_anisotropy, &RDSamplerState::set_use_anisotropy>("use_anisotropy")
			.property<&RDSamplerState::get_anisotropy_max, &RDSamplerState::set_anisotropy_max>("anisotropy_max")
			.property<&RDSamplerState::get_enable_compare, &RDSamplerState::set_enable_compare>("enable_compare")
			.property<&RDSamplerState::get_compare_op, &RDSamplerState::set_compare_op>("compare_op")
			.property<&RDSamplerState::get_min_lod, &RDSamplerState::set_min_lod>("min_lod")
			.property<&RDSamplerState::get_max_lod, &RDSamplerState::set_max_lod>("max_lod")
			.property<&RDSamplerState::get_border_color, &RDSamplerState::set_border_color>("border_color")
			.property<&RDSamplerState::get_unnormalized_uvw, &RDSamplerState::set_unnormalized_uvw>("unnormalized_uvw");
}