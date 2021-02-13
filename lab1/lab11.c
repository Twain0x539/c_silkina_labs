#include <stdio.h>
#include <math.h>

int factorial(int x) {
    int answer = 1;
    while (x != 0) {
        answer *= x;
        x--;
    }
    return answer;
}
int main(){
    
float x,y,z;

scanf("%f", &x);
scanf("%f", &y);
scanf("%f", &z);
    
    float a,b;
    
    a = pow(log(abs((x - sqrt(abs(y))) * (x + y / (z + ((pow(x, 6)) / 4))))), 0.2);
    b = -x + (x * x) / factorial(4) - pow(x, 5) / factorial(6);


    printf("%.6f\n", a);
    printf("%.6f\n", b);

return 0;
}
