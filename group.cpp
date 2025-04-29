#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <iterator>

std::vector<std::string> seperate(std::string str_){
    std::vector<std::string> out;
    std::string result = "";
    for(int i=0; i<str_.length(); i+=2){
        result += str_[i];
        result += str_[i+1];
        out.push_back(result);
        result = "";
    }
    return out;
}

std::vector<std::string> reverse(std::vector<std::string> vec){
    std::vector<std::string> out;
    std::stack<std::string> stack_;
    for(auto &element : vec){
        stack_.push(element);
    }

    while(!stack_.empty()){
        out.push_back(stack_.top());
        stack_.pop();
    }
    return out;
}


int main(){

    std::cout << "Enter a hex number: " << std::endl;
    std::string hex = "";
    std::cin >> hex;

    std::vector<std::string> sprt = seperate(hex);
    std::vector<std::string> rvrsd = reverse(sprt);
    for(auto i : rvrsd){
        std::cout << i << " ";
    }
    std::cout << std::endl;


}