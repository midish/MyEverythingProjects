/* Вывести через пробел все целые числа из промежутка [A,B],(A<B) в обратном порядке: от B до A.
Входные данные:
Два целых числа A,B, при этом A<B.

Выходные данные: 
Целые числа из промежутка от [A,B], записанные через пробел в обратном порядке.
*/
#include <stdio.h>

int     main() 
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (B > A)
    {
        for (int i = B; A <= B; A++)
        {
            printf("%d ", i);
            i--;
        }
        return 0;
    }
    else
        return 0;
}