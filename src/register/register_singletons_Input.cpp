#include <godot_cpp/classes/input.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_Input() {
	qjs::Value js_singleton = context->newObject();
    Input *singleton = Input::get_singleton();
    js_singleton.add("is_anything_pressed", [singleton]()->bool{return singleton->is_anything_pressed();});
    js_singleton.add("is_key_pressed", [singleton](Key keycode)->bool{return singleton->is_key_pressed(keycode);});
    js_singleton.add("is_physical_key_pressed", [singleton](Key keycode)->bool{return singleton->is_physical_key_pressed(keycode);});
    js_singleton.add("is_key_label_pressed", [singleton](Key keycode)->bool{return singleton->is_key_label_pressed(keycode);});
    js_singleton.add("is_mouse_button_pressed", [singleton](MouseButton button)->bool{return singleton->is_mouse_button_pressed(button);});
    js_singleton.add("is_joy_button_pressed", [singleton](int32_t device,JoyButton button)->bool{return singleton->is_joy_button_pressed(device,button);});
    js_singleton.add("is_action_pressed", [singleton](const StringName & action,bool exact_match)->bool{return singleton->is_action_pressed(action,exact_match);});
    js_singleton.add("is_action_just_pressed", [singleton](const StringName & action,bool exact_match)->bool{return singleton->is_action_just_pressed(action,exact_match);});
    js_singleton.add("is_action_just_released", [singleton](const StringName & action,bool exact_match)->bool{return singleton->is_action_just_released(action,exact_match);});
    js_singleton.add("get_action_strength", [singleton](const StringName & action,bool exact_match)->double{return singleton->get_action_strength(action,exact_match);});
    js_singleton.add("get_action_raw_strength", [singleton](const StringName & action,bool exact_match)->double{return singleton->get_action_raw_strength(action,exact_match);});
    js_singleton.add("get_axis", [singleton](const StringName & negative_action,const StringName & positive_action)->double{return singleton->get_axis(negative_action,positive_action);});
    js_singleton.add("get_vector", [singleton](const StringName & negative_x,const StringName & positive_x,const StringName & negative_y,const StringName & positive_y,double deadzone)->Vector2{return singleton->get_vector(negative_x,positive_x,negative_y,positive_y,deadzone);});
    js_singleton.add("add_joy_mapping", [singleton](const String & mapping,bool update_existing)->void{singleton->add_joy_mapping(mapping,update_existing);});
    js_singleton.add("remove_joy_mapping", [singleton](const String & guid)->void{singleton->remove_joy_mapping(guid);});
    js_singleton.add("is_joy_known", [singleton](int32_t device)->bool{return singleton->is_joy_known(device);});
    js_singleton.add("get_joy_axis", [singleton](int32_t device,JoyAxis axis)->double{return singleton->get_joy_axis(device,axis);});
    js_singleton.add("get_joy_name", [singleton](int32_t device)->String{return singleton->get_joy_name(device);});
    js_singleton.add("get_joy_guid", [singleton](int32_t device)->String{return singleton->get_joy_guid(device);});
    js_singleton.add("get_joy_info", [singleton](int32_t device)->Dictionary{return singleton->get_joy_info(device);});
    js_singleton.add("should_ignore_device", [singleton](int32_t vendor_id,int32_t product_id)->bool{return singleton->should_ignore_device(vendor_id,product_id);});
    js_singleton.add("get_connected_joypads", [singleton]()->TypedArray<int>{return singleton->get_connected_joypads();});
    js_singleton.add("get_joy_vibration_strength", [singleton](int32_t device)->Vector2{return singleton->get_joy_vibration_strength(device);});
    js_singleton.add("get_joy_vibration_duration", [singleton](int32_t device)->double{return singleton->get_joy_vibration_duration(device);});
    js_singleton.add("start_joy_vibration", [singleton](int32_t device,double weak_magnitude,double strong_magnitude,double duration)->void{singleton->start_joy_vibration(device,weak_magnitude,strong_magnitude,duration);});
    js_singleton.add("stop_joy_vibration", [singleton](int32_t device)->void{singleton->stop_joy_vibration(device);});
    js_singleton.add("vibrate_handheld", [singleton](int32_t duration_ms,double amplitude)->void{singleton->vibrate_handheld(duration_ms,amplitude);});
    js_singleton.add("get_gravity", [singleton]()->Vector3{return singleton->get_gravity();});
    js_singleton.add("get_accelerometer", [singleton]()->Vector3{return singleton->get_accelerometer();});
    js_singleton.add("get_magnetometer", [singleton]()->Vector3{return singleton->get_magnetometer();});
    js_singleton.add("get_gyroscope", [singleton]()->Vector3{return singleton->get_gyroscope();});
    js_singleton.add("set_gravity", [singleton](const Vector3 & value)->void{singleton->set_gravity(value);});
    js_singleton.add("set_accelerometer", [singleton](const Vector3 & value)->void{singleton->set_accelerometer(value);});
    js_singleton.add("set_magnetometer", [singleton](const Vector3 & value)->void{singleton->set_magnetometer(value);});
    js_singleton.add("set_gyroscope", [singleton](const Vector3 & value)->void{singleton->set_gyroscope(value);});
    js_singleton.add("get_last_mouse_velocity", [singleton]()->Vector2{return singleton->get_last_mouse_velocity();});
    js_singleton.add("get_last_mouse_screen_velocity", [singleton]()->Vector2{return singleton->get_last_mouse_screen_velocity();});
    js_singleton.add("get_mouse_button_mask", [singleton]()->BitField<MouseButtonMask>{return singleton->get_mouse_button_mask();});
    js_singleton.add("set_mouse_mode", [singleton](Input::MouseMode mode)->void{singleton->set_mouse_mode(mode);});
    js_singleton.add("get_mouse_mode", [singleton]()->Input::MouseMode{return singleton->get_mouse_mode();});
    js_singleton.add("warp_mouse", [singleton](const Vector2 & position)->void{singleton->warp_mouse(position);});
    js_singleton.add("action_press", [singleton](const StringName & action,double strength)->void{singleton->action_press(action,strength);});
    js_singleton.add("action_release", [singleton](const StringName & action)->void{singleton->action_release(action);});
    js_singleton.add("set_default_cursor_shape", [singleton](Input::CursorShape shape)->void{singleton->set_default_cursor_shape(shape);});
    js_singleton.add("get_current_cursor_shape", [singleton]()->Input::CursorShape{return singleton->get_current_cursor_shape();});
    js_singleton.add("set_custom_mouse_cursor", [singleton](const Ref<Resource> & image,Input::CursorShape shape,const Vector2 & hotspot)->void{singleton->set_custom_mouse_cursor(image,shape,hotspot);});
    js_singleton.add("parse_input_event", [singleton](const Ref<InputEvent> & event)->void{singleton->parse_input_event(event);});
    js_singleton.add("set_use_accumulated_input", [singleton](bool enable)->void{singleton->set_use_accumulated_input(enable);});
    js_singleton.add("is_using_accumulated_input", [singleton]()->bool{return singleton->is_using_accumulated_input();});
    js_singleton.add("flush_buffered_events", [singleton]()->void{singleton->flush_buffered_events();});
    js_singleton.add("set_emulate_mouse_from_touch", [singleton](bool enable)->void{singleton->set_emulate_mouse_from_touch(enable);});
    js_singleton.add("is_emulating_mouse_from_touch", [singleton]()->bool{return singleton->is_emulating_mouse_from_touch();});
    js_singleton.add("set_emulate_touch_from_mouse", [singleton](bool enable)->void{singleton->set_emulate_touch_from_mouse(enable);});
    js_singleton.add("is_emulating_touch_from_mouse", [singleton]()->bool{return singleton->is_emulating_touch_from_mouse();});
    context->global()["Input"] = js_singleton;

    qjs::Value _MouseMode = context->newObject();
    _MouseMode["MOUSE_MODE_VISIBLE"] = Input::MouseMode::MOUSE_MODE_VISIBLE;
    _MouseMode["MOUSE_MODE_HIDDEN"] = Input::MouseMode::MOUSE_MODE_HIDDEN;
    _MouseMode["MOUSE_MODE_CAPTURED"] = Input::MouseMode::MOUSE_MODE_CAPTURED;
    _MouseMode["MOUSE_MODE_CONFINED"] = Input::MouseMode::MOUSE_MODE_CONFINED;
    _MouseMode["MOUSE_MODE_CONFINED_HIDDEN"] = Input::MouseMode::MOUSE_MODE_CONFINED_HIDDEN;
    js_singleton["MouseMode"] = _MouseMode;
    qjs::Value _CursorShape = context->newObject();
    _CursorShape["CURSOR_ARROW"] = Input::CursorShape::CURSOR_ARROW;
    _CursorShape["CURSOR_IBEAM"] = Input::CursorShape::CURSOR_IBEAM;
    _CursorShape["CURSOR_POINTING_HAND"] = Input::CursorShape::CURSOR_POINTING_HAND;
    _CursorShape["CURSOR_CROSS"] = Input::CursorShape::CURSOR_CROSS;
    _CursorShape["CURSOR_WAIT"] = Input::CursorShape::CURSOR_WAIT;
    _CursorShape["CURSOR_BUSY"] = Input::CursorShape::CURSOR_BUSY;
    _CursorShape["CURSOR_DRAG"] = Input::CursorShape::CURSOR_DRAG;
    _CursorShape["CURSOR_CAN_DROP"] = Input::CursorShape::CURSOR_CAN_DROP;
    _CursorShape["CURSOR_FORBIDDEN"] = Input::CursorShape::CURSOR_FORBIDDEN;
    _CursorShape["CURSOR_VSIZE"] = Input::CursorShape::CURSOR_VSIZE;
    _CursorShape["CURSOR_HSIZE"] = Input::CursorShape::CURSOR_HSIZE;
    _CursorShape["CURSOR_BDIAGSIZE"] = Input::CursorShape::CURSOR_BDIAGSIZE;
    _CursorShape["CURSOR_FDIAGSIZE"] = Input::CursorShape::CURSOR_FDIAGSIZE;
    _CursorShape["CURSOR_MOVE"] = Input::CursorShape::CURSOR_MOVE;
    _CursorShape["CURSOR_VSPLIT"] = Input::CursorShape::CURSOR_VSPLIT;
    _CursorShape["CURSOR_HSPLIT"] = Input::CursorShape::CURSOR_HSPLIT;
    _CursorShape["CURSOR_HELP"] = Input::CursorShape::CURSOR_HELP;
    js_singleton["CursorShape"] = _CursorShape;
}