#include <iostream>
#include <cstdlib>

#if defined(__linux__)
#define WINDOWS 0

#elif defined(_WIN32) || defined(_WIN64)
#define WINDOWS 1

#endif

int main() {
    if(WINDOWS == 1) {
        system("installer.bat");

    }
    else if(WINDOWS == 0) {
        system("installer.sh");
    }
    return 0;
}