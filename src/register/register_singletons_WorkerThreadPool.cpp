#include <godot_cpp/classes/worker_thread_pool.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_WorkerThreadPool() {
	qjs::Value js_singleton = context->newObject();
    WorkerThreadPool *singleton = WorkerThreadPool::get_singleton();
    js_singleton.add("add_task", [singleton](const Callable & action,bool high_priority,const String & description)->int64_t{return singleton->add_task(action,high_priority,description);});
    js_singleton.add("is_task_completed", [singleton](int64_t task_id)->bool{return singleton->is_task_completed(task_id);});
    js_singleton.add("wait_for_task_completion", [singleton](int64_t task_id)->Error{return singleton->wait_for_task_completion(task_id);});
    js_singleton.add("add_group_task", [singleton](const Callable & action,int32_t elements,int32_t tasks_needed,bool high_priority,const String & description)->int64_t{return singleton->add_group_task(action,elements,tasks_needed,high_priority,description);});
    js_singleton.add("is_group_task_completed", [singleton](int64_t group_id)->bool{return singleton->is_group_task_completed(group_id);});
    js_singleton.add("get_group_processed_element_count", [singleton](int64_t group_id)->int64_t{return singleton->get_group_processed_element_count(group_id);});
    js_singleton.add("wait_for_group_task_completion", [singleton](int64_t group_id)->void{singleton->wait_for_group_task_completion(group_id);});
    context->global()["WorkerThreadPool"] = js_singleton;

}