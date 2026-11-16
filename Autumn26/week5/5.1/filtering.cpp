#include <iostream>
#include <vector>

int main () {
    int n,inp,t;
    std::vector<int> v;

    std::cout << "How many numbers do you want to input: ";
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cout << "Number: ";
        std::cin >> inp;

        v.push_back(inp);
    }

    std::cout << "Filter number: ";
    std::cin >> t;

    for (int i = 0; i < v.size(); i++){
        if (v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}