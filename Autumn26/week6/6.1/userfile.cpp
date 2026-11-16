#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile; 
    std::string filename;

    std::cout << "Whats the file called: ";
    std::cin >> filename;
    infile.open(filename);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}