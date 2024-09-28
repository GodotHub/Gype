#ifndef __REGISTER_UTILITY_FUNCTIONS_H__
#define __REGISTER_UTILITY_FUNCTIONS_H__

#include "quickjs/quickjs.h"

extern JSValue gd;

void register_utility_functions();
void unregister_utility_functions();

#endif // __REGISTER_UTILITY_FUNCTIONS_H__