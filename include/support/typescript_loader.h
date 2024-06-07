#ifndef TS_LOADER
#define TS_LOADER

#include <godot_cpp/classes/random_number_generator.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/templates/hash_map.hpp>

using namespace godot;

class TypescriptLoader : public ResourceFormatLoader {
	GDCLASS(TypescriptLoader, ResourceFormatLoader)

	HashMap<const String, uint32_t> *uids = new HashMap<const String, uint32_t>();

public:
	PackedStringArray _get_recognized_extensions() const;
	bool _recognize_path(const String &path, const StringName &type) const;
	bool _handles_type(const StringName &type) const;
	String _get_resource_type(const String &path) const;
	String _get_resource_script_class(const String &path) const;
	int64_t _get_resource_uid(const String &path) const;
	void _register_resource_uid(const String &path) const;
	PackedStringArray _get_dependencies(const String &path, bool add_types) const;
	Error _rename_dependencies(const String &path, const Dictionary &renames) const;
	bool _exists(const String &path) const;
	PackedStringArray _get_classes_used(const String &path) const;
	Variant _load(const String &path, const String &original_path, bool use_sub_threads, int32_t cache_mode) const;

protected:
	static void _bind_methods() {}
};

#endif // !TS_LOADER
