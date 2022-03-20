#include <stdio.h>

int main()
{
    int n_students = 3;
    int n_subjects = 5;
    int arr[3][5];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {   
            printf("\nSourabh");
            printf("\nMarks of student %d in subject %d = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

        for (int i = 0; i < n_students; i++)
        {
            for (int j = 0; j < n_subjects; j++)
            {
                printf("\nMarks of student %d in subject %d = %d", i + 1, j + 1, arr[i][j]);
            }
        }
        return 0;
    }
