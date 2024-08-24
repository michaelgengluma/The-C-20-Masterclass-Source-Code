#include <iostream>

int main(){

    std::cout << std::endl;
    std::cout << "std::tolwer and std::toupper: " << std::endl;
    char original_str[] {"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];
    
    //Turn this to uppercase. Change the array in place
    for(size_t i{}; i < std::size(original_str) ; ++i){
        dest_str[i] = std::toupper(original_str[i]);
    }
    
    std::cout << "Original string : " << original_str << std::endl;
    std::cout << "Uppercase string : " << dest_str << std::endl;
    
    //Turn this to lowercase. Change the array in place
    for(size_t i{}; i < std::size(original_str) ; ++i){
        dest_str[i] = std::tolower(original_str[i]);
    }
    
    std::cout << "Lowercase string : " << dest_str << std::endl;
    return 0;
}