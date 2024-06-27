#include "qjspp.hpp"

namespace JSGodot {

class UtilityFunctions {
public:
	static void print(rest<JSValue> variants);
	static void print_internal(JSValue **variant);
};

} // namespace JSGodot
