#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>

using namespace godot;

void register_classes_RDPipelineDepthStencilState() {
    qjs::Context::Module &_module = _General;
    _module.class_<RDPipelineDepthStencilState>("RDPipelineDepthStencilState")
           .constructor<>()
           .property<RDPipelineDepthStencilState::get_enable_depth_test, RDPipelineDepthStencilState::set_enable_depth_test>("enable_depth_test")
           .property<RDPipelineDepthStencilState::get_enable_depth_write, RDPipelineDepthStencilState::set_enable_depth_write>("enable_depth_write")
           .property<RDPipelineDepthStencilState::get_depth_compare_operator, RDPipelineDepthStencilState::set_depth_compare_operator>("depth_compare_operator")
           .property<RDPipelineDepthStencilState::get_enable_depth_range, RDPipelineDepthStencilState::set_enable_depth_range>("enable_depth_range")
           .property<RDPipelineDepthStencilState::get_depth_range_min, RDPipelineDepthStencilState::set_depth_range_min>("depth_range_min")
           .property<RDPipelineDepthStencilState::get_depth_range_max, RDPipelineDepthStencilState::set_depth_range_max>("depth_range_max")
           .property<RDPipelineDepthStencilState::get_enable_stencil, RDPipelineDepthStencilState::set_enable_stencil>("enable_stencil")
           .property<RDPipelineDepthStencilState::get_front_op_fail, RDPipelineDepthStencilState::set_front_op_fail>("front_op_fail")
           .property<RDPipelineDepthStencilState::get_front_op_pass, RDPipelineDepthStencilState::set_front_op_pass>("front_op_pass")
           .property<RDPipelineDepthStencilState::get_front_op_depth_fail, RDPipelineDepthStencilState::set_front_op_depth_fail>("front_op_depth_fail")
           .property<RDPipelineDepthStencilState::get_front_op_compare, RDPipelineDepthStencilState::set_front_op_compare>("front_op_compare")
           .property<RDPipelineDepthStencilState::get_front_op_compare_mask, RDPipelineDepthStencilState::set_front_op_compare_mask>("front_op_compare_mask")
           .property<RDPipelineDepthStencilState::get_front_op_write_mask, RDPipelineDepthStencilState::set_front_op_write_mask>("front_op_write_mask")
           .property<RDPipelineDepthStencilState::get_front_op_reference, RDPipelineDepthStencilState::set_front_op_reference>("front_op_reference")
           .property<RDPipelineDepthStencilState::get_back_op_fail, RDPipelineDepthStencilState::set_back_op_fail>("back_op_fail")
           .property<RDPipelineDepthStencilState::get_back_op_pass, RDPipelineDepthStencilState::set_back_op_pass>("back_op_pass")
           .property<RDPipelineDepthStencilState::get_back_op_depth_fail, RDPipelineDepthStencilState::set_back_op_depth_fail>("back_op_depth_fail")
           .property<RDPipelineDepthStencilState::get_back_op_compare, RDPipelineDepthStencilState::set_back_op_compare>("back_op_compare")
           .property<RDPipelineDepthStencilState::get_back_op_compare_mask, RDPipelineDepthStencilState::set_back_op_compare_mask>("back_op_compare_mask")
           .property<RDPipelineDepthStencilState::get_back_op_write_mask, RDPipelineDepthStencilState::set_back_op_write_mask>("back_op_write_mask")
           .property<RDPipelineDepthStencilState::get_back_op_reference, RDPipelineDepthStencilState::set_back_op_reference>("back_op_reference")
;}