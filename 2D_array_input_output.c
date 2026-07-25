#include <stdio.h>

int main ()
{
    /*

    int a[4][3];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("a[%d][%d]", i, j);
        }
        printf("\n");
    }
    */
    /*
        2D Array:

        A 2D array is an array of arrays.

        Here:

        4 → number of rows
        3 → number of columns

        Total elements:

        row × column
        4 × 3 = 12 elements
    */
    
    
    int a[4][3];


    /*
        Input values into 2D array.

        We need two loops because
        a 2D array has two dimensions:

        i → row index
        j → column index


        Example:

        a[0][0]
        a[0][1]
        a[0][2]

        Then move to next row:

        a[1][0]
        a[1][1]
        a[1][2]

    */
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            /*
                &a[i][j] means:

                Go to this specific row and column
                memory location and store the input value there.
            */
            scanf("%d", &a[i][j]);
        }
    }


    /*
        Output values from 2D array.

        Same nested loop is used to
        visit every row and column.

        First inner loop prints one complete row,
        then printf("\n") moves to the next row.
    */
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            /*
                a[i][j] accesses:

                first:
                    i → row

                then:
                    j → column

                Example:

                a[2][1]

                means:
                3rd row, 2nd column value
            */
            printf("%d ", a[i][j]);
        }

        /*
            After printing one row,
            move to the next line
            to keep the table format.
        */
        printf("\n");
    }


   return 0; 
}