#include <stdio.h>

int main()
{
    /*
        Taking rows and columns size from user.

        Example:

        rows = 3
        cols = 4

        Means:

        3 rows
        4 columns

        Total elements:
        rows × cols
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    /*
        Creating a 2D array dynamically.

        a[rows][cols]

        First index:
            row

        Second index:
            column
    */
    int a[rows][cols];

    /*
        Taking input for the complete 2D array.

        i controls row.
        j controls column.

        Movement:

        a[0][0] a[0][1] a[0][2] ...
        a[1][0] a[1][1] a[1][2] ...
        a[2][0] a[2][1] a[2][2] ...

    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        Accessing a specific row.

        Example:

        r = 2

        Means:

        I want the 3rd row.


        In a row:

        Row index stays fixed.
        Column index changes.


        Example:

        a[2][0]
        a[2][1]
        a[2][2]
        a[2][3]


        So we run the loop based on columns.
    */
    int r;
    scanf("%d", &r);

    for (int i = 0; i < cols; i++)
    {
        printf("%d ", a[r][i]);
    }

    printf("\n");

    /*
        Accessing a specific column.

        Example:

        c = 1

        Means:

        I want the 2nd column.


        In a column:

        Column index stays fixed.
        Row index changes.


        Example:

        a[0][1]
        a[1][1]
        a[2][1]


        So we run the loop based on rows.
    */
    int c;
    scanf("%d", &c);

    for (int i = 0; i < rows; i++)
    {
        printf("%d\n", a[i][c]);
    }

    return 0;
}