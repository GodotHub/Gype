#ifndef JS_PARSER_H
#define JS_PARSER_H

#include "quickjs.h"

#define __exception __attribute__((warn_unused_result))

typedef JSParseState JSParseState;

extern __exception int (*js_parse_source_element_func)(JSParseState *s);
extern void js_parse_init(JSContext *ctx, JSParseState *s,
		const char *input, size_t input_len,
		const char *filename);
#endif // !JS_PARSER_h