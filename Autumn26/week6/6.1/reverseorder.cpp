#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main () {
    const std::string filename = "words.txt";

    std::ifstream f;
    f.open(filename);

    if (!f.is_open()){
        std::cout << "Error loading file";
        return EXIT_FAILURE;
    }


    std::string temp;
    std::vector<std::string> v1;
    while (f >> temp){
        v1.push_back(temp);
    }

    for (int i = v1.size()-1; i >= 0; i--){
        std::cout << v1[i] << std::endl;
    }

    f.close();
}