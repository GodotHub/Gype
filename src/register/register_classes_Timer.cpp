#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/timer.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Timer() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<Timer>("Timer")
			.constructor<>()
			.base<Node>()
			.property<static_cast<Timer::TimerProcessCallback (Timer::*)() const>(&Timer::get_timer_process_callback), static_cast<void (Timer::*)(Timer::TimerProcessCallback)>(&Timer::set_timer_process_callback)>((new std::string("process_callback"))->c_str())
			.property<static_cast<double (Timer::*)() const>(&Timer::get_wait_time), static_cast<void (Timer::*)(double)>(&Timer::set_wait_time)>((new std::string("wait_time"))->c_str())
			.property<static_cast<bool (Timer::*)() const>(&Timer::is_one_shot), static_cast<void (Timer::*)(bool)>(&Timer::set_one_shot)>((new std::string("one_shot"))->c_str())
			.property<static_cast<bool (Timer::*)() const>(&Timer::has_autostart), static_cast<void (Timer::*)(bool)>(&Timer::set_autostart)>((new std::string("autostart"))->c_str())
			.property<static_cast<bool (Timer::*)() const>(&Timer::is_paused), static_cast<void (Timer::*)(bool)>(&Timer::set_paused)>((new std::string("paused"))->c_str())
			.property<static_cast<double (Timer::*)() const>(&Timer::get_time_left)>((new std::string("time_left"))->c_str())
			.fun<static_cast<void (Timer::*)(double)>(&Timer::start)>((new std::string("start"))->c_str())
			.fun<static_cast<void (Timer::*)()>(&Timer::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<bool (Timer::*)() const>(&Timer::is_stopped)>((new std::string("is_stopped"))->c_str());
	qjs::Value _TimerProcessCallback = context->newObject();
	_TimerProcessCallback[(new std::string("TIMER_PROCESS_PHYSICS"))->c_str()] = Timer::TimerProcessCallback::TIMER_PROCESS_PHYSICS;
	_TimerProcessCallback[(new std::string("TIMER_PROCESS_IDLE"))->c_str()] = Timer::TimerProcessCallback::TIMER_PROCESS_IDLE;
	_module.add("TimerProcessCallback", std::move(_TimerProcessCallback));
}