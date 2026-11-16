#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main () {
    std::vector<double> vout;

    std::vector<double> vtest = {1,2,3};
    filter_v({1,2,3},5,vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
    vout.clear();

    vtest = {};
    filter_v({1,2,3},1,vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
    vout.clear();
    
    vtest = {2,3};
    filter_v({5,2,3},4,vout);
    if (vout == vtest){
        std::cout << "Success" << std::endl;
    }
}