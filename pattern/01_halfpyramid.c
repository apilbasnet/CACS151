#include <stdio.h>

// int main()
// {
//     int j, i, rows;
//     printf("Enter the number of rows : ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {

//             printf("* ");
//         }

//         printf("\n");
//     }
//     return 0;
// }
/*output

*
* *
* * *
* * * *
* * * * *

*/

int main()
{
    int i, j ;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

/*
OUTPUT:
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/