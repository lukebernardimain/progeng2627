#include <iostream>
#include <vector>
#include <fstream>

double scalar_product(const std::vector<double>& v1, const std::vector<double>& v2){
    int total = 0;
    for (int i = 0; i < v1.size(); i++){
        total += v1[i] * v2[i];
    }
    return total;
}

std::vector<double> collumn(int colI, const std::vector<std::vector<double>>& matrix){
    std::vector<double> vout;
    for (int i = 0; i < matrix.size(); i++){ //iterate through matrix row by row
        vout.push_back(matrix[i][colI]); //add the collumn index from each row
    }
    return vout;
}

void print_matrix(const std::vector<std::vector<double>>& mout){
    for (int i = 0; i < mout.size(); i++){ // rows
        for (int j = 0; j < mout[0].size(); j++){ // cols
            std::cout << mout[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main () {
    std::vector<std::vector<double>> m1 = {{1,2,3},{1,1,1},{3,2,1}};
    std::vector<std::vector<double>> m2 = {{3,3,3},{2,2,2},{1,1,1}};
    print_matrix(m1);
    print_matrix(m2);

    std::vector<std::vector<double>> mout = {};

    for (int i = 0; i < m1.size(); i++){ //for each row in m1
        mout.push_back({}); //make a row in output
        for (int j = 0; j < m2[0].size(); j++){ //for each col in m2
            mout[i].push_back(scalar_product(m1[i], collumn(j, m2))); //multi row from m1 with col from m2 and put into current row's vector
        }
    }

    print_matrix(mout);
}