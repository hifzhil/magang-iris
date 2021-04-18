#include <cstdio>

void ubahNilai(int a, int b)
{
    a = a + 5;
    b = b + 3;
}


int main()
{
    int num1 = 6;
    int num2 = 10;
    ubahNilai(num1, num2);
    printf("%d %d\n", num1, num2);
    return 0;
}
