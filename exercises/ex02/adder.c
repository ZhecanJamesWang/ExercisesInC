#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int processing(char* input){
    if (strlen(input) > 10){
        puts("you enter not more than 10 digts");
        return 0;
    }
    if (atoi(input) == 0){
        puts("please enter real digits");
        return 0;
    }
    return atoi(input);
}

int sumup(int arr[10]){
    int sum = 0;
    for(int i = 0; i < 10; i ++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    char input[10];
    int result;
    int count = 0;
    int val[10];

    printf("Please enter up to 10 digts\n");

    while (scanf("%10s", input) != EOF) {
        result = processing(input);
        if (result != 0){
            val[count] = result;
            if (count == 1){
                break;
            }else{
                count ++;
            }
        }
    }
    printf("%s%d\n", "result: ", result);
    printf("%s%d\n", "val: ", val[0]);
    printf("%s%d\n", "val: ", val[1]);
    printf("%s%d\n", "sum: ", sumup(val));

}
