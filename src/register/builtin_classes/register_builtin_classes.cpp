#include "register/builtin_classes/register_builtin_classes.h"

void register_builtin_classes(){
    register_string();
    register_vector2();
    register_vector2i();
    register_rect2();
    register_rect2i();
    register_vector3();
    register_vector3i();
    register_transform2d();
    register_vector4();
    register_vector4i();
    register_plane();
    register_quaternion();
    register_aabb();
    register_basis();
    register_transform3d();
    register_projection();
    register_color();
    register_string_name();
    register_node_path();
    register_rid();
    register_callable();
    register_signal();
    register_dictionary();
    register_array();
    register_packed_byte_array();
    register_packed_int32_array();
    register_packed_int64_array();
    register_packed_float32_array();
    register_packed_float64_array();
    register_packed_string_array();
    register_packed_vector2_array();
    register_packed_vector3_array();
    register_packed_color_array();
    register_packed_vector4_array();
}