#include <godot_cpp/classes/back_buffer_copy.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BackBufferCopy() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<BackBufferCopy>("BackBufferCopy")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<BackBufferCopy::CopyMode (BackBufferCopy::*)() const>(&BackBufferCopy::get_copy_mode), static_cast<void (BackBufferCopy::*)(BackBufferCopy::CopyMode)>(&BackBufferCopy::set_copy_mode)>((new std::string("copy_mode"))->c_str())
			.property<static_cast<Rect2 (BackBufferCopy::*)() const>(&BackBufferCopy::get_rect), static_cast<void (BackBufferCopy::*)(const Rect2 &)>(&BackBufferCopy::set_rect)>((new std::string("rect"))->c_str());
	qjs::Value _CopyMode = context->newObject();
	_CopyMode[(new std::string("COPY_MODE_DISABLED"))->c_str()] = BackBufferCopy::CopyMode::COPY_MODE_DISABLED;
	_CopyMode[(new std::string("COPY_MODE_RECT"))->c_str()] = BackBufferCopy::CopyMode::COPY_MODE_RECT;
	_CopyMode[(new std::string("COPY_MODE_VIEWPORT"))->c_str()] = BackBufferCopy::CopyMode::COPY_MODE_VIEWPORT;
	_module.add("CopyMode", std::move(_CopyMode));
}