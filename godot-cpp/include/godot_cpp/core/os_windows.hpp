#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <windows.h>

void RedirectStream(const char *p_file_name, const char *p_mode, FILE *p_cpp_stream, const DWORD p_std_handle);
void RedirectIOToConsole();