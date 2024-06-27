#include <stdarg.h>
#include <stdio.h>

namespace JSGodot {

class Logger {
public:
	static void print_line(const char *p_content);

private:
	static void __print(const char *format, ...);
};

} //namespace JSGodot