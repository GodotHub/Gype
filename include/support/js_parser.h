#include "tree_sitter/api.h"
#include "tree_sitter/tree-sitter-javascript.h"

extern TSParser *parser;
extern const TSLanguage *language;

extern void init_js_parser();

extern TSTree *js_parse(const char *source_code);

extern const char *js_node_text(TSNode node, char *code);