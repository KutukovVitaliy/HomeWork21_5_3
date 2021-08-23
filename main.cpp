#include "main.h"
#include <string>

int main() {
    bool goodInput;
    std::string command;
    do{
        goodInput = false;
        std::cout << "Input the command ('add','subtract', 'scale', 'length', 'normalize' ):";
        std::cin >> command;
        if(command == "add" || command == "subtract" || command == "scale" || command == "length"
        || command == "normalize") goodInput = true;
        if(!goodInput) std::cout << "Bad command. Try again!";
    } while (!goodInput);
    if(command == "add"){
        vec vec1, vec2, vec3;
        std::cout << "Input 'X' coordinate of vector #1: ";
        std::cin >> vec1.x;
        std::cout << "Input 'Y' coordinate of vector #1: ";
        std::cin >> vec1.y;
        std::cout << "Input 'X' coordinate of vector #2: ";
        std::cin >> vec2.x;
        std::cout << "Input 'Y' coordinate of vector #2: ";
        std::cin >> vec2.y;
        vec3 = AddVec(vec1, vec2);
        std::cout << "the resulting vector has coordinates: X = " << vec3.x << "  Y = " << vec3.y <<
        std::endl;
   }
    if(command == "subtract"){
        vec vec1, vec2, vec3;
        std::cout << "Input 'X' coordinate of vector #1: ";
        std::cin >> vec1.x;
        std::cout << "Input 'Y' coordinate of vector #1: ";
        std::cin >> vec1.y;
        std::cout << "Input 'X' coordinate of vector #2: ";
        std::cin >> vec2.x;
        std::cout << "Input 'Y' coordinate of vector #2: ";
        std::cin >> vec2.y;
        vec3 = SubVec(vec1, vec2);
        std::cout << "the resulting vector has coordinates: X = " << vec3.x << "  Y = " << vec3.y <<
        std::endl;
    }
    if(command == "scale"){
        vec vec1, vec2;
        float scalar;
        std::cout << "Input 'X' coordinate of vector: ";
        std::cin >> vec1.x;
        std::cout << "Input 'Y' coordinate of vector: ";
        std::cin >> vec1.y;
        std::cout << "Input scalar: ";
        std::cin >> scalar;
        vec2 = ScalVec(vec1, scalar);
        std::cout << "the resulting vector has coordinates: X = " << vec2.x << "  Y = " << vec2.y <<
        std::endl;
    }
    if(command == "length"){
        vec vec1;
        float length;
        std::cout << "Input 'X' coordinate of vector: ";
        std::cin >> vec1.x;
        std::cout << "Input 'Y' coordinate of vector: ";
        std::cin >> vec1.y;
        length = LengthVec(vec1);
        std::cout << "the vector's length = " << length <<  std::endl;
    }
    if(command == "normalize"){
        vec vec1;

        std::cout << "Input 'X' coordinate of vector: ";
        std::cin >> vec1.x;
        std::cout << "Input 'Y' coordinate of vector: ";
        std::cin >> vec1.y;
        NormalVec(vec1);
        std::cout << "the resulting vector has coordinates: X = " << vec1.x << "  Y = " << vec1.y <<
        std::endl;
    }
    return 0;
}
