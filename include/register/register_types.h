#ifndef TYPED_GDS_REGISTER_TYPES_H
#define TYPED_GDS_REGISTER_TYPES_H

#include <godot_cpp/godot.hpp>

void initialize_tgds_types(godot::ModuleInitializationLevel p_level);
void uninitialize_tgds_types(godot::ModuleInitializationLevel p_level);
void init_quickjs();
void init_language();

#endif // SUMMATOR_REGISTER_TYPES_H