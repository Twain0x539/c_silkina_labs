//
//  lab13.c
//  
//
//  Created by Mihail Karaev on 12.02.2021.
//

#include "stdio.h"


int main(){
    int x;
    int sum = 0;
    scanf("%d", &x);
    
    while (x > 0){
        sum += x % 10;
        x = x / 10;
    }
        
    printf("%d",sum);
    
    return 0;
}
