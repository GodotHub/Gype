#include <godot_cpp/classes/timer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Timer() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<Timer>("Timer")
            .constructor<>()
            .base<Node>()
            .property<static_cast<Timer::TimerProcessCallback(Timer::*)()const>(&Timer::get_timer_process_callback),static_cast<void(Timer::*)(Timer::TimerProcessCallback)>(&Timer::set_timer_process_callback)>("process_callback")
            .property<static_cast<double(Timer::*)()const>(&Timer::get_wait_time),static_cast<void(Timer::*)(double)>(&Timer::set_wait_time)>("wait_time")
            .property<static_cast<bool(Timer::*)()const>(&Timer::is_one_shot),static_cast<void(Timer::*)(bool)>(&Timer::set_one_shot)>("one_shot")
            .property<static_cast<bool(Timer::*)()const>(&Timer::has_autostart),static_cast<void(Timer::*)(bool)>(&Timer::set_autostart)>("autostart")
            .property<static_cast<bool(Timer::*)()const>(&Timer::is_paused),static_cast<void(Timer::*)(bool)>(&Timer::set_paused)>("paused")
            .property<static_cast<double(Timer::*)()const>(&Timer::get_time_left)>("time_left")
            .fun<static_cast<void(Timer::*)(double)>(&Timer::start)>("start")
            .fun<static_cast<void(Timer::*)()>(&Timer::stop)>("stop")
            .fun<static_cast<bool(Timer::*)()const>(&Timer::is_stopped)>("is_stopped")
;    qjs::Value _TimerProcessCallback = context->newObject();
    _TimerProcessCallback["TIMER_PROCESS_PHYSICS"] = Timer::TimerProcessCallback::TIMER_PROCESS_PHYSICS;
    _TimerProcessCallback["TIMER_PROCESS_IDLE"] = Timer::TimerProcessCallback::TIMER_PROCESS_IDLE;
    _module.add("TimerProcessCallback", std::move(_TimerProcessCallback));
}