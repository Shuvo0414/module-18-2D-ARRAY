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

        Every element is stored
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
        Assume the matrix is a
        Secondary Diagonal Scalar Matrix.

        flag = 1 means:
        Matrix is valid.

        If we find any wrong condition,
        we change flag to 0.
    */
    int flag = 1;

    /*
        Scalar matrix must be
        a square matrix.

        Number of rows and columns
        must be equal.

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

        For Secondary Diagonal:

        Condition:

        i + j == rows - 1


        Example for 3x3:

        0 0 5
        0 5 0
        5 0 0


        Positions:

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
                Checking if current element
                is on the Secondary Diagonal.

                If yes:

                Compare this value with
                the first Secondary Diagonal value.

                First Secondary Diagonal value:

                a[0][rows-1]

                Example:

                3x3:

                a[0][3-1]

                a[0][2]
            */
            if (rows - 1 == i + j)
            {
                if (a[i][j] != a[0][rows - 1])
                {
                    flag = 0;
                }
            }

            /*
                If it is not a Secondary
                Diagonal element,

                then it must be zero.

                Example:

                5 0 0
                0 5 0
                0 0 5

                Every non-diagonal position
                must contain 0.
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
        ✓ Secondary diagonal values are equal.
        ✓ Other values are zero.

        Then it is a Secondary
        Diagonal Scalar Matrix.
    */
    if (flag == 1)
    {
        printf("It's a Secondary Diagonal Scalar Matrix");
    }
    else
    {
        printf("It's not a Secondary Diagonal Scalar Matrix");
    }

    return 0;
}