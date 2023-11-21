#include <iostream>

int main(int argc, char* argv[]){

    #ifdef DEBUG
        std::cout << "debug";
    #else
        std::cout << "std";
    #endif

    return 0;
}