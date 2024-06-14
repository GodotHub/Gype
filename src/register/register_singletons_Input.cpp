
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Input() {
	qjs::Value js_singleton = context->newObject();
	Input *singleton = Input::get_singleton();
	js_singleton.add((new std::string("is_anything_pressed"))->c_str(), [singleton]() -> bool { return singleton->is_anything_pressed(); });
	js_singleton.add((new std::string("is_key_pressed"))->c_str(), [singleton](Key keycode) -> bool { return singleton->is_key_pressed(keycode); });
	js_singleton.add((new std::string("is_physical_key_pressed"))->c_str(), [singleton](Key keycode) -> bool { return singleton->is_physical_key_pressed(keycode); });
	js_singleton.add((new std::string("is_key_label_pressed"))->c_str(), [singleton](Key keycode) -> bool { return singleton->is_key_label_pressed(keycode); });
	js_singleton.add((new std::string("is_mouse_button_pressed"))->c_str(), [singleton](MouseButton button) -> bool { return singleton->is_mouse_button_pressed(button); });
	js_singleton.add((new std::string("is_joy_button_pressed"))->c_str(), [singleton](int32_t device, JoyButton button) -> bool { return singleton->is_joy_button_pressed(device, button); });
	js_singleton.add((new std::string("is_action_pressed"))->c_str(), [singleton](const StringName &action, bool exact_match) -> bool { return singleton->is_action_pressed(action, exact_match); });
	js_singleton.add((new std::string("is_action_just_pressed"))->c_str(), [singleton](const StringName &action, bool exact_match) -> bool { return singleton->is_action_just_pressed(action, exact_match); });
	js_singleton.add((new std::string("is_action_just_released"))->c_str(), [singleton](const StringName &action, bool exact_match) -> bool { return singleton->is_action_just_released(action, exact_match); });
	js_singleton.add((new std::string("get_action_strength"))->c_str(), [singleton](const StringName &action, bool exact_match) -> double { return singleton->get_action_strength(action, exact_match); });
	js_singleton.add((new std::string("get_action_raw_strength"))->c_str(), [singleton](const StringName &action, bool exact_match) -> double { return singleton->get_action_raw_strength(action, exact_match); });
	js_singleton.add((new std::string("get_axis"))->c_str(), [singleton](const StringName &negative_action, const StringName &positive_action) -> double { return singleton->get_axis(negative_action, positive_action); });
	js_singleton.add((new std::string("get_vector"))->c_str(), [singleton](const StringName &negative_x, const StringName &positive_x, const StringName &negative_y, const StringName &positive_y, double deadzone) -> Vector2 { return singleton->get_vector(negative_x, positive_x, negative_y, positive_y, deadzone); });
	js_singleton.add((new std::string("add_joy_mapping"))->c_str(), [singleton](const String &mapping, bool update_existing) -> void { singleton->add_joy_mapping(mapping, update_existing); });
	js_singleton.add((new std::string("remove_joy_mapping"))->c_str(), [singleton](const String &guid) -> void { singleton->remove_joy_mapping(guid); });
	js_singleton.add((new std::string("is_joy_known"))->c_str(), [singleton](int32_t device) -> bool { return singleton->is_joy_known(device); });
	js_singleton.add((new std::string("get_joy_axis"))->c_str(), [singleton](int32_t device, JoyAxis axis) -> double { return singleton->get_joy_axis(device, axis); });
	js_singleton.add((new std::string("get_joy_name"))->c_str(), [singleton](int32_t device) -> String { return singleton->get_joy_name(device); });
	js_singleton.add((new std::string("get_joy_guid"))->c_str(), [singleton](int32_t device) -> String { return singleton->get_joy_guid(device); });
	js_singleton.add((new std::string("get_joy_info"))->c_str(), [singleton](int32_t device) -> Dictionary { return singleton->get_joy_info(device); });
	js_singleton.add((new std::string("should_ignore_device"))->c_str(), [singleton](int32_t vendor_id, int32_t product_id) -> bool { return singleton->should_ignore_device(vendor_id, product_id); });
	js_singleton.add((new std::string("get_connected_joypads"))->c_str(), [singleton]() -> TypedArray<int> { return singleton->get_connected_joypads(); });
	js_singleton.add((new std::string("get_joy_vibration_strength"))->c_str(), [singleton](int32_t device) -> Vector2 { return singleton->get_joy_vibration_strength(device); });
	js_singleton.add((new std::string("get_joy_vibration_duration"))->c_str(), [singleton](int32_t device) -> double { return singleton->get_joy_vibration_duration(device); });
	js_singleton.add((new std::string("start_joy_vibration"))->c_str(), [singleton](int32_t device, double weak_magnitude, double strong_magnitude, double duration) -> void { singleton->start_joy_vibration(device, weak_magnitude, strong_magnitude, duration); });
	js_singleton.add((new std::string("stop_joy_vibration"))->c_str(), [singleton](int32_t device) -> void { singleton->stop_joy_vibration(device); });
	js_singleton.add((new std::string("vibrate_handheld"))->c_str(), [singleton](int32_t duration_ms, double amplitude) -> void { singleton->vibrate_handheld(duration_ms, amplitude); });
	js_singleton.add((new std::string("get_gravity"))->c_str(), [singleton]() -> Vector3 { return singleton->get_gravity(); });
	js_singleton.add((new std::string("get_accelerometer"))->c_str(), [singleton]() -> Vector3 { return singleton->get_accelerometer(); });
	js_singleton.add((new std::string("get_magnetometer"))->c_str(), [singleton]() -> Vector3 { return singleton->get_magnetometer(); });
	js_singleton.add((new std::string("get_gyroscope"))->c_str(), [singleton]() -> Vector3 { return singleton->get_gyroscope(); });
	js_singleton.add((new std::string("set_gravity"))->c_str(), [singleton](const Vector3 &value) -> void { singleton->set_gravity(value); });
	js_singleton.add((new std::string("set_accelerometer"))->c_str(), [singleton](const Vector3 &value) -> void { singleton->set_accelerometer(value); });
	js_singleton.add((new std::string("set_magnetometer"))->c_str(), [singleton](const Vector3 &value) -> void { singleton->set_magnetometer(value); });
	js_singleton.add((new std::string("set_gyroscope"))->c_str(), [singleton](const Vector3 &value) -> void { singleton->set_gyroscope(value); });
	js_singleton.add((new std::string("get_last_mouse_velocity"))->c_str(), [singleton]() -> Vector2 { return singleton->get_last_mouse_velocity(); });
	js_singleton.add((new std::string("get_last_mouse_screen_velocity"))->c_str(), [singleton]() -> Vector2 { return singleton->get_last_mouse_screen_velocity(); });
	js_singleton.add((new std::string("get_mouse_button_mask"))->c_str(), [singleton]() -> BitField<MouseButtonMask> { return singleton->get_mouse_button_mask(); });
	js_singleton.add((new std::string("set_mouse_mode"))->c_str(), [singleton](Input::MouseMode mode) -> void { singleton->set_mouse_mode(mode); });
	js_singleton.add((new std::string("get_mouse_mode"))->c_str(), [singleton]() -> Input::MouseMode { return singleton->get_mouse_mode(); });
	js_singleton.add((new std::string("warp_mouse"))->c_str(), [singleton](const Vector2 &position) -> void { singleton->warp_mouse(position); });
	js_singleton.add((new std::string("action_press"))->c_str(), [singleton](const StringName &action, double strength) -> void { singleton->action_press(action, strength); });
	js_singleton.add((new std::string("action_release"))->c_str(), [singleton](const StringName &action) -> void { singleton->action_release(action); });
	js_singleton.add((new std::string("set_default_cursor_shape"))->c_str(), [singleton](Input::CursorShape shape) -> void { singleton->set_default_cursor_shape(shape); });
	js_singleton.add((new std::string("get_current_cursor_shape"))->c_str(), [singleton]() -> Input::CursorShape { return singleton->get_current_cursor_shape(); });
	js_singleton.add((new std::string("set_custom_mouse_cursor"))->c_str(), [singleton](const Ref<Resource> &image, Input::CursorShape shape, const Vector2 &hotspot) -> void { singleton->set_custom_mouse_cursor(image, shape, hotspot); });
	js_singleton.add((new std::string("parse_input_event"))->c_str(), [singleton](const Ref<InputEvent> &event) -> void { singleton->parse_input_event(event); });
	js_singleton.add((new std::string("set_use_accumulated_input"))->c_str(), [singleton](bool enable) -> void { singleton->set_use_accumulated_input(enable); });
	js_singleton.add((new std::string("is_using_accumulated_input"))->c_str(), [singleton]() -> bool { return singleton->is_using_accumulated_input(); });
	js_singleton.add((new std::string("flush_buffered_events"))->c_str(), [singleton]() -> void { singleton->flush_buffered_events(); });
	js_singleton.add((new std::string("set_emulate_mouse_from_touch"))->c_str(), [singleton](bool enable) -> void { singleton->set_emulate_mouse_from_touch(enable); });
	js_singleton.add((new std::string("is_emulating_mouse_from_touch"))->c_str(), [singleton]() -> bool { return singleton->is_emulating_mouse_from_touch(); });
	js_singleton.add((new std::string("set_emulate_touch_from_mouse"))->c_str(), [singleton](bool enable) -> void { singleton->set_emulate_touch_from_mouse(enable); });
	js_singleton.add((new std::string("is_emulating_touch_from_mouse"))->c_str(), [singleton]() -> bool { return singleton->is_emulating_touch_from_mouse(); });
	context->global()[(new std::string("Input"))->c_str()] = js_singleton;

	qjs::Value _MouseMode = context->newObject();
	_MouseMode[(new std::string("MOUSE_MODE_VISIBLE"))->c_str()] = Input::MouseMode::MOUSE_MODE_VISIBLE;
	_MouseMode[(new std::string("MOUSE_MODE_HIDDEN"))->c_str()] = Input::MouseMode::MOUSE_MODE_HIDDEN;
	_MouseMode[(new std::string("MOUSE_MODE_CAPTURED"))->c_str()] = Input::MouseMode::MOUSE_MODE_CAPTURED;
	_MouseMode[(new std::string("MOUSE_MODE_CONFINED"))->c_str()] = Input::MouseMode::MOUSE_MODE_CONFINED;
	_MouseMode[(new std::string("MOUSE_MODE_CONFINED_HIDDEN"))->c_str()] = Input::MouseMode::MOUSE_MODE_CONFINED_HIDDEN;
	js_singleton[(new std::string("MouseMode"))->c_str()] = _MouseMode;
	qjs::Value _CursorShape = context->newObject();
	_CursorShape[(new std::string("CURSOR_ARROW"))->c_str()] = Input::CursorShape::CURSOR_ARROW;
	_CursorShape[(new std::string("CURSOR_IBEAM"))->c_str()] = Input::CursorShape::CURSOR_IBEAM;
	_CursorShape[(new std::string("CURSOR_POINTING_HAND"))->c_str()] = Input::CursorShape::CURSOR_POINTING_HAND;
	_CursorShape[(new std::string("CURSOR_CROSS"))->c_str()] = Input::CursorShape::CURSOR_CROSS;
	_CursorShape[(new std::string("CURSOR_WAIT"))->c_str()] = Input::CursorShape::CURSOR_WAIT;
	_CursorShape[(new std::string("CURSOR_BUSY"))->c_str()] = Input::CursorShape::CURSOR_BUSY;
	_CursorShape[(new std::string("CURSOR_DRAG"))->c_str()] = Input::CursorShape::CURSOR_DRAG;
	_CursorShape[(new std::string("CURSOR_CAN_DROP"))->c_str()] = Input::CursorShape::CURSOR_CAN_DROP;
	_CursorShape[(new std::string("CURSOR_FORBIDDEN"))->c_str()] = Input::CursorShape::CURSOR_FORBIDDEN;
	_CursorShape[(new std::string("CURSOR_VSIZE"))->c_str()] = Input::CursorShape::CURSOR_VSIZE;
	_CursorShape[(new std::string("CURSOR_HSIZE"))->c_str()] = Input::CursorShape::CURSOR_HSIZE;
	_CursorShape[(new std::string("CURSOR_BDIAGSIZE"))->c_str()] = Input::CursorShape::CURSOR_BDIAGSIZE;
	_CursorShape[(new std::string("CURSOR_FDIAGSIZE"))->c_str()] = Input::CursorShape::CURSOR_FDIAGSIZE;
	_CursorShape[(new std::string("CURSOR_MOVE"))->c_str()] = Input::CursorShape::CURSOR_MOVE;
	_CursorShape[(new std::string("CURSOR_VSPLIT"))->c_str()] = Input::CursorShape::CURSOR_VSPLIT;
	_CursorShape[(new std::string("CURSOR_HSPLIT"))->c_str()] = Input::CursorShape::CURSOR_HSPLIT;
	_CursorShape[(new std::string("CURSOR_HELP"))->c_str()] = Input::CursorShape::CURSOR_HELP;
	js_singleton[(new std::string("CursorShape"))->c_str()] = _CursorShape;
}