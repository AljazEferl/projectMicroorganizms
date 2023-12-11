#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



int main(int argc,char *argv[] ) {

   /* if(argc != 2){
        return 1;
    }*/

    string filename = "test.txt";//argv[1];
    ifstream file(filename);

    int height, width;
    file >> height >> width;

    std::vector<std::vector<int>> matrix;

    for (int i = 0; i < height; ++i) {
        std::string line;
        file >> line;

        std::vector<int> row;
        for (char c : line) {
            row.push_back(c - '0');
        }

        matrix.push_back(row);
    }

    file.close();


    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
