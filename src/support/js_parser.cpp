#include "support/js_parser.h"
#include <string.h>
#include <string>

TSParser *parser;
const TSLanguage *language;

void init_js_parser() {
	parser = ts_parser_new();
	language = tree_sitter_javascript();
	ts_parser_set_language(parser, language);
}

TSTree *js_parse(const char *source_code) {
	return ts_parser_parse_string(parser, NULL, source_code, strlen(source_code));
}

const char *js_node_text(TSNode node, char *code) {
	std::string stdcode = std::string(code);
	return stdcode.substr(ts_node_start_byte(node), ts_node_end_byte(node) - ts_node_start_byte(node)).c_str();
}