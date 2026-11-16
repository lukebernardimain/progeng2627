#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    if(infile.is_open()){ 
        int tmp, total = 0;

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            total += tmp;
        }

        infile.close(); 

        std::cout << total;
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}