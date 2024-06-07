#ifndef TS_INSTANCE_SUPPORT
#define TS_INSTANCE_SUPPORT

#include "qjspp.hpp"
#include "support/typescript.h"
#include "support/typescript_language.h"
#include <gdextension_interface.h>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/templates/list.hpp>

class Typescript;

using namespace godot;

class TypescriptInstance {
public:
	static TypescriptInstanceInfo instance_info;

	explicit TypescriptInstance(const Ref<Typescript> &parent, Object *host_object);

	static GDExtensionScriptInstancePtr create_instance(const Ref<Typescript> parent, Object *host_object);

	List<GDExtensionPropertyInfo> get_properties() { return properties; };
	HashMap<StringName, Variant> get_values() { return values; };
	Ref<Typescript> get_script() { return Ref(_parent); };

private:
	const Typescript *_parent;
	Object *_host_object;
	List<GDExtensionPropertyInfo> properties;
	HashMap<StringName, Variant> values;
};

struct TypescriptInstanceInfo : GDExtensionScriptInstanceInfo2 {
};
#endif // !TS_INSTANCE_SUPPORT