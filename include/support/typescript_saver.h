#ifndef TS_SAVER
#define TS_SAVER

#include "support/typescript_loader.h"
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/templates/hash_map.hpp>

using namespace godot;

class TypescriptSaver : public ResourceFormatSaver {
	GDCLASS(TypescriptSaver, ResourceFormatSaver);

	static TypescriptSaver *singleton;
	HashMap<String, int64_t> uids;

public:
	TypescriptSaver();
	~TypescriptSaver();
	static TypescriptSaver *get_singleton();
	Error _save(const Ref<Resource> &resource, const String &path, uint32_t flags) override;
	Error _set_uid(const String &path, int64_t uid) override;
	bool _recognize(const Ref<Resource> &resource) const override;
	PackedStringArray _get_recognized_extensions(const Ref<Resource> &resource) const override;
	bool _recognize_path(const Ref<Resource> &resource, const String &path) const override;

	friend class TypescriptLoader;

protected:
	static void _bind_methods() {};
};

#endif // !TS_SAVER