#include "Iterator.h"

void printVector(std::vector<std::string> vec){
    for (auto it=vec.begin();it!=vec.end();++it){
        std::cout<<*it<< ", ";
    }
    std::cout<<std::endl;
}
void reverseVector(std::vector<std::string> vec){
    for (auto it=vec.end();it!=vec.begin();--it){
        std::cout<<*it<<", ";
    }
    std::cout<<std::endl;
}

void replace(std::vector<std::string>& vec, std::string old, std::string replacement){
    for (auto it = vec.begin(); it != vec.end(); ++it){
        if(*it == old){
            vec.erase(it);
            vec.insert(it,replacement);
        }
        std::cout<<*it<<", ";
    }
    std::cout<<std::endl;
}