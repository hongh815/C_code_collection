#include <stdio.h>

int main(void)
{
    int send ;
    int coffie ;
    int cup ;
    
    printf("세 개의 물건값을 입력하세요 : \n");
    scanf("%d %d %d", &send, &coffie, &cup);
    int cal_money = 10000 - (send + coffie + cup);
    
    printf("거스름돈은 %d 원입니다.", cal_money);
    
    printf("\n5000원 %d개\n1000원 %d개\n500원 %d개 \n100원 %d개 \n50원 %d개 \n10원 %d개\n", cal_money/5000,(cal_money%5000)/1000, ((cal_money%5000)%1000)/500,(((cal_money%5000)%1000)%500)/100,((((cal_money%5000)%1000)%500)%100)/50,(((((cal_money%5000)%1000)%500)%100)%50)/10);

    
}

