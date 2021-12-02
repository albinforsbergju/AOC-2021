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
    int sum = 0; 
    int prevSum = 0;

    for(int i = 0; i < measurements.size();  i++){
        for(int j = i; j < i + 3; j++){
            sum += measurements[j];
        }
        if(sum > prevSum){
            counter++;
        }

        prevSum = sum;
        sum = 0;
    }

    std::cout << counter-1 << std::endl;

    return 0;
}