#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

bool search_vector(const std::string& s, const std::vector<std::string>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == s){
            return true;
        }
    }
    return false;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        if (!search_vector(vin1[i], vin2)){ //gonna be added in loop2
            vout.push_back(vin1[i]);
        }
    }
    for (int j = 0; j < vin2.size(); j++){
        vout.push_back(vin2[j]);
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        if (search_vector(vin1[i], vin2)){
            vout.push_back(vin1[i]); // only add overlap
        }
    }
}

int main () {
    std::cout << "Input file name 1 & 2:\n";

    std::ifstream in1;
    std::string f1;
    std::cin >> f1;
    in1.open(f1); //open input 1

    std::ifstream in2;
    std::string f2;
    std::cin >> f2;
    in2.open(f2); //open input 2

    std::ofstream unif;
    unif.open("union.txt");
    std::ofstream intf;
    intf.open("intersection.txt"); //output files


    std::string temp;

    std::vector<std::string> v1;
    while (in1 >> temp){
        v1.push_back(temp);
    }

    std::vector<std::string> v2;
    while (in2 >> temp){
        v2.push_back(temp);
    } // load vectors with file

    std::vector<std::string> uv;
    union_vector(v1, v2, uv);
    std::vector<std::string> iv;
    intersection_vector(v1, v2, iv); // run computation

    for (int i = 0; i < uv.size(); i++){
        unif << uv[i] << std::endl;
    }
    for (int j = 0; j < iv.size(); j++){
        intf << iv[j] << std::endl;
    }
}