#include <iostream>
#include <cmath>
struct mvector {
    float x = 0;
    float y = 0;
};
void add ();
void subtract ();
void scale ();
void length ();
void normalize ();

int main() {
std::string operation ;
std::cout << "Enter a command to act on the vectors: ";
std::cin >> operation ;
if (operation  == "add"){
    add ();
} else if (operation  == "subtract") {
    subtract ();
} else if (operation == "scale"){
    scale ();
} else if (operation == "length"){
    length();
} else if (operation == "normalize"){
    normalize ();
}

}


void add (){
    mvector vec1;
    mvector vec2;

    std::cout << "Enter x and y for the first vector: ";
    std::cin >> vec1.x >> vec1.y;

    std::cout << "Enter x and y for the second vector: ";
    std::cin >> vec2.x >> vec2.y;

    mvector vec3 = {vec1.x +vec2.x, vec1.y+vec2.y};
    std::cout << "As a result of addition, the vector x " << vec3.x << ", y "<< vec3.y <<" was obtained";
}

void subtract (){
    mvector vec1;
    mvector vec2;

    std::cout << "Enter x and y for the first vector: ";
    std::cin >> vec1.x >> vec1.y;

    std::cout << "Enter x and y for the second vector: ";
    std::cin >> vec2.x >> vec2.y;

    mvector vec3 = {vec1.x -vec2.x, vec1.y-vec2.y};
    std::cout << "As a result of subtraction, the vector x " << vec3.x << ", y "<< vec3.y <<" was obtained";
}
void scale (){
    mvector vec1;
    float num;

    std::cout << "Enter x and y for the vector: ";
    std::cin >> vec1.x >> vec1.y;

    std::cout << "Enter scalar number: ";
    std::cin >> num;
    mvector vec2 = {vec1.x * num, vec1.y* num};
    std::cout << "As a result of multiplying a vector by a number, a vector x " << vec2.x << ", y "<< vec2.y <<" was obtained";
}
void length (){
    mvector vec1;
    double length;

    std::cout << "Enter x and y for the vector: ";
    std::cin >> vec1.x >> vec1.y;

    length =  std::sqrt(std::pow(vec1.x,2) + std::pow (vec1.y,2));
    std::cout << "The length of the vector is " << length;
}

void normalize (){
    mvector vec1;
    double length;

    std::cout << "Enter x and y for the vector: ";
    std::cin >> vec1.x >> vec1.y;

    length =  std::sqrt(std::pow(vec1.x,2) + std::pow (vec1.y,2));
    std::cout << "normalized vector : x "<< vec1.x/length <<". y " << vec1.y/length;
}