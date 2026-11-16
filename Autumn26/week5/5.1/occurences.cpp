#include <iostream>
#include <vector>

int main () {
    int n,inp,s,c = 0;
    std::vector<int> v;

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
        }
    }

    std::cout << "There were " << c << " occurences of " << s;
}