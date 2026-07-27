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

        i -> row
        j -> column
    */
    int a[rows][cols];

    /*
        Taking matrix input.

        Outer loop controls rows.
        Inner loop controls columns.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        Assume the matrix is a Unit Matrix.

        flag = 1 means:
        Matrix follows all Unit Matrix rules.

        If any condition fails,
        flag becomes 0.
    */
    int flag = 1;

    /*
        Unit Matrix must be a square matrix.

        rows and columns must be equal.

        Example:

        3 x 3 ✅
        4 x 4 ✅

        3 x 4 ❌
    */
    if (rows != cols)
    {
        flag = 0;
    }

    /*
        Checking every element.

        There are two areas:

        1. Primary diagonal
           i == j

        2. Non-diagonal elements
           i != j
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            /*
                Checking primary diagonal.

                Example for 3x3:

                1 0 0
                0 1 0
                0 0 1


                Diagonal positions:

                a[0][0]
                a[1][1]
                a[2][2]


                Unit Matrix rule:

                Every diagonal value must be 1.
            */
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
            }

            /*
                If it is not a diagonal element,

                then it must be zero.

                Example:

                1 0 0
                0 1 0
                0 0 1


                All other positions are 0.
            */
            else if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    /*
        Final checking.

        If flag remains 1:

        ✓ Matrix is square.
        ✓ All diagonal elements are 1.
        ✓ All other elements are 0.

        Therefore:
        Unit Matrix.
    */
    if (flag == 1)
    {
        printf("It's a Primary Diagonal Unit Matrix");
    }
    else
    {
        printf("It's not a Primary Diagonal Unit Matrix");
    }

    return 0;
}