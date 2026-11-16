#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if (vin.size() == 0){
        return -1;
    }
    int min = 1000000000; // abitrarily large (theoretically infinite)
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < min){
            min = vin[i];
        }
    }
    return min;
}

int main () {
    if (min_vector_element ({1,2,3,}) == 1){
        std::cout << "Success" << std::endl;
    }
    if (min_vector_element ({2,2,2,}) == 2){
        std::cout << "Success" << std::endl;
    }
    if (min_vector_element ({3,1,3,}) == 1){
        std::cout << "Success" << std::endl;
    }
    if (min_vector_element ({10,22,31,}) == 10){
        std::cout << "Success" << std::endl;
    }
    if (min_vector_element ({21,2,13,}) == 2){
        std::cout << "Success" << std::endl;
    }
    if (min_vector_element ({}) == -1){
        std::cout << "Success" << std::endl;
    }
}