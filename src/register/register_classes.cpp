#include "register/register_classes.h"
#include "qjspp/utils.h"

qjs::Context::Module &get_Node_module() {
	static qjs::Context::Module &_Node = context->addModule("Node");
	return _Node;
}
qjs::Context::Module &get_Node2D_module() {
	static qjs::Context::Module &_Node2D = context->addModule("Node2D");
	return _Node2D;
}
qjs::Context::Module &get_Node3D_module() {
	static qjs::Context::Module &_Node3D = context->addModule("Node3D");
	return _Node3D;
}
qjs::Context::Module &get_Control_module() {
	static qjs::Context::Module &_Control = context->addModule("Control");
	return _Control;
}
qjs::Context::Module &get_General_module() {
	static qjs::Context::Module &_General = context->addModule("General");
	return _General;
}

qjs::Context::Module &get_CanvasItem_module() {
	static qjs::Context::Module &_CanvasItem = context->addModule("CanvasItem");
	return _CanvasItem;
}