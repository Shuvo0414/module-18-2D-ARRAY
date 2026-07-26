#include <stdio.h>

int main()
{
    /*
        Taking the matrix size.

        rows → number of rows
        cols → number of columns
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    /*
        Creating a 2D array.

        First index → row
        Second index → column
    */
    int a[rows][cols];

    /*
        Taking input for every element
        of the matrix.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        Assume first that the matrix
        is a Primary Diagonal Matrix.

        flag = 1 → Primary Diagonal Matrix

        flag = 0 → Not a Primary Diagonal Matrix
    */
    int flag = 1;

    /*
        First condition:

        A Primary Diagonal Matrix
        must be a square matrix.

        That means:

        rows == cols

        If rows and cols are not equal,

        then it can never be
        a Primary Diagonal Matrix.
    */
    if (rows != cols)
    {
        flag = 0;
    }

    /*
        Checking every element.

        Primary diagonal positions are:

        a[0][0]
        a[1][1]
        a[2][2]
        ...

        Here:

        i == j

        means we are on the Primary Diagonal.

        Diagonal elements can be any value,
        so we don't need to check them.

        continue;

        skips the current iteration
        and moves to the next element.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                continue;
            }

            /*
                Every non-diagonal element
                must be 0.

                If we find even one
                non-zero value,

                then the matrix is
                not a Primary Diagonal Matrix.
            */
            else if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    /*
        If flag is still 1,

        it means:

        ✓ Matrix is square.

        ✓ All non-diagonal elements are 0.

        Therefore,

        it is a Primary Diagonal Matrix.
    */
    if (flag == 1)
    {
        printf("It's a Primary Diagonal");
    }
    else
    {
        printf("It's not a Primary Diagonal");
    }

    return 0;
}