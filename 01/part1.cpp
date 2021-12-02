#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ifstream input;

    input.open("input.txt");
    std::vector<int> measurements;
    int n;

    while(input >> n){
        measurements.push_back(n);
    }

    int counter = 0;

    for(int i = 1; i < measurements.size(); i++){
        // std::cout << measurements[i] << std::endl;
        if(measurements[i] > measurements[i-1]){
            counter++;
        }
    }

    std::cout << counter << std::endl;

    return 0;
}