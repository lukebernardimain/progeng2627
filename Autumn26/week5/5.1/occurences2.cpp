#include <iostream>
#include <vector>

int main () {
    int n,inp,s,c = 0;
    std::vector<int> v;
    std::vector<int> indices;

    std::cout << "How many numbers do you want to input: ";
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cout << "Number: ";
        std::cin >> inp;

        v.push_back(inp);
    }

    std::cout << "Enter s: ";
    std::cin >> s;

    for (int i = 0; i < v.size(); i++){
        if (v[i] == s){
            c++;
            indices.push_back(i);
        }
    }

    std::cout << "There were " << c << " occurences of " << s << " at indices:" << std::endl;

    for (int i = 0; i < indices.size(); i++){
        std::cout << indices[i] << std::endl;
    }
}