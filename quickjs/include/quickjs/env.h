#pragma once

#include <quickjs/qjspp.hpp>

JSModuleDef *module_loader(JSContext *ctx, const char *module_name, void *opaque);

extern qjs::Context context;
extern qjs::Runtime runtime;
