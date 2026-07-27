#include <stdio.h>

int main()
{
    /*
        Taking matrix size.

        rows -> number of rows
        cols -> number of columns
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    /*
        Creating a 2D array.

        a[i][j]

        i -> row index
        j -> column index
    */
    int a[rows][cols];

    /*
        Taking matrix input.

        Outer loop controls rows.
        Inner loop controls columns.

        Every value is stored
        at its exact position.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        Assume the matrix is
        a Secondary Diagonal Unit Matrix.

        flag = 1 means:
        Matrix is valid.

        If any condition fails,
        flag becomes 0.
    */
    int flag = 1;

    /*
        Unit Matrix must be a square matrix.

        That means:

        rows == cols

        Example:

        3 x 3  ✅
        4 x 4  ✅

        3 x 4  ❌
    */
    if (rows != cols)
    {
        flag = 0;
    }

    /*
        Checking every element.

        For Secondary Diagonal:

        Condition:

        i + j == rows - 1


        Example for 3x3:


        0 0 1
        0 1 0
        1 0 0


        Secondary diagonal positions:

        a[0][2]
        a[1][1]
        a[2][0]


        Because:

        0+2 = 2
        1+1 = 2
        2+0 = 2


        And:

        rows - 1 = 3 - 1 = 2
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            /*
                If current position is
                Secondary Diagonal:

                Then the value must be 1.

                Example:

                a[0][2] = 1
                a[1][1] = 1
                a[2][0] = 1
            */
            if (rows - 1 == i + j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
            }

            /*
                If current position is not
                Secondary Diagonal,

                then the value must be 0.

                Example:

                0 0 1
                0 1 0
                1 0 0


                All other positions are zero.
            */
            else if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    /*
        Final checking.

        If flag is still 1:

        ✓ Matrix is square.
        ✓ Secondary diagonal values are 1.
        ✓ Other elements are 0.

        Therefore:
        It is a Secondary Diagonal Unit Matrix.
    */
    if (flag == 1)
    {
        printf("It's a Secondary Diagonal Unit Matrix");
    }
    else
    {
        printf("It's not a Secondary Diagonal Unit Matrix");
    }

    return 0;
}