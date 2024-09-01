#pragma once

#include "support/javascript_loader.hpp"
#include "support/javascript_saver.hpp"
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/variant/rid.hpp>

using namespace godot;

class ScriptRID {
	friend class JavaScriptSaver;
	friend class JavaScriptLoader;

	static ScriptRID *singleton;

	HashMap<const String, RID> rids;

public:
	static ScriptRID *get_singleton();

protected:
	static void _bind_methods() {}
};