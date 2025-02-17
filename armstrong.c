//
//  main.c
//  armstrong
//
//  Created by Girish Magar on 08/02/2025.
//

#include <stdio.h>
int main(void) {
    int a = 371;
    int original = a;
    int rev=0;
    while (a != 0)
    {
        int rem = a % 10;
        rev = rev + rem * rem * rem;
        a /= 10;
    }
    if (rev == original)
    {
        printf("An Armstrong\n");
    }
    else
    {
        printf("Not An Armstrong\n");
    }
    return 0;
}
