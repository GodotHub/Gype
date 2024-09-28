#include "utils/js_pointer.h"
#include "utils/env.h"

intptr_t JSPointer::get_pointer() {
	return this->pointer;
}
void JSPointer::set_pointer(int64_t value) {
	this->pointer = (intptr_t)value;
}

JSPointer::JSPointer(intptr_t pointer) {
	this->pointer = pointer;
}

JSPointer::JSPointer(JSValue *value) {
	this->pointer = (intptr_t)value;
}
