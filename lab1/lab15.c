//
//  lab15.c
//  
//
//  Created by Mihail Karaev on 12.02.2021.
//

#include "stdio.h"

int main(){
float a;
float guess = 1;
float ctr = 2;
scanf("%f",&a);

while(guess <= a){
    guess += 1.0/ctr;
    ctr++;
}
    printf("%.6f", guess);
    return 0;
}
