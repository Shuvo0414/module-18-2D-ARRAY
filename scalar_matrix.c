#include <stdio.h>

int main()
{
    /*
        Taking matrix size.

        rows = number of rows
        cols = number of columns
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

        Every value is stored
        in its exact position.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        Assume first that
        the matrix is a Scalar Matrix.

        flag = 1 means:
        It is a Scalar Matrix.

        flag = 0 means:
        It is not a Scalar Matrix.
    */
    int flag = 1;

    /*
        A Scalar Matrix must be
        a square matrix.

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
        Checking every element
        of the matrix.

        There are two different areas:

        1. Primary diagonal
           (i == j)

        2. Non-diagonal elements
           (i != j)


        Each area has different rules.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            /*
                Checking diagonal position.

                Example in 3x3:

                a[0][0]
                a[1][1]
                a[2][2]

                Condition:

                i == j
            */
            if (i == j)
            {

                /*
                    Scalar Matrix rule:

                    All diagonal elements
                    must be equal.

                    We use a[0][0]
                    as the reference value.

                    Example:

                    5 0 0
                    0 5 0
                    0 0 5

                    Compare:

                    a[1][1] with a[0][0]
                    a[2][2] with a[0][0]
                */
                if (a[i][j] != a[0][0])
                {
                    flag = 0;
                }
            }

            /*
                If it is not a diagonal element,

                then it must be 0.

                Example:

                5 0 0
                0 5 0
                0 0 5

                All non-diagonal values
                are zero.
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

        - Matrix is square.
        - All diagonal elements are equal.
        - All non-diagonal elements are zero.

        Then:

        It is a Scalar Matrix.
    */
    if (flag == 1)
    {
        printf("It's a Scalar Matrix");
    }
    else
    {
        printf("It's not a Scalar Matrix");
    }

    return 0;
}