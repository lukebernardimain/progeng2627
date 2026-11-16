#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (n == vin[i]){
            return i;
        }
    }
    return -1;
}

int main () {
    if (search_vector (1, {1,2,3,2}) == 0){
        std::cout << "Success" << std::endl;
    }
    if (search_vector (2, {1,2,3,3}) == 1){
        std::cout << "Success" << std::endl;
    }
    if (search_vector (3, {3,2,3,1}) == 0){
        std::cout << "Success" << std::endl;
    }
    if (search_vector (2, {1,2,3,4}) == 1){
        std::cout << "Success" << std::endl;
    }
    if (search_vector (1, {10,2,3,2}) == -1){
        std::cout << "Success" << std::endl;
    }
    if (search_vector (10, {1,2,3,10}) == 3){
        std::cout << "Success" << std::endl;
    }
}