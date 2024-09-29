#ifndef __WRAPPERS_H__
#define __WRAPPERS_H__

#include "utils/str_utils.h"
#include "wrapper/array_wrapper.h"
#include "wrapper/string_name_wrapper.h"
#include "wrapper/string_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

template <typename T, typename /*_SFINAE*/ = void>
struct gd_traits {
	static T unwrap(VariantWrapper *vwrapper) = delete;
	static VariantWrapper wrap(T *wrapper) = delete;
};

#define GET_OPAQUE(clazz, vwrapper) \
	static_cast<clazz *>(gd_get_variant_opaque(static_cast<clazz##Wrapper *>(vwrapper)));

#define GET_VARIANT_OPAQUE(wrapper) GET_OPAQUE(Variant, wrapper)

#define SET_VARIANT_OPAQUE(clazz, wrapper1, wrapper2) \
	gd_set_variant_opaque(static_cast<VariantWrapper *>(wrapper1), GET_VARIANT_OPAQUE(Variant, wrapper2));

#define GD_TRAITS(clazz)                                                                 \
	template <>                                                                          \
	struct gd_traits<clazz##Wrapper> {                                                   \
		static clazz##Wrapper *unwrap(VariantWrapper *vwrapper) {                        \
			return gd_variant_to_##clazz(vwrapper);                                      \
		};                                                                               \
		static VariantWrapper *wrap(clazz##Wrapper *wrapper) {                           \
			clazz *opaque = reinterpret_cast<clazz *>(gd_get_##clazz##_opaque(wrapper)); \
			return gd_new_variant_##clazz(opaque);                                       \
		};                                                                               \
	};

#define WRAP(clazz, wrapper) \
	gd_traits<clazz>::wrap(wrapper);

#define UNWRAP(clazz, wrapper) \
	gd_traits<clazz>::unwrap(wrapper);

GD_TRAITS(String)
GD_TRAITS(StringName)
GD_TRAITS(Array)

#endif // __WRAPPERS_H__