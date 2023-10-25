/******************************************** Dealing with characters*************************************************************
Problem 1

Author: Karim_Mohamed
Date: 25 oct 2023

explaination of the code is this code to print char or word or sentance with spaces between the words
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    char s[20], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
