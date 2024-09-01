#include "support/script_rid.hpp"

ScriptRID *ScriptRID::singleton;

ScriptRID *ScriptRID::get_singleton() {
	if (singleton) {
		return singleton;
	}
	singleton = new ScriptRID();
	return singleton;
}