#include <godot_cpp/classes/translation_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_TranslationServer() {
	qjs::Value js_singleton = context->newObject();
    TranslationServer *singleton = TranslationServer::get_singleton();
    js_singleton.add("set_locale", [singleton](const String & locale)->void{singleton->set_locale(locale);});
    js_singleton.add("get_locale", [singleton]()->String{return singleton->get_locale();});
    js_singleton.add("get_tool_locale", [singleton]()->String{return singleton->get_tool_locale();});
    js_singleton.add("compare_locales", [singleton](const String & locale_a,const String & locale_b)->int64_t{return singleton->compare_locales(locale_a,locale_b);});
    js_singleton.add("standardize_locale", [singleton](const String & locale)->String{return singleton->standardize_locale(locale);});
    js_singleton.add("get_all_languages", [singleton]()->PackedStringArray{return singleton->get_all_languages();});
    js_singleton.add("get_language_name", [singleton](const String & language)->String{return singleton->get_language_name(language);});
    js_singleton.add("get_all_scripts", [singleton]()->PackedStringArray{return singleton->get_all_scripts();});
    js_singleton.add("get_script_name", [singleton](const String & script)->String{return singleton->get_script_name(script);});
    js_singleton.add("get_all_countries", [singleton]()->PackedStringArray{return singleton->get_all_countries();});
    js_singleton.add("get_country_name", [singleton](const String & country)->String{return singleton->get_country_name(country);});
    js_singleton.add("get_locale_name", [singleton](const String & locale)->String{return singleton->get_locale_name(locale);});
    js_singleton.add("translate", [singleton](const StringName & message,const StringName & context)->StringName{return singleton->translate(message,context);});
    js_singleton.add("translate_plural", [singleton](const StringName & message,const StringName & plural_message,int32_t n,const StringName & context)->StringName{return singleton->translate_plural(message,plural_message,n,context);});
    js_singleton.add("add_translation", [singleton](const Ref<Translation> & translation)->void{singleton->add_translation(translation);});
    js_singleton.add("remove_translation", [singleton](const Ref<Translation> & translation)->void{singleton->remove_translation(translation);});
    js_singleton.add("get_translation_object", [singleton](const String & locale)->Ref<Translation>{return singleton->get_translation_object(locale);});
    js_singleton.add("clear", [singleton]()->void{singleton->clear();});
    js_singleton.add("get_loaded_locales", [singleton]()->PackedStringArray{return singleton->get_loaded_locales();});
    js_singleton.add("is_pseudolocalization_enabled", [singleton]()->bool{return singleton->is_pseudolocalization_enabled();});
    js_singleton.add("set_pseudolocalization_enabled", [singleton](bool enabled)->void{singleton->set_pseudolocalization_enabled(enabled);});
    js_singleton.add("reload_pseudolocalization", [singleton]()->void{singleton->reload_pseudolocalization();});
    js_singleton.add("pseudolocalize", [singleton](const StringName & message)->StringName{return singleton->pseudolocalize(message);});
    context->global()["TranslationServer"] = js_singleton;

}