
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    
    float ch1 = 2.3;
    float ch2 = 2.3;
    float ch3 = 2.123456;
    float ch4 = 2.123456;
    float ch5 = 2.123456;

    printf("%.1f \n", ch1); 
    //з 1 знаком після коми
    printf("%.2f \n", ch2);
    //з 2 знаками після коми
    printf("%f \n", ch3);
    //З усіма знаками після коми
    printf("%.2f \n", ch4);
    // з 2 знаками після коми
    printf("%.f \n", ch5);
    // без десятих

return 0;
}

