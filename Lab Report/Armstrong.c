#include <stdio.h>

int armstrong();
void perfect();
int main() {
    // Write C code here
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    int check = armstrong(num);
    perfect(num);
    if(check == 1){
        printf("%d is a armstrong number \n",num);
    }else{
        printf("%d is not a armstrong number \n",num);
        
    }
    return 0;
}

int armstrong(int num1){
    int armstrong = 0,power = 0,powResult = 1,addPow = 0;
    int check = num1,loopnum = num1;
    while(loopnum != 0){
    power = power + 1;
    loopnum = loopnum / 10;
    // printf("%d \n",power);
    }
    for(int i = 0;i<power;i++){
        char num2 = num1;
        if(num2 == 0){
            break;
        }
        int num3 = num1 % 10;
        int num4 = num1 / 10;
        num1 = num4;
        for(int j =0;j < power ;j = j +1){
            // printf("j lop: %d \n",j);
            powResult = powResult * num3 ;
            // printf("power: %d \n",powResult);
            // printf("addpower: %d \n",addPow);
        }
        addPow = addPow + powResult;
        powResult = 1;
    }
    armstrong = armstrong + addPow;
    // printf("%d \n",armstrong);
    if(armstrong == check){
        return 1;
    }else{
        return 0;
    }
}

void perfect(int checkNum){
    int sum = 0,numToAdd;
    for(int i = 1;i<checkNum;i++){
        if(checkNum % i ==0){
            sum = sum +i;
        }
    }
    if (sum == checkNum){
        printf("%d is a perfect number \n",checkNum);
    }
    else{
        printf("%d is not a perfect number \n",checkNum);

    }
}

