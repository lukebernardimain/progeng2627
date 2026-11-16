#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    double n, inp;

    std::cout << "How many numbers would you like to enter? ";
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cin >> inp;
        v.push_back(inp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}