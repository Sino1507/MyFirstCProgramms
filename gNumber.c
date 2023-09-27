#include <stdio.h>
#include <windows.h>
#include <time.h>

int isNumber(int number1, int number2) {
    if(number1 == number2) {
        return TRUE;
    }

    return FALSE;
}

int random_number(int min_num, int max_num){
    int result = 0, low_num = 0, hi_num = 0;

    if (min_num < max_num)
    {
        low_num = min_num;
        hi_num = max_num + 1; 
    } else {
        low_num = max_num + 1;
        hi_num = min_num;
    }

    srand(time(NULL));
    result = (rand() % (hi_num - low_num)) + low_num;
    return result;
}

int main(void) {
    int rInt = random_number(0, 10);
    int uInt;

    printf("(-) Let's play! Guess the number between 1-10! ");
    scanf("%d", &uInt);

    if(isNumber(rInt, uInt)) {
        printf("(-) That is correct!");
        getch();  
        return EXIT_SUCCESS;
    }

    printf("(-) Sorry, that is incorrect! The correct answer is: %d", rInt);
    getch();  
    return EXIT_SUCCESS;
}
