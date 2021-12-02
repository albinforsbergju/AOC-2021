#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ifstream input;

    input.open("input.txt");
    std::vector<int> num;
    std::vector<std::string> dir;
    int n;
    std::string d;

    while(!input.fail()){
        input >> d;
        dir.push_back(d);
        input >> n;
        num.push_back(n);
    }

    int horizontal = 0, vertical = 0, aim = 0;

    for(int i = 0; i < dir.size()-1; i++){
        std::string s = dir[i];

        if(s == "forward"){
            horizontal += num[i];
            if(aim != 0){
                vertical += aim * num[i];
            }
        } else if(s == "up"){
            // vertical -= num[i];
            aim -= num[i];
        } else if(s == "down"){
            // vertical += num[i];
            aim += num[i];
        }

        std::cout << "Horizontal: " << horizontal << " " << "Depth: " <<  vertical << " Aim: " << aim << std::endl;
    }

    int output = horizontal * vertical;

    std::cout << output << std::endl;
    return 0;
}