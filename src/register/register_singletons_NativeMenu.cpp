#include <godot_cpp/classes/native_menu.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_NativeMenu() {
	qjs::Value js_singleton = context->newObject();
    NativeMenu *singleton = NativeMenu::get_singleton();
    js_singleton.add("has_feature", [singleton](NativeMenu::Feature feature)->bool{return singleton->has_feature(feature);});
    js_singleton.add("has_system_menu", [singleton](NativeMenu::SystemMenus menu_id)->bool{return singleton->has_system_menu(menu_id);});
    js_singleton.add("get_system_menu", [singleton](NativeMenu::SystemMenus menu_id)->RID{return singleton->get_system_menu(menu_id);});
    js_singleton.add("get_system_menu_name", [singleton](NativeMenu::SystemMenus menu_id)->String{return singleton->get_system_menu_name(menu_id);});
    js_singleton.add("create_menu", [singleton]()->RID{return singleton->create_menu();});
    js_singleton.add("has_menu", [singleton](const RID & rid)->bool{return singleton->has_menu(rid);});
    js_singleton.add("free_menu", [singleton](const RID & rid)->void{singleton->free_menu(rid);});
    js_singleton.add("get_size", [singleton](const RID & rid)->Vector2{return singleton->get_size(rid);});
    js_singleton.add("popup", [singleton](const RID & rid,const Vector2i & position)->void{singleton->popup(rid,position);});
    js_singleton.add("set_interface_direction", [singleton](const RID & rid,bool is_rtl)->void{singleton->set_interface_direction(rid,is_rtl);});
    js_singleton.add("set_popup_open_callback", [singleton](const RID & rid,const Callable & callback)->void{singleton->set_popup_open_callback(rid,callback);});
    js_singleton.add("get_popup_open_callback", [singleton](const RID & rid)->Callable{return singleton->get_popup_open_callback(rid);});
    js_singleton.add("set_popup_close_callback", [singleton](const RID & rid,const Callable & callback)->void{singleton->set_popup_close_callback(rid,callback);});
    js_singleton.add("get_popup_close_callback", [singleton](const RID & rid)->Callable{return singleton->get_popup_close_callback(rid);});
    js_singleton.add("set_minimum_width", [singleton](const RID & rid,double width)->void{singleton->set_minimum_width(rid,width);});
    js_singleton.add("get_minimum_width", [singleton](const RID & rid)->double{return singleton->get_minimum_width(rid);});
    js_singleton.add("add_submenu_item", [singleton](const RID & rid,const String & label,const RID & submenu_rid,const Variant & tag,int32_t index)->int64_t{return singleton->add_submenu_item(rid,label,submenu_rid,tag,index);});
    js_singleton.add("add_item", [singleton](const RID & rid,const String & label,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_item(rid,label,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_check_item", [singleton](const RID & rid,const String & label,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_check_item(rid,label,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_icon_item", [singleton](const RID & rid,const Ref<Texture2D> & icon,const String & label,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_icon_item(rid,icon,label,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_icon_check_item", [singleton](const RID & rid,const Ref<Texture2D> & icon,const String & label,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_icon_check_item(rid,icon,label,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_radio_check_item", [singleton](const RID & rid,const String & label,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_radio_check_item(rid,label,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_icon_radio_check_item", [singleton](const RID & rid,const Ref<Texture2D> & icon,const String & label,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_icon_radio_check_item(rid,icon,label,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_multistate_item", [singleton](const RID & rid,const String & label,int32_t max_states,int32_t default_state,const Callable & callback,const Callable & key_callback,const Variant & tag,Key accelerator,int32_t index)->int64_t{return singleton->add_multistate_item(rid,label,max_states,default_state,callback,key_callback,tag,accelerator,index);});
    js_singleton.add("add_separator", [singleton](const RID & rid,int32_t index)->int64_t{return singleton->add_separator(rid,index);});
    js_singleton.add("find_item_index_with_text", [singleton](const RID & rid,const String & text)->int64_t{return singleton->find_item_index_with_text(rid,text);});
    js_singleton.add("find_item_index_with_tag", [singleton](const RID & rid,const Variant & tag)->int64_t{return singleton->find_item_index_with_tag(rid,tag);});
    js_singleton.add("find_item_index_with_submenu", [singleton](const RID & rid,const RID & submenu_rid)->int64_t{return singleton->find_item_index_with_submenu(rid,submenu_rid);});
    js_singleton.add("is_item_checked", [singleton](const RID & rid,int32_t idx)->bool{return singleton->is_item_checked(rid,idx);});
    js_singleton.add("is_item_checkable", [singleton](const RID & rid,int32_t idx)->bool{return singleton->is_item_checkable(rid,idx);});
    js_singleton.add("is_item_radio_checkable", [singleton](const RID & rid,int32_t idx)->bool{return singleton->is_item_radio_checkable(rid,idx);});
    js_singleton.add("get_item_callback", [singleton](const RID & rid,int32_t idx)->Callable{return singleton->get_item_callback(rid,idx);});
    js_singleton.add("get_item_key_callback", [singleton](const RID & rid,int32_t idx)->Callable{return singleton->get_item_key_callback(rid,idx);});
    js_singleton.add("get_item_tag", [singleton](const RID & rid,int32_t idx)->Variant{return singleton->get_item_tag(rid,idx);});
    js_singleton.add("get_item_text", [singleton](const RID & rid,int32_t idx)->String{return singleton->get_item_text(rid,idx);});
    js_singleton.add("get_item_submenu", [singleton](const RID & rid,int32_t idx)->RID{return singleton->get_item_submenu(rid,idx);});
    js_singleton.add("get_item_accelerator", [singleton](const RID & rid,int32_t idx)->Key{return singleton->get_item_accelerator(rid,idx);});
    js_singleton.add("is_item_disabled", [singleton](const RID & rid,int32_t idx)->bool{return singleton->is_item_disabled(rid,idx);});
    js_singleton.add("is_item_hidden", [singleton](const RID & rid,int32_t idx)->bool{return singleton->is_item_hidden(rid,idx);});
    js_singleton.add("get_item_tooltip", [singleton](const RID & rid,int32_t idx)->String{return singleton->get_item_tooltip(rid,idx);});
    js_singleton.add("get_item_state", [singleton](const RID & rid,int32_t idx)->int64_t{return singleton->get_item_state(rid,idx);});
    js_singleton.add("get_item_max_states", [singleton](const RID & rid,int32_t idx)->int64_t{return singleton->get_item_max_states(rid,idx);});
    js_singleton.add("get_item_icon", [singleton](const RID & rid,int32_t idx)->Ref<Texture2D>{return singleton->get_item_icon(rid,idx);});
    js_singleton.add("get_item_indentation_level", [singleton](const RID & rid,int32_t idx)->int64_t{return singleton->get_item_indentation_level(rid,idx);});
    js_singleton.add("set_item_checked", [singleton](const RID & rid,int32_t idx,bool checked)->void{singleton->set_item_checked(rid,idx,checked);});
    js_singleton.add("set_item_checkable", [singleton](const RID & rid,int32_t idx,bool checkable)->void{singleton->set_item_checkable(rid,idx,checkable);});
    js_singleton.add("set_item_radio_checkable", [singleton](const RID & rid,int32_t idx,bool checkable)->void{singleton->set_item_radio_checkable(rid,idx,checkable);});
    js_singleton.add("set_item_callback", [singleton](const RID & rid,int32_t idx,const Callable & callback)->void{singleton->set_item_callback(rid,idx,callback);});
    js_singleton.add("set_item_hover_callbacks", [singleton](const RID & rid,int32_t idx,const Callable & callback)->void{singleton->set_item_hover_callbacks(rid,idx,callback);});
    js_singleton.add("set_item_key_callback", [singleton](const RID & rid,int32_t idx,const Callable & key_callback)->void{singleton->set_item_key_callback(rid,idx,key_callback);});
    js_singleton.add("set_item_tag", [singleton](const RID & rid,int32_t idx,const Variant & tag)->void{singleton->set_item_tag(rid,idx,tag);});
    js_singleton.add("set_item_text", [singleton](const RID & rid,int32_t idx,const String & text)->void{singleton->set_item_text(rid,idx,text);});
    js_singleton.add("set_item_submenu", [singleton](const RID & rid,int32_t idx,const RID & submenu_rid)->void{singleton->set_item_submenu(rid,idx,submenu_rid);});
    js_singleton.add("set_item_accelerator", [singleton](const RID & rid,int32_t idx,Key keycode)->void{singleton->set_item_accelerator(rid,idx,keycode);});
    js_singleton.add("set_item_disabled", [singleton](const RID & rid,int32_t idx,bool disabled)->void{singleton->set_item_disabled(rid,idx,disabled);});
    js_singleton.add("set_item_hidden", [singleton](const RID & rid,int32_t idx,bool hidden)->void{singleton->set_item_hidden(rid,idx,hidden);});
    js_singleton.add("set_item_tooltip", [singleton](const RID & rid,int32_t idx,const String & tooltip)->void{singleton->set_item_tooltip(rid,idx,tooltip);});
    js_singleton.add("set_item_state", [singleton](const RID & rid,int32_t idx,int32_t state)->void{singleton->set_item_state(rid,idx,state);});
    js_singleton.add("set_item_max_states", [singleton](const RID & rid,int32_t idx,int32_t max_states)->void{singleton->set_item_max_states(rid,idx,max_states);});
    js_singleton.add("set_item_icon", [singleton](const RID & rid,int32_t idx,const Ref<Texture2D> & icon)->void{singleton->set_item_icon(rid,idx,icon);});
    js_singleton.add("set_item_indentation_level", [singleton](const RID & rid,int32_t idx,int32_t level)->void{singleton->set_item_indentation_level(rid,idx,level);});
    js_singleton.add("get_item_count", [singleton](const RID & rid)->int64_t{return singleton->get_item_count(rid);});
    js_singleton.add("is_system_menu", [singleton](const RID & rid)->bool{return singleton->is_system_menu(rid);});
    js_singleton.add("remove_item", [singleton](const RID & rid,int32_t idx)->void{singleton->remove_item(rid,idx);});
    js_singleton.add("clear", [singleton](const RID & rid)->void{singleton->clear(rid);});
    context->global()["NativeMenu"] = js_singleton;

    qjs::Value _Feature = context->newObject();
    _Feature["FEATURE_GLOBAL_MENU"] = NativeMenu::Feature::FEATURE_GLOBAL_MENU;
    _Feature["FEATURE_POPUP_MENU"] = NativeMenu::Feature::FEATURE_POPUP_MENU;
    _Feature["FEATURE_OPEN_CLOSE_CALLBACK"] = NativeMenu::Feature::FEATURE_OPEN_CLOSE_CALLBACK;
    _Feature["FEATURE_HOVER_CALLBACK"] = NativeMenu::Feature::FEATURE_HOVER_CALLBACK;
    _Feature["FEATURE_KEY_CALLBACK"] = NativeMenu::Feature::FEATURE_KEY_CALLBACK;
    js_singleton["Feature"] = _Feature;
    qjs::Value _SystemMenus = context->newObject();
    _SystemMenus["INVALID_MENU_ID"] = NativeMenu::SystemMenus::INVALID_MENU_ID;
    _SystemMenus["MAIN_MENU_ID"] = NativeMenu::SystemMenus::MAIN_MENU_ID;
    _SystemMenus["APPLICATION_MENU_ID"] = NativeMenu::SystemMenus::APPLICATION_MENU_ID;
    _SystemMenus["WINDOW_MENU_ID"] = NativeMenu::SystemMenus::WINDOW_MENU_ID;
    _SystemMenus["HELP_MENU_ID"] = NativeMenu::SystemMenus::HELP_MENU_ID;
    _SystemMenus["DOCK_MENU_ID"] = NativeMenu::SystemMenus::DOCK_MENU_ID;
    js_singleton["SystemMenus"] = _SystemMenus;
}