
#include <stdio.h>

int main(void)
{
    float inch = 2.54;
    int m ;

    printf("미터 설정 : ");
    scanf("%d", &m);
    int m_a = 100 * m;
    float inch_m = m_a / inch;

    printf("%d 미터는 %.1f 인치입니다.", m, inch_m);

}

