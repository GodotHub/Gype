
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/classes/translation_server.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_TranslationServer() {
	qjs::Value js_singleton = context->newObject();
	TranslationServer *singleton = TranslationServer::get_singleton();
	js_singleton.add((new std::string("set_locale"))->c_str(), [singleton](const String &locale) -> void { singleton->set_locale(locale); });
	js_singleton.add((new std::string("get_locale"))->c_str(), [singleton]() -> String { return singleton->get_locale(); });
	js_singleton.add((new std::string("get_tool_locale"))->c_str(), [singleton]() -> String { return singleton->get_tool_locale(); });
	js_singleton.add((new std::string("compare_locales"))->c_str(), [singleton](const String &locale_a, const String &locale_b) -> int64_t { return singleton->compare_locales(locale_a, locale_b); });
	js_singleton.add((new std::string("standardize_locale"))->c_str(), [singleton](const String &locale) -> String { return singleton->standardize_locale(locale); });
	js_singleton.add((new std::string("get_all_languages"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_all_languages(); });
	js_singleton.add((new std::string("get_language_name"))->c_str(), [singleton](const String &language) -> String { return singleton->get_language_name(language); });
	js_singleton.add((new std::string("get_all_scripts"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_all_scripts(); });
	js_singleton.add((new std::string("get_script_name"))->c_str(), [singleton](const String &script) -> String { return singleton->get_script_name(script); });
	js_singleton.add((new std::string("get_all_countries"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_all_countries(); });
	js_singleton.add((new std::string("get_country_name"))->c_str(), [singleton](const String &country) -> String { return singleton->get_country_name(country); });
	js_singleton.add((new std::string("get_locale_name"))->c_str(), [singleton](const String &locale) -> String { return singleton->get_locale_name(locale); });
	js_singleton.add((new std::string("translate"))->c_str(), [singleton](const StringName &message, const StringName &context) -> StringName { return singleton->translate(message, context); });
	js_singleton.add((new std::string("translate_plural"))->c_str(), [singleton](const StringName &message, const StringName &plural_message, int32_t n, const StringName &context) -> StringName { return singleton->translate_plural(message, plural_message, n, context); });
	js_singleton.add((new std::string("add_translation"))->c_str(), [singleton](const Ref<Translation> &translation) -> void { singleton->add_translation(translation); });
	js_singleton.add((new std::string("remove_translation"))->c_str(), [singleton](const Ref<Translation> &translation) -> void { singleton->remove_translation(translation); });
	js_singleton.add((new std::string("get_translation_object"))->c_str(), [singleton](const String &locale) -> Ref<Translation> { return singleton->get_translation_object(locale); });
	js_singleton.add((new std::string("clear"))->c_str(), [singleton]() -> void { singleton->clear(); });
	js_singleton.add((new std::string("get_loaded_locales"))->c_str(), [singleton]() -> PackedStringArray { return singleton->get_loaded_locales(); });
	js_singleton.add((new std::string("is_pseudolocalization_enabled"))->c_str(), [singleton]() -> bool { return singleton->is_pseudolocalization_enabled(); });
	js_singleton.add((new std::string("set_pseudolocalization_enabled"))->c_str(), [singleton](bool enabled) -> void { singleton->set_pseudolocalization_enabled(enabled); });
	js_singleton.add((new std::string("reload_pseudolocalization"))->c_str(), [singleton]() -> void { singleton->reload_pseudolocalization(); });
	js_singleton.add((new std::string("pseudolocalize"))->c_str(), [singleton](const StringName &message) -> StringName { return singleton->pseudolocalize(message); });
	context->global()[(new std::string("TranslationServer"))->c_str()] = js_singleton;
}