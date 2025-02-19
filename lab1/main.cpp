#include<iostream>
#include "Mymath/Mymath.h"
#include "lib/libpool.h"

int main()
{
    int a,b;
    std::cout<<"Введите числа а и b:";
    std::cin>>a>>b;
    std::cout<<"Сумма чисел и 32:"<<Mymath::sum(a,b)<<'\n';
    std::cout<<"Факториал числа 10:"<<factorial::Factor(10)<<'\n';
    return 0;
}
