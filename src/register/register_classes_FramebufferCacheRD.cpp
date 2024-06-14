
#include <godot_cpp/classes/framebuffer_cache_rd.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FramebufferCacheRD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FramebufferCacheRD>("FramebufferCacheRD")
			.constructor<>()
			.base<Object>()
			.static_fun<static_cast<RID (*)(const TypedArray<RID> &, const TypedArray<RDFramebufferPass> &, uint32_t)>(&FramebufferCacheRD::get_cache_multipass)>((new std::string("get_cache_multipass"))->c_str());
}