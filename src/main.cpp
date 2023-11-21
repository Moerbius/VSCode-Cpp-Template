#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    //includes for Windows
#elif __APPLE__
    //includes for Mac
#elif __linux__
    //includes for Linux
#else
    #error "Unknown compiler"
#endif

#include <iostream>

int main(int argc, char* argv[]){

    #ifdef DEBUG
        std::cout << "debug" << std::endl;
    #else
        std::cout << "std" << std::endl;
    #endif

    return 0;
}