#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/translation_server.hpp>

using namespace godot;

void register_classes_TranslationServer() {
    qjs::Context::Module &_module = _General;
    _module.class_<TranslationServer>("TranslationServer")
           .constructor<>()
           .property<TranslationServer::is_pseudolocalization_enabled, TranslationServer::set_pseudolocalization_enabled>("pseudolocalization_enabled")
		    .fun<static_cast<void(TranslationServer::*)(const String &)>(&TranslationServer::set_locale)>("set_locale")
		    .fun<static_cast<String(TranslationServer::*)()const>(&TranslationServer::get_locale)>("get_locale")
		    .fun<static_cast<String(TranslationServer::*)()>(&TranslationServer::get_tool_locale)>("get_tool_locale")
		    .fun<static_cast<int32_t(TranslationServer::*)(const String &,const String &)const>(&TranslationServer::compare_locales)>("compare_locales")
		    .fun<static_cast<String(TranslationServer::*)(const String &)const>(&TranslationServer::standardize_locale)>("standardize_locale")
		    .fun<static_cast<PackedStringArray(TranslationServer::*)()const>(&TranslationServer::get_all_languages)>("get_all_languages")
		    .fun<static_cast<String(TranslationServer::*)(const String &)const>(&TranslationServer::get_language_name)>("get_language_name")
		    .fun<static_cast<PackedStringArray(TranslationServer::*)()const>(&TranslationServer::get_all_scripts)>("get_all_scripts")
		    .fun<static_cast<String(TranslationServer::*)(const String &)const>(&TranslationServer::get_script_name)>("get_script_name")
		    .fun<static_cast<PackedStringArray(TranslationServer::*)()const>(&TranslationServer::get_all_countries)>("get_all_countries")
		    .fun<static_cast<String(TranslationServer::*)(const String &)const>(&TranslationServer::get_country_name)>("get_country_name")
		    .fun<static_cast<String(TranslationServer::*)(const String &)const>(&TranslationServer::get_locale_name)>("get_locale_name")
		    .fun<static_cast<StringName(TranslationServer::*)(const StringName &,const StringName &)const>(&TranslationServer::translate)>("translate")
		    .fun<static_cast<StringName(TranslationServer::*)(const StringName &,const StringName &,int32_t,const StringName &)const>(&TranslationServer::translate_plural)>("translate_plural")
		    .fun<static_cast<void(TranslationServer::*)(const Ref<Translation> &)>(&TranslationServer::add_translation)>("add_translation")
		    .fun<static_cast<void(TranslationServer::*)(const Ref<Translation> &)>(&TranslationServer::remove_translation)>("remove_translation")
		    .fun<static_cast<Ref<Translation>(TranslationServer::*)(const String &)>(&TranslationServer::get_translation_object)>("get_translation_object")
		    .fun<static_cast<void(TranslationServer::*)()>(&TranslationServer::clear)>("clear")
		    .fun<static_cast<PackedStringArray(TranslationServer::*)()const>(&TranslationServer::get_loaded_locales)>("get_loaded_locales")
		    .fun<static_cast<void(TranslationServer::*)()>(&TranslationServer::reload_pseudolocalization)>("reload_pseudolocalization")
		    .fun<static_cast<StringName(TranslationServer::*)(const StringName &)const>(&TranslationServer::pseudolocalize)>("pseudolocalize")
;}