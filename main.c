#include <stdio.h>
#include <stdlib.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    float t1,t2,t3;
    printf("������ ���(� �������) �� ���� ����� ���� �'��� ����\n");
    scanf("%f %f %f",&t1,&t2,&t3);
    float t = 1/t1 + 1/t2 + 1/t3;
    float th =1/t;
    printf("������ ������� %.2f ������ ��� �'���� ���� ����",th);
    return 0;
}
