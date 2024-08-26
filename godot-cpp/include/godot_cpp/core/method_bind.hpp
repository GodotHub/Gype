#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/core/property_info.hpp>
#include <godot_cpp/godot.hpp>
#include <vector>

namespace JSGodot {

class MethodBind {
	uint8_t *name;
	uint8_t *instance_class;
	int argument_count = 0;
	uint32_t hint_flags = GDEXTENSION_METHOD_FLAGS_DEFAULT;

	bool _static = false;
	bool _is_const = false;
	bool _has_return = false;
	bool _vararg = false;

	std::vector<uint8_t *> argument_names;
	GDExtensionVariantType *argument_types = nullptr;
	std::vector<uint8_t *> default_arguments;

protected:
	virtual GDExtensionVariantType gen_argument_type(int p_arg) const = 0;
	virtual PropertyInfo gen_argument_type_info(int p_arg) const = 0;
	void generate_argument_types(int p_count);
	void set_const(bool p_const);
	void set_return(bool p_return);
	void set_static(bool p_static);
	void set_vararg(bool p_vararg);
	void set_argument_count(int p_count);

public:
	uint8_t *get_name() const;
	void set_name(const uint8_t *p_name);
	_FORCE_INLINE_ int get_default_argument_count() const { return (int)default_arguments.size(); }
	_FORCE_INLINE_ const std::vector<uint8_t *> &get_default_arguments() const { return default_arguments; }
	_FORCE_INLINE_ bool has_default_argument(int p_arg) const {
		const int num_default_args = (int)(default_arguments.size());
		const int idx = p_arg - (argument_count - num_default_args);

		if (idx < 0 || idx >= num_default_args) {
			return false;
		} else {
			return true;
		}
	}
	_FORCE_INLINE_ uint8_t *get_default_argument(int p_arg) const {
		const int num_default_args = (int)(default_arguments.size());
		const int idx = p_arg - (argument_count - num_default_args);

		if (idx < 0 || idx >= num_default_args) {
			uint8_t *p_variant = new uint8_t[24]{ 0 };
			// JSGodot::internal::
			JSGodot::internal::gdextension_interface_variant_new_nil(p_variant);
			return p_variant;
		} else {
			return default_arguments[idx];
		}
	}
	_FORCE_INLINE_ uint8_t *get_instance_class() const { return instance_class; }
	_FORCE_INLINE_ void set_instance_class(uint8_t *p_class) { instance_class = p_class; }

	_FORCE_INLINE_ int get_argument_count() const { return argument_count; }
	_FORCE_INLINE_ bool is_const() const { return _is_const; }
	_FORCE_INLINE_ bool is_static() const { return _static; }
	_FORCE_INLINE_ bool is_vararg() const { return _vararg; }
	_FORCE_INLINE_ bool has_return() const { return _has_return; }
	_FORCE_INLINE_ uint32_t get_hint_flags() const { return hint_flags | (is_const() ? GDEXTENSION_METHOD_FLAG_CONST : 0) | (is_vararg() ? GDEXTENSION_METHOD_FLAG_VARARG : 0) | (is_static() ? GDEXTENSION_METHOD_FLAG_STATIC : 0); }
	_FORCE_INLINE_ void set_hint_flags(uint32_t p_hint_flags) { hint_flags = p_hint_flags; }
	void set_argument_names(const std::vector<uint8_t *> &p_names);
	std::vector<uint8_t *> get_argument_names() const;
	void set_default_arguments(const std::vector<uint8_t *> &p_default_arguments) { default_arguments = p_default_arguments; }

	_FORCE_INLINE_ GDExtensionVariantType get_argument_type(int p_argument) const {
		ERR_FAIL_COND_V(p_argument < -1 || p_argument > argument_count, GDEXTENSION_VARIANT_TYPE_NIL);
		return argument_types[p_argument + 1];
	}

	PropertyInfo get_argument_info(int p_argument) const;
	virtual GDExtensionClassMethodArgumentMetadata get_argument_metadata(int p_argument) const = 0;

	std::vector<PropertyInfo> get_arguments_info_list() const {
		std::vector<PropertyInfo> vec;
		// First element is return value
		vec.reserve(argument_count + 1);
		for (int i = 0; i < argument_count + 1; i++) {
			vec.push_back(get_argument_info(i - 1));
		}
		return vec;
	}
	std::vector<GDExtensionClassMethodArgumentMetadata> get_arguments_metadata_list() const {
		std::vector<GDExtensionClassMethodArgumentMetadata> vec;
		// First element is return value
		vec.reserve(argument_count + 1);
		for (int i = 0; i < argument_count + 1; i++) {
			vec.push_back(get_argument_metadata(i - 1));
		}
		return vec;
	}

	virtual uint8_t *call(GDExtensionClassInstancePtr p_instance, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionCallError &r_error) const = 0;
	virtual void ptrcall(GDExtensionClassInstancePtr p_instance, const GDExtensionConstTypePtr *p_args, GDExtensionTypePtr r_return) const = 0;

	static void bind_call(void *p_method_userdata, GDExtensionClassInstancePtr p_instance, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error);
	static void bind_ptrcall(void *p_method_userdata, GDExtensionClassInstancePtr p_instance, const GDExtensionConstTypePtr *p_args, GDExtensionTypePtr r_return);

	virtual ~MethodBind();
};
} // namespace JSGodot
