#include <stdio.h>
int main(){
    //Max Mumber
    int maxNum = 1000;
    int i = 0;


    //Loop
    for(i = 1; i <= maxNum; i++){
        if (i % 2 == 0){
            printf("The number %d is EVEN\n",i);
        }
        else {
            printf("The number %d is ODD\n",i);
        }
    }
    


    return 0;
}