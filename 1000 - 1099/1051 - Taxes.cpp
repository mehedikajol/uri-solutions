#include<stdio.h>
int main(void){
    float input,tax,increase;
    scanf("%f",&input);
    if(input<=2000.00)
        printf("Isento\n");
    else if(input>2000.00 && input<=3000.00){
        increase=input-2000.00;
        tax=increase/100.00*8.00;
        printf("R$ %.2f\n",tax);
    }
    else if(input>3000.00 && input<=4500.00){
        increase=input-3000.00;
        tax=increase/100.00*18.00+80.00;
        printf("R$ %.2f\n",tax);
    }
    else{
        increase=input-4500.00;
        tax=increase/100.00*28.00+350.00;
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
