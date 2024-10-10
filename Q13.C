// Ali
// October 10th, 2024
// Print the following pattern:
//1
//12
//123
//1234
//12345
//123456
//Then print it upside down

#include <stdio.h>


int main(){
    int length_of_pattern;
    int num = 1;
    // get length of pattern from user
    printf("Enter how long would you like this pattern to go on for: ");
    scanf("%d", &length_of_pattern);

    // loops for length of pattern
    for(int i = 1; i<=length_of_pattern; i++){
        // display current number
        printf("%d\n", num);
        // ensures next number displays past numbers with the next number in the sequence
        num = num*10 +(i +1);
    }
    printf("\n");
    // loops for the length of pattern
    for(int i = length_of_pattern; i>0; i--){
        // reduces number by one column 
        num = num/10;
        printf("%d\n", num);
    }
    return 0;
}