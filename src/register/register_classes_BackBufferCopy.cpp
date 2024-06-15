#include <godot_cpp/classes/back_buffer_copy.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BackBufferCopy() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<BackBufferCopy>("BackBufferCopy")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<BackBufferCopy::CopyMode(BackBufferCopy::*)()const>(&BackBufferCopy::get_copy_mode),static_cast<void(BackBufferCopy::*)(BackBufferCopy::CopyMode)>(&BackBufferCopy::set_copy_mode)>("copy_mode")
            .property<static_cast<Rect2(BackBufferCopy::*)()const>(&BackBufferCopy::get_rect),static_cast<void(BackBufferCopy::*)(const Rect2 &)>(&BackBufferCopy::set_rect)>("rect")
;    qjs::Value _CopyMode = context->newObject();
    _CopyMode["COPY_MODE_DISABLED"] = BackBufferCopy::CopyMode::COPY_MODE_DISABLED;
    _CopyMode["COPY_MODE_RECT"] = BackBufferCopy::CopyMode::COPY_MODE_RECT;
    _CopyMode["COPY_MODE_VIEWPORT"] = BackBufferCopy::CopyMode::COPY_MODE_VIEWPORT;
    _module.add("CopyMode", std::move(_CopyMode));
}