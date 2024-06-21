#ifndef TS_INSTANCE_SUPPORT
#define TS_INSTANCE_SUPPORT

#include <gdextension_interface.h>
#include <stdint.h>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/templates/list.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "support/typescript.h"
#include "support/typescript_language.h"

class Typescript;

namespace godot {
class Object;
template <typename T>
class Ref;
} // namespace godot

using namespace godot;

typedef struct TypescriptInstanceInfo TypescriptInstanceInfo;

class TypescriptInstance {
public:
	static TypescriptInstanceInfo *instance_info;

	explicit TypescriptInstance(const Ref<Typescript> &parent, Object *host_object);

	static GDExtensionScriptInstancePtr create_instance(const Ref<Typescript> &parent, Object *host_object);

	List<GDExtensionPropertyInfo> get_properties() { return properties; };
	HashMap<StringName, Variant> get_values() { return values; };
	const Typescript *get_script() const { return _parent; };

	friend class Typescript;

private:
	const Typescript *_parent;
	Object *_host_object;
	List<GDExtensionPropertyInfo> properties;
	HashMap<StringName, Variant> values;
};

struct TypescriptInstanceInfo : GDExtensionScriptInstanceInfo3 {
public:
	TypescriptInstanceInfo();
};

GDExtensionBool _set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value);
GDExtensionBool _get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
const GDExtensionPropertyInfo *_get_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, uint32_t *r_count);
void _free_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, const GDExtensionPropertyInfo *p_list);
GDExtensionBool _has_method_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name);
void _call_func(GDExtensionScriptInstanceDataPtr p_self, GDExtensionConstStringNamePtr p_method, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error);
TypescriptInstance *from_ptr(GDExtensionScriptInstanceDataPtr p_instance);

#endif // !TS_INSTANCE_SUPPORT