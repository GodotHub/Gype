
#include <godot_cpp/variant/rid.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_RID() {
	_Variant.class_<RID>("RID")
			.constructor<>()
			.constructor<const RID &>("RID_1")

			.fun<static_cast<bool (RID::*)() const>(&RID::is_valid)>("is_valid")
			.fun<static_cast<int64_t (RID::*)() const>(&RID::get_id)>("get_id");
}