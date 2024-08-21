#include "quickjs/qjspp.h"

namespace JSGodot {

class UtilityFunctions {
public:
	static void print(qjs::rest<JSValue> variants);
	static void print_internal(JSValue *args, int argc);

private:
	static std::string to_string(JSValue value);
	static bool is_object(JSContext *ctx, JSValue value);
	static std::string gdstring_to_string(JSValue value);
	static std::string string_name_to_string(JSValue value);
};

} // namespace JSGodot
