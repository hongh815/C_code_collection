#include <stdio.h>

int main(void)
{
    int dondon = 70;
    int binbin = 30;
    int d,b;
    int money;
    
    printf("동동면과 빈빈바 몇개 살지 결정 : \n");
    scanf("%d %d", &d, &b);
    int cal_don = d * dondon;
    int cal_bin = b * binbin;
    printf("얼마를 내시겠습니까??\n");
    scanf("%d", &money);
    
    printf("동동면 전체 금액 : %d 원\n꽁꽁바 전체 금액 : %d 원\n", cal_don, cal_bin);
    int cal_money = money - (cal_don+cal_bin);
    
    printf("거스름돈 : %d 원\n", cal_money);
    
    printf("거스름돈 동전의 최소 갯수...\n");
    
    
    
    printf("500원 %d개 100원 %d개 50원 %d개 10원 %d개", cal_money/500, (cal_money%500)/100, ((cal_money%500)%100)/50,(((cal_money%500)%100)%50)/10);
    
    
    
}

