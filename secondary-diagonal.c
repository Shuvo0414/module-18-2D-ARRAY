#include <stdio.h>

int main()
{

    /*
        Taking matrix size.

        rows → number of rows
        cols → number of columns
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    /*
        Creating a 2D array.

        a[rows][cols]

        First index  → row
        Second index → column
    */
    int a[rows][cols];

    /*
        Taking input for every element
        of the matrix.

        i controls rows.
        j controls columns.
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
        is a Secondary Diagonal Matrix.

        flag = 1

        means:
        Matrix is a Secondary Diagonal Matrix.

        flag = 0

        means:
        Matrix is not a Secondary Diagonal Matrix.
    */
    int flag = 1;

    /*
        A diagonal matrix must be
        a square matrix.

        That means:

        rows == cols

        If rows and cols are not equal,
        then it cannot be a diagonal matrix.
    */
    if (rows != cols)
    {
        flag = 0;
    }

    /*
        Checking every element
        of the matrix.

        Secondary diagonal condition:

        i + j == rows - 1


        Example for 3 × 3:

        (0,2)
        (1,1)
        (2,0)


        Because:

        0 + 2 = 2
        1 + 1 = 2
        2 + 0 = 2


        rows - 1:

        3 - 1 = 2
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            /*
                If current position
                is Secondary Diagonal,

                skip checking.

                Because diagonal elements
                can have any value.
            */
            if (i + j == rows - 1)
            {
                continue;
            }

            /*
                For all other positions
                (non-secondary diagonal),

                values must be 0.


                If we find any non-zero value,

                then it is not a
                Secondary Diagonal Matrix.
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

        It means:

        ✓ Matrix is square.
        ✓ All non-secondary diagonal elements
          are 0.


        Therefore:

        Secondary Diagonal Matrix.
    */
    if (flag == 1)
    {
        printf("It's a Secondary Matrix");
    }
    else
    {
        printf("It's not a Secondary Matrix");
    }

    return 0;
}