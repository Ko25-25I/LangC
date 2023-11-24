#include<stdio.h>

int main(void){
    int num;

    printf("1~50までの数字で3で割り切れる数字は以下です。\n");
    for(num = 1; num <= 25; num++){
        if(num % 3 == 0){
            printf("%d \n", num);
        }
    }
    int  num = 26;
    while(num <= 50){
        if(num % 3 == 0){
            printf("%dは3で割り切れます。", num);
            num++;
        }
    }


    return 0;
}