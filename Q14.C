// Ali 
// October 10th, 2024
// generate the fibonacci sequence to the nth term that the user inputs

#include <stdio.h>
#include <math.h>

int main(){
    int length_of_sequence;
    int f_sequence = 0;
    int F2 = 1;
    int F1 = 0;
    // Gets length of sequence from the user 
    printf("Please enter how long you would like your fibbonacci sequence to be: ");
    scanf("%d", &length_of_sequence);
    int n = 0;

    // displays the first term 
    printf("0 ");
    // loops until length of sequence the user inputted
    while (n < length_of_sequence){

        // this term is Fn-2 therefore will be equal to what F2 was in the previous loop
        F1 = F2;
        // this term is Fn-1 therefore will be equal to what the fibbonacci termw as in the previous loop
        F2 = f_sequence;
        // adds F1 and F2 terms to create the term of the fibbonaci sequence in the current loop
        f_sequence = F1 +F2;
        printf("%d ", f_sequence);

        n++;
    }
    return 0;
}
