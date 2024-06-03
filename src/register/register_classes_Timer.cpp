#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Timer() {
    qjs::Context::Module &_module = _Node;
    _module.class_<Timer>("Timer")
           .constructor<>()
           .property<Timer::get_timer_process_callback, Timer::set_timer_process_callback>("process_callback")
           .property<Timer::get_wait_time, Timer::set_wait_time>("wait_time")
           .property<Timer::is_one_shot, Timer::set_one_shot>("one_shot")
           .property<Timer::has_autostart, Timer::set_autostart>("autostart")
           .property<Timer::is_paused, Timer::set_paused>("paused")
           .property<Timer::get_time_left>("time_left")
		   .fun<static_cast<void(Timer::*)(double)>(&Timer::start)>("start")
		   .fun<static_cast<void(Timer::*)()>(&Timer::stop)>("stop")
		   .fun<static_cast<bool(Timer::*)()const>(&Timer::is_stopped)>("is_stopped")
;}