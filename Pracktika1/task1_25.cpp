#include <iostream>
#include <math.h>
int main()
{
    int a = 3;
    float b = 0.523;
    double y;   
     
    y = (4 * pow((1.56 * pow(sin(b),1/2))/(0.8942 * log(a)), 1/2));

    std::cout << y;
    return(0);
}
