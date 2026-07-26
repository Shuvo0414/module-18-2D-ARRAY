#include <stdio.h>

int main()
{
    /*
        Taking rows and columns of the matrix.

        rows → number of rows
        cols → number of columns

        Example:

        3 × 3 matrix

        Total elements = 9
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    /*
        Total number of elements
        in the matrix.

        This was used in the previous
        counting method.

        Example:

        rows = 3
        cols = 3

        element = 9
    */
    int element = rows * cols;

    /*
        Creating a 2D array.

        a[rows][cols]

        First index → row
        Second index → column
    */
    int a[rows][cols];

    /*
        Taking input for the matrix.

        Nested loop is needed because
        a matrix has rows and columns.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        Previous method:

        We counted how many zero elements
        exist in the matrix.

        int cnt = 0;

        If:

        total elements == zero count

        then every element is zero.

        Example:

        3 × 3 matrix

        element = 9
        cnt = 9

        So it is a Zero Matrix.
    */

    // int cnt = 0;

    /*
        New method:

        Using a flag variable.

        Assume first that the matrix
        is a Zero Matrix.

        1 means:
        Matrix is Zero Matrix

        0 means:
        Matrix is not Zero Matrix
    */
    int isZero = 1;

    /*
        Checking every element.

        If any element is not zero,
        then the whole matrix cannot
        be a Zero Matrix.

        Example:

        0 0 0
        0 5 0
        0 0 0

        When we find 5:

        isZero = 0

        because it is not a Zero Matrix.
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] != 0)
            {
                /*
                    Previous method:

                    cnt++;

                    was counting zero values.


                    New method:

                    Directly changing the flag.

                    Because finding one non-zero value
                    is enough to prove that this is
                    not a Zero Matrix.
                */

                // cnt++;

                isZero = 0;
            }
        }
    }

    /*
        Previous checking method:

        if (element == cnt)

        Means:
        Total elements == number of zeros

        Then all elements are zero.


        if (element == cnt)
        */

    /*
        New checking method:

        If isZero is still 1,
        it means we never found
        any non-zero element.

        Therefore, it is a Zero Matrix.
    */

    // if (element == cnt)
    if (isZero == 1)
    {
        printf("It's a zero Matrix");
    }
    else
    {
        printf("It's not a zero Matrix");
    }

    return 0;
}