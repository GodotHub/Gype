#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rd_uniform.hpp>

using namespace godot;

void register_classes_RDUniform() {
    qjs::Context::Module &_module = _General;
    _module.class_<RDUniform>("RDUniform")
           .constructor<>()
           .property<RDUniform::get_uniform_type, RDUniform::set_uniform_type>("uniform_type")
           .property<RDUniform::get_binding, RDUniform::set_binding>("binding")
		    .fun<static_cast<void(RDUniform::*)(const RID &)>(&RDUniform::add_id)>("add_id")
		    .fun<static_cast<void(RDUniform::*)()>(&RDUniform::clear_ids)>("clear_ids")
		    .fun<static_cast<TypedArray<RID>(RDUniform::*)()const>(&RDUniform::get_ids)>("get_ids")
;}