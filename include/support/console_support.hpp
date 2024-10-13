#ifndef __CONSOLE_SUPPORT_H__
#define __CONSOLE_SUPPORT_H__

typedef unsigned long DWORD;
typedef struct _iobuf FILE;

void RedirectStream(const char *p_file_name, const char *p_mode, FILE *p_cpp_stream, const DWORD p_std_handle);
void RedirectIOToConsole();
#endif // __CONSOLE_SUPPORT_H__