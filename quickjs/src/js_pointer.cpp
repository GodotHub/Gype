#include "quickjs/js_pointer.h"

intptr_t JSPointer::get_pointer() {
	return this->pointer;
}
void JSPointer::set_pointer(int64_t value) {
	this->pointer = (intptr_t)value;
}

JSPointer::JSPointer(intptr_t pointer) {
	this->pointer = pointer;
}
