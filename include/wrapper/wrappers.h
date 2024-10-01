#ifndef __WRAPPERS_H__
#define __WRAPPERS_H__

#include "quickjs/quickjs.h"
#include "utils/str_utils.h"
#include "wrapper/array_wrapper.h"
#include "wrapper/string_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

#define GET_OPAQUE(type, vwrapper) \
	static_cast<type *>(gd_##type##_get_opaque(static_cast<type##Wrapper *>(vwrapper)))

#define GET_VARIANT_OPAQUE(wrapper) GET_OPAQUE(Variant, wrapper)

#define SET_VARIANT_OPAQUE(type, wrapper1, wrapper2) \
	gd_set_variant_opaque(static_cast<VariantWrapper *>(wrapper1), GET_VARIANT_OPAQUE(Variant, wrapper2))

#define GD_TRAITS(type)                                                                       \
	template <>                                                                               \
	struct gd_traits<type##Wrapper> {                                                         \
		static type##Wrapper *unwrap(VariantWrapper *vwrapper) {                              \
			return gd_variant_to_##type(vwrapper);                                            \
		};                                                                                    \
		static VariantWrapper *wrap(type##Wrapper *wrapper) {                                 \
			type *opaque = reinterpret_cast<type *>(gd_##type##_wrapper_get_opaque(wrapper)); \
			return gd_new_variant_##type(opaque);                                             \
		};                                                                                    \
	};

namespace Wrapper {

template <typename T, typename /*_SFINAE*/ = void>
struct gd_traits {
	static T unwrap(VariantWrapper *vwrapper) = delete;
	static VariantWrapper wrap(T *wrapper) = delete;
};

#define WRAP(type, wrapper) \
	gd_traits<type>::wrap(wrapper);

#define UNWRAP(type, wrapper) \
	gd_traits<type>::unwrap(wrapper);

template <typename T>
T convert_to(JSContext *ctx, JSValue val) {
	return (T)gd_get_wrapper(ctx, val);
}

} // namespace Wrapper

#endif // __WRAPPERS_H__