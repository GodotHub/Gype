#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_accessor.hpp>

using namespace godot;

void register_classes_GLTFAccessor() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFAccessor>("GLTFAccessor")
           .constructor<>()
           .property<GLTFAccessor::get_buffer_view, GLTFAccessor::set_buffer_view>("buffer_view")
           .property<GLTFAccessor::get_byte_offset, GLTFAccessor::set_byte_offset>("byte_offset")
           .property<GLTFAccessor::get_component_type, GLTFAccessor::set_component_type>("component_type")
           .property<GLTFAccessor::get_normalized, GLTFAccessor::set_normalized>("normalized")
           .property<GLTFAccessor::get_count, GLTFAccessor::set_count>("count")
           .property<GLTFAccessor::get_type, GLTFAccessor::set_type>("type")
           .property<GLTFAccessor::get_min, GLTFAccessor::set_min>("min")
           .property<GLTFAccessor::get_max, GLTFAccessor::set_max>("max")
           .property<GLTFAccessor::get_sparse_count, GLTFAccessor::set_sparse_count>("sparse_count")
           .property<GLTFAccessor::get_sparse_indices_buffer_view, GLTFAccessor::set_sparse_indices_buffer_view>("sparse_indices_buffer_view")
           .property<GLTFAccessor::get_sparse_indices_byte_offset, GLTFAccessor::set_sparse_indices_byte_offset>("sparse_indices_byte_offset")
           .property<GLTFAccessor::get_sparse_indices_component_type, GLTFAccessor::set_sparse_indices_component_type>("sparse_indices_component_type")
           .property<GLTFAccessor::get_sparse_values_buffer_view, GLTFAccessor::set_sparse_values_buffer_view>("sparse_values_buffer_view")
           .property<GLTFAccessor::get_sparse_values_byte_offset, GLTFAccessor::set_sparse_values_byte_offset>("sparse_values_byte_offset")
;}