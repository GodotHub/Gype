#include <godot_cpp/classes/uniform_set_cache_rd.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_UniformSetCacheRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<UniformSetCacheRD>("UniformSetCacheRD")
            .constructor<>()
            .base<Object>()
            .static_fun<static_cast<RID(*)(const RID &,uint32_t,const TypedArray<RDUniform> &)>(&UniformSetCacheRD::get_cache)>("get_cache")
;}