// // // //

// // // // #include <stdio.h>
// // // // void main()
// // // // {
// // // // int arr[] = {1,2,5,4};
// // // // int *pointer = arr;
// // // // int *max = &arr[0];
// // // // for (int i = 1; i < 4; i++)
// // // // {
// // // //     if (*(pointer + i) > *max)
// // // //     {
// // // //         *max = *(pointer + i) ;
// // // //     }

// // // // }
// // // // printf("%d", *max);

// // // // int arr[] = {1,2,5,4};
// // // // int *pointer = arr;
// // // // int *min = &arr[0];
// // // // for (int i = 1; i < 4; i++)
// // // // {
// // // //     if (*(pointer + i) < *min)
// // // //     {
// // // //         *min = *(pointer + i) ;
// // // //     }

// // // // }
// // // // printf("%d", *min);

// // // // int n;
// // // // scanf("%d", &n);
// // // // int *pointer = &n;

// // // // if(*pointer % 2 == 0){
// // // //     printf("Even");
// // // // }else{
// // // //     printf("Odd");
// // // // }
// // // // }

// // // // #include <stdio.h>

// // // // int main() {
// // // //     int arr[] = {5, 4, 5, 1};
// // // //     int *pointer = arr;

// // // //     for (int i = 0; i < 5; i++) {
// // // //         for (int j = 0; j < 5 - i; j++) {
// // // //             if (*(pointer + j) > *(pointer + j + 1)) {
// // // //                 int temp = *(pointer + j);
// // // //                 *(pointer + j) = *(pointer + j + 1);
// // // //                 *(pointer + j + 1) = temp;
// // // //             }
// // // //         }
// // // //     }

// // // //     for (int i = 0; i < 4; i++) {
// // // //         printf("%d ", *(pointer + i));
// // // //     }

// // // //     return 0;
// // // // }

// // // #include <stdio.h>

// // // void main()
// // // {
// // //     // int n = 5;
// // //     // int arr[5];

// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     scanf("%d", arr + i);
// // //     // }
// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     printf("%d", *(arr + i));
// // //     // }

// // //     // printf("\n");
// // //     // int sum = 0;
// // //     // for(int i = 0;i<n;i++){
// // //     //     sum += *(arr + i);
// // //     // }

// // //     // printf("\n");
// // //     // printf("%d", sum);

// // //     // for (int i = 0; i < n - 1; i++)
// // //     // {
// // //     //     for (int j = 0; j < n - i - 1; j++)
// // //     //     {
// // //     //         if (*(arr + j) > *(arr + j + 1))
// // //     //         {
// // //     //             int temp = *(arr + j);
// // //     //             *(arr + j) = *(arr + j + 1);
// // //     //             *(arr + j + 1) = temp;
// // //     //         }
// // //     //     }
// // //     // }

// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     printf("%d", *(arr + i));
// // //     // }

// // //     char string[50];
// // //     char *ptr = string;
// // //     scanf("%s", ptr);
// // //     int count = 0;
// // //     for (int i = 0; *(ptr + i) != '\0'; i++)
// // //     {
// // //         count++;
// // //     }
// // //     char string2[count + 1];
// // //     for (int i = 0; *(ptr + i) != '\0'; i++)
// // //     {
// // //         *(string2 + i) = *(ptr + i);
// // //     }
// // //     *(string2 + count) = '\0';
// // //     printf("%s", string2);

// // //     char string5[50];
// // //     char *ptr2 = string5;
// // //     scanf("%s", ptr2);

// // //     int len = 0;
// // //     while (*(string2 + len) != '\0') {
// // //         len++;
// // //     }

// // //     int j = 0;
// // //     while (*(ptr2 + j) != '\0') {
// // //         *(string2 + len + j) = *(ptr2 + j);
// // //         j++;
// // //     }
// // //     *(string2 + len + j) = '\0';

// // //     printf("\nConcatenated string: %s", string2);

// // // }

// // #include <stdio.h>
// // void main()
// // {
// //     int *ptr = NULL;

// //     if (ptr == NULL)
// //     {
// //         printf("The pointer is NULL.\n");
// //     }
// //     else
// //     {
// //         printf("The pointer is not NULL.\n");
// //     }

// //     int num = 10;
// //     float f = 5.14;
// //     char ch = 'A';

// //     void *vptr;

// //     vptr = &num;
// //     printf("Value of num using void pointer: %d\n", *(int *)vptr);

// //     vptr = &f;
// //     printf("Value of f using void pointer: %.2f\n", *(float *)vptr);

// //     vptr = &ch;
// //     printf("Value of ch using void pointer: %c\n", *(char *)vptr);

// //     int *wildPtr;

// //     wildPtr = (int *)malloc(sizeof(int));
// //     *wildPtr = 42;
// //     free(wildPtr);

// // }

// #include <stdio.h>
// struct Student
// {
//     int studentId;
//     char studentName[100];
//     char department[100];

// } student1;

// struct meters
// {
//     float feet;
//     float inch;
// } feetInch;

// #include <string.h>

// void feetToInch(float feet, float inch)
// {
//     inch += feet * 12;
//     printf("\n%f Feet = %f Inches", feet, inch);
// }

// void InchToFeet(float inch, float feet)
// {
//     feet += inch * 0.08555;
//     printf("\n%f Inches = %.2f Feet\n", inch, feet);
// }

// int main()
// {
//     // printf("Enter the Student Id:");
//     // scanf("%d", &student1.studentId);
//     // printf("Enter the Student Name: ");
//     // scanf("\n%[^\n]", student1.studentName);
//     // printf("Enter the Department: ");
//     // scanf("\n%[^\n]", student1.department);

//     // printf("\nStudent Details: ");
//     // printf("\nStudent Id: %d\nStudent Name: %s\nDepartment: %s", student1.studentId, student1.studentName, student1.department);

//     printf("Enter the feet: ");
//     scanf("%f", &feetInch.feet);
//     printf("Enter the Inch: ");
//     scanf("%f", &feetInch.inch);

//     feetToInch(feetInch.feet, feetInch.inch);
//     InchToFeet(feetInch.inch, feetInch.feet);
//     return 0;
// }

#include <stdio.h>

struct Library
{
    int bookId;
    char title[60];
    char author[50];
    float price;
};

void main()
{
    struct Library books[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Book Details: \n");

        printf("Enter the Book Id: ");
        scanf("%d", &books[i].bookId);
        getchar();
        printf("Enter the Book Title: ");
        scanf("%[^\n]", books[i].title);
        getchar();

        printf("Enter the Author Name: ");
        scanf("%[^\n]", books[i].author);
        getchar();

        printf("Enter the Price:");
        scanf("%f", &books[i].price);
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Book No: %d\n", i + 1);
        printf("\n Book Id: %d\n", books[i].bookId);
        printf("\n Book Title: %s\n", books[i].title);
        printf("\n Book author: %s\n", books[i].author);
        printf("\n Book Price: %.2f\n", books[i].price);
    }
}