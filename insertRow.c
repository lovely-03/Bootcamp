#include<stdio.h>
void main()
{
    int a[10][10];
    int rows, cols;
    int type, index, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter choice (1 Insert, 2 Delete): ");
    scanf("%d", &choice);

    printf("Enter type (0 Row, 1 Column): ");
    scanf("%d", &type);

    printf("Enter index: ");
    scanf("%d", &index);

    if (choice == 1) {
        if (type == 0) {
            for (int i = rows; i > index; i--) {
                for (int j = 0; j < cols; j++) {
                    a[i][j] = a[i - 1][j];
                }
            }

            printf("Enter row elements:\n");
            for (int j = 0; j < cols; j++) {
                scanf("%d", &a[index][j]);
            }

            rows++;
        }

        else {
            for (int i = 0; i < rows; i++) {
                for (int j = cols; j > index; j--) {
                    a[i][j] = a[i][j - 1];
                }
            }

            printf("Enter column elements:\n");
            for (int i = 0; i < rows; i++) {
                scanf("%d", &a[i][index]);
            }

            cols++;
        }
    }

    else {

        if (type == 0) {
            for (int i = index; i < rows - 1; i++) {
                for (int j = 0; j < cols; j++) {
                    a[i][j] = a[i + 1][j];
                }
            }
            rows--;
        }

        else {
            for (int i = 0; i < rows; i++) {
                for (int j = index; j < cols - 1; j++) {
                    a[i][j] = a[i][j + 1];
                }
            }
            cols--;
        }
    }

    printf("Updated matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}



