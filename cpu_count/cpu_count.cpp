#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

int main()
{
    SYSTEM_INFO sys_info;
    GetNativeSystemInfo(&sys_info);

    return sys_info.dwNumberOfProcessors;
}


