//
//  lab12.c
//  
//
//  Created by Mihail Karaev on 12.02.2021.
//

#include "stdio.h"
#include "math.h"


int main(){
    
    float x;
    scanf("%f", &x);
    
    if (x < -1){
        printf("%.6f", -1/(x*x));
    }
    else if (x < 2){
        printf("%.6f", x*x);
    }
    else{
        printf("%d", 4);
    }
    
    return 0;
}
