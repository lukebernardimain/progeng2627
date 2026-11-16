#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main () {
    const std::string Ifilename = "words.txt";
    const std::string Ofilename = "wordsO.txt";


    std::ifstream If;
    If.open(Ifilename);

    if (!If.is_open()){
        std::cout << "Error loading input file";
        return EXIT_FAILURE;
    }

    std::ofstream Of;
    Of.open(Ofilename);


    std::string temp;
    std::vector<std::string> v1;
    while (If >> temp){
        v1.push_back(temp);
    }

    for (int i = v1.size()-1; i >= 0; i--){
        Of << v1[i] << std::endl;
    }

    If.close();
    Of.close();
}