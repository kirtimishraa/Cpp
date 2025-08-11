#include<iostream>
#include<cmath>
int main(){
    float c, a, b, sum;
    std::cout<<"Enter First Number: \n";
    std::cin>>a;
    std::cout<<"Enter Second Number: \n";
    std::cin>>b;

    c=sqrt(pow(a, 2) + pow(b, 2));

    std::cout<<"Hypotenuse(C) of the triangle is: " << c;
    return 0;
}