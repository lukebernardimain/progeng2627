#include <iostream>
#include <fstream>

int main (int a, char* filename[]) {
    std::ifstream f;
    f.open(filename[1]);

    std::string temp;
    while (f >> temp){
        std::cout << temp << std::endl;
    }
}