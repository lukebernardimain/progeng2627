#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for (int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main () {
    std::vector<int> vout;
    std::vector<int> vtest;
    vtest = {1,2,3,4,5,6};
    append_vectors({1,2,3}, {4,5,6}, vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
    vout.clear();
    vtest = {2,2,3,4,4,6};
    append_vectors({2,2,3}, {4,4,6}, vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
    vout.clear();
    vtest = {6,6,3,4,4,4};
    append_vectors({6,6,3}, {4,4,4}, vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
    vout.clear();
    vtest = {1,2,2,4,5,2};
    append_vectors({1,2,2}, {4,5,2}, vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
}