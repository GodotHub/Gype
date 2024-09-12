#pragma once

#include <corecrt.h>
#include <stdint.h>

typedef struct JSValue JSValue;
class JSPointer;

class JSPointer {
private:
	intptr_t pointer = 0;

public:
	intptr_t get_pointer();
	void set_pointer(int64_t value);

	JSPointer(intptr_t pointer = 0);
	JSPointer(JSValue *pointer = nullptr);
};