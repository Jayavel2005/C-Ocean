// // // // // // #include <stdio.h>

// // // // // // void depositAmount(int *balance, int amount)
// // // // // // {
// // // // // //     if (amount < 0)
// // // // // //     {
// // // // // //         printf("\nAmount cannot be Null! Please try again....\n");
// // // // // //         return;
// // // // // //     }
// // // // // //     *balance += amount;
// // // // // //     printf("\nYour money deposited successfully....\n");
// // // // // // }

// // // // // // void withdrawAmount(int *balance, int amount)
// // // // // // {
// // // // // //     if (amount < 0)
// // // // // //     {
// // // // // //         printf("\nWithdraw Amount cannot be null!, Please try again....\n");
// // // // // //         return;
// // // // // //     }
// // // // // //     else if (amount > *balance)
// // // // // //     {
// // // // // //         printf("\nInsufficient Balance ....\n");
// // // // // //         return;
// // // // // //     }
// // // // // //     *balance -= amount;
// // // // // //     printf("\n Money withdrawn succesfully.....\n");
// // // // // // }

// // // // // // void displayBalance(int balance)
// // // // // // {
// // // // // //     printf("\nYour Current Account Balance : %d\n", balance);
// // // // // // }

// // // // // // int main()
// // // // // // {
// // // // // //     int balance = 50;
// // // // // //     int isAtm = 1;

// // // // // //     while (isAtm)
// // // // // //     {
// // // // // //         int choice;
// // // // // //         printf("\n*************************** WELCOME *******************************\n");
// // // // // //         printf("\n1.Deposit\n2.Withdraw\n3.Check Bank Balance\n4.Exit\nEnter your choice: ");

// // // // // //         scanf("%d", &choice);

// // // // // //         if (choice == 1)
// // // // // //         {
// // // // // //             int amount;
// // // // // //             printf("Enter the Deposit Amount: ");
// // // // // //             scanf("%d", &amount);
// // // // // //             depositAmount(&balance, amount);
// // // // // //             displayBalance(balance);
// // // // // //         }
// // // // // //         else if (choice == 2)
// // // // // //         {
// // // // // //             int amount;
// // // // // //             printf("Enter the Withdraw Amount: ");
// // // // // //             scanf("%d", &amount);
// // // // // //             withdrawAmount(&balance, amount);
// // // // // //             displayBalance(balance);
// // // // // //         }
// // // // // //         else if (choice == 3)
// // // // // //         {
// // // // // //             displayBalance(balance);
// // // // // //         }
// // // // // //         else if (choice == 4)
// // // // // //         {
// // // // // //             printf("Thank you for using our ATM service. Have a great day!\n");
// // // // // //             isAtm = 0;
// // // // // //         }
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // // // #include <stdio.h>
// // // // // // // float rectangleArea(float l, float b);
// // // // // // // float rectanglePerimeter(float l, float b);
// // // // // // // float squareArea(float s);
// // // // // // // float squarePerimeter(float s);
// // // // // // // float circleArea(float r);
// // // // // // // float circlePerimeter(float r);
// // // // // // // float triangleArea(float b, float h);
// // // // // // // float trianglePerimeter(float a, float b, float c);

// // // // // // // void main()
// // // // // // // {
// // // // // // //     float length, breadth, side, radius, base, height, area, perimeter;
// // // // // // //     int choice;

// // // // // // //     // Function declarations

// // // // // // //     printf("Choose a shape:\n");
// // // // // // //     printf("1. Rectangle\n2. Square\n3. Circle\n4. Triangle\n");
// // // // // // //     printf("Enter your choice: ");
// // // // // // //     scanf("%d", &choice);

// // // // // // //     switch (choice)
// // // // // // //     {
// // // // // // //     case 1:
// // // // // // //         printf("Enter length and breadth of rectangle: ");
// // // // // // //         scanf("%f %f", &length, &breadth);
// // // // // // //         area = rectangleArea(length, breadth);
// // // // // // //         perimeter = rectanglePerimeter(length, breadth);
// // // // // // //         printf("Rectangle Area: %.2f\n", area);
// // // // // // //         printf("Rectangle Perimeter: %.2f\n", perimeter);
// // // // // // //         break;
// // // // // // //     case 2:
// // // // // // //         printf("Enter side of square: ");
// // // // // // //         scanf("%f", &side);
// // // // // // //         area = squareArea(side);
// // // // // // //         perimeter = squarePerimeter(side);
// // // // // // //         printf("Square Area: %.2f\n", area);
// // // // // // //         printf("Square Perimeter: %.2f\n", perimeter);
// // // // // // //         break;
// // // // // // //     case 3:
// // // // // // //         printf("Enter radius of circle: ");
// // // // // // //         scanf("%f", &radius);
// // // // // // //         area = circleArea(radius);
// // // // // // //         perimeter = circlePerimeter(radius);
// // // // // // //         printf("Circle Area: %.2f\n", area);
// // // // // // //         printf("Circle Perimeter (Circumference): %.2f\n", perimeter);
// // // // // // //         break;
// // // // // // //     case 4:
// // // // // // //     {
// // // // // // //         float side2, side3;
// // // // // // //         printf("Enter base and height of triangle: ");
// // // // // // //         scanf("%f %f", &base, &height);
// // // // // // //         area = triangleArea(base, height);
// // // // // // //         printf("Triangle Area: %.2f\n", area);
// // // // // // //         printf("Enter the lengths of the other two sides: ");
// // // // // // //         scanf("%f %f", &side2, &side3);
// // // // // // //         perimeter = trianglePerimeter(base, side2, side3);
// // // // // // //         printf("Triangle Perimeter: %.2f\n", perimeter);
// // // // // // //         break;
// // // // // // //     }
// // // // // // //     default:
// // // // // // //         printf("Invalid choice.\n");
// // // // // // //     }
// // // // // // // }

// // // // // // // // Function definitions
// // // // // // // float rectangleArea(float l, float b)
// // // // // // // {
// // // // // // //     return l * b;
// // // // // // // }
// // // // // // // float rectanglePerimeter(float l, float b)
// // // // // // // {
// // // // // // //     return 2 * (l + b);
// // // // // // // }
// // // // // // // float squareArea(float s)
// // // // // // // {
// // // // // // //     return s * s;
// // // // // // // }
// // // // // // // float squarePerimeter(float s)
// // // // // // // {
// // // // // // //     return 4 * s;
// // // // // // // }
// // // // // // // float circleArea(float r)
// // // // // // // {
// // // // // // //     return 3.14159f * r * r;
// // // // // // // }
// // // // // // // float circlePerimeter(float r)
// // // // // // // {
// // // // // // //     return 2 * 3.14159f * r;
// // // // // // // }
// // // // // // // float triangleArea(float b, float h)
// // // // // // // {
// // // // // // //     return 0.5f * b * h;
// // // // // // // }
// // // // // // // float trianglePerimeter(float a, float b, float c)
// // // // // // // {
// // // // // // //     return a + b + c;
// // // // // // // }

// // // // // // #include <stdio.h>

// // // // // // void main(){
// // // // // //     int n;
// // // // // //     scanf("%d", &n);
// // // // // //     int arr[n];

// // // // // //     for(int i = 0; i < n; i++){
// // // // // //         scanf("%d", &arr[i]);
// // // // // //     }

// // // // // //     for(int i = 0; i < n - 1; i++){
// // // // // //         for(int j = 0; j < n - i - 1; j++){
// // // // // //             if(arr[j] < arr[j + 1]){
// // // // // //                 int temp = arr[j];
// // // // // //                 arr[j] = arr[j + 1];
// // // // // //                 arr[j + 1] = temp;
// // // // // //             }
// // // // // //         }
// // // // // //     }

// // // // // //     int k ;
// // // // // //     scanf("%d", &k);
// // // // // //     printf("%d", arr[k-1]);
// // // // // //     printf("\n");
// // // // // // }

// // // // // #include <stdio.h>

// // // // // void main()
// // // // // {
// // // // //     float arr[5] = {1.2, 2.2, 3.3, 4.4, 5.5};
// // // // //     int size = sizeof(arr) / sizeof(arr[0]);
// // // // //     for (int i = 0; i < size; i++)
// // // // //         printf("%.2f ", arr[i]);

// // // // //     arr[1] = 10.5;
// // // // //     arr[3] = 0.00;
// // // // //     printf("\n");
// // // // //     for (int i = 0; i < size; i++)
// // // // //         printf("%.2f ", arr[i]);

// // // // //     int a[5] = {1, 2, 3, 4, 5};
// // // // //     int b[5];
// // // // //     for (int i = 0; i < 5; i++)
// // // // //     {
// // // // //         b[i] = a[i];
// // // // //     }
// // // // //     // Max element
// // // // //     int max = a[0];
// // // // //     for (int i = 0; i < 5; i++)
// // // // //     {
// // // // //         if (a[i] > max)
// // // // //         {
// // // // //             max = a[i];
// // // // //         }
// // // // //     }
// // // // //     // Min element
// // // // //     int min = a[0];
// // // // //     for (int i = 0; i < 5; i++)
// // // // //     {
// // // // //         if (a[i] < max)
// // // // //         {
// // // // //             min = a[i];
// // // // //         }
// // // // //     }

// // // // //     int search = 3;
// // // // //     int index = -1;
// // // // //     for (int i = 0; i < 5; i++)
// // // // //     {
// // // // //         if (search == a[i])
// // // // //         {
// // // // //             index = i;
// // // // //             break;
// // // // //         }
// // // // //     }
// // // // //     printf("The element %d at index %d", search, index);

// // // // //     int start = 0;
// // // // //     int end = (sizeof(a) / sizeof(a[0])) - 1;
// // // // //     while (start < end)
// // // // //     {
// // // // //         int temp = a[end];
// // // // //         a[end] = a[start];
// // // // //         a[start] = temp;
// // // // //         start++;
// // // // //         end--;
// // // // //     }
// // // // //     printf("\n");
// // // // //     for (int i = 0; i < 5; i++)
// // // // //     {
// // // // //         printf("%d ", a[i]);
// // // // //     }

// // // // //     int sum = 0;
// // // // //     for (int i = 0; i < 5; i++)
// // // // //     {
// // // // //         sum += a[i];
// // // // //     }
// // // // //     printf("%d\n", sum);
// // // // //     printf("%.2f\n", (float)sum / 5);

// // // // // }
// // // // #include <stdio.h>

// // // // void main(){
// // // //     int n;
// // // //     scanf("%d", &n);
// // // //     int arr[n];

// // // //     for(int i = 0; i < n; i++){
// // // //         scanf("%d", &arr[i]);
// // // //     }

// // // //     for(int i = 0; i < n - 1; i++){
// // // //         for(int j = 0; j < n - i - 1; j++){
// // // //             if(arr[j] < arr[j + 1]){
// // // //                 int temp = arr[j];
// // // //                 arr[j] = arr[j + 1];
// // // //                 arr[j + 1] = temp;
// // // //             }
// // // //         }
// // // //     }

// // // //     int k ;
// // // //     scanf("%d", &k);
// // // //     printf("%d", arr[k-1]);
// // // //     printf("\n");

// // // // }

// // // // #include <stdio.h>

// // // // void main()
// // // // {
// // //     // int arr[] = {3, 1, 2};
// // //     // int first = -1, second = -1;
// // //     // for (int i = 0; i < 3; i++)
// // //     // {
// // //     //     if (arr[i] > first)
// // //     //     {
// // //     //         second = first;
// // //     //         first = arr[i];
// // //     //     }
// // //     //     else if (arr[i] > second && second != first)
// // //     //     {
// // //     //         second = arr[i];
// // //     //     }
// // //     // }
// // //     // printf("%d", second);

// // //     // int arr[] = {1,0,3,4,5};
// // //     // int sum = 0;
// // //     // int n = sizeof(arr) / sizeof(arr[0]);

// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     sum += arr[i];
// // //     // }

// // //     // printf("%d", ((n*(n+1)) / 2) - sum);

// // //     // int arr[2][3] = {{1,2,3}, {4,5,6}};

// // //     // for (int i = 0; i < 2;i++)
// // //     // {
// // //     //      int max = arr[i][0];
// // //     //      for (int j = 0; j < 3; j++)
// // //     //      {
// // //     //         if(arr[i][j] > max){
// // //     //             max  = arr[i][j];
// // //     //         }
// // //     //      }
// // //     //      printf("Max in %d : %d\n",i, max);

// // //     // }

// // //     // int arr[2][3] = {{1,2,3}, {4,5,6}};

// // //     // for (int i = 0; i < 2;i++)
// // //     // {
// // //     //      int min = arr[i][0];
// // //     //      for (int j = 0; j < 3; j++)
// // //     //      {
// // //     //         if(arr[i][j] < min){
// // //     //             min  = arr[i][j];
// // //     //         }
// // //     //      }
// // //     //      printf("Min in %d : %d\n",i, min);

// // //     // }

// // //     // int arr[] = {1,2,4,3};
// // //     // int left = 0;
// // //     // int right = sizeof(arr) / sizeof(arr[0]);
// // //     // while (left < right)
// // //     // {
// // //     //     int mid = (left + right) / 2;
// // //     //     if(arr[mid] > arr[mid + 1]){
// // //     //         right = mid;
// // //     //     }else{
// // //     //         left = mid + 1;
// // //     //     }
// // //     // }

// // //     // printf("%d", left);

// // // // }
// // // // #include <stdio.h>

// // // // int findPeak(int arr[], int n) {
// // // //     int left = 0, right = n - 1;

// // // //     while (left < right) {
// // // //         int mid = (left + right) / 2;

// // // //         // Check the slope
// // // //         if (arr[mid] > arr[mid + 1]) {
// // // //             // Peak is on the left side (including mid)
// // // //             right = mid;
// // // //         } else {
// // // //             // Peak is on the right side
// // // //             left = mid + 1;
// // // //         }
// // // //     }

// // // //     return left;  // or return right; both are same
// // // // }

// // // // int main() {
// // // //     int arr[] = {1, 3, 8, 12, 4, 2};
// // // //     int n = sizeof(arr) / sizeof(arr[0]);

// // // //     int peakIndex = findPeak(arr, n);
// // // //     printf("Peak element is at index %d and value is %d\n", peakIndex, arr[peakIndex]);

// // // //     return 0;
// // // // }

// // // #include <stdio.h>
// // // void main(){
// // //     // printf("%s", "Jayavel");

// // //     char c[50];

// // //     scanf("%[^\n]", c);
// // //     // int len = 0;
// // //     // for (int i = 0; c[i] != '\0'; i++)
// // //     // {
// // //     //     len++;
// // //     // }
// // //     // printf("%d", len);

// // //     int len = 0;
// // //     while (c[len] != '\0') {
// // //         len++;
// // //     }

// // //     // char rev[50];

// // //     int start = 0;
// // //     int end = len - 1;

// // //     while (start < end)
// // //     {
// // //         char temp = c[end];
// // //         c[end] = c[start];
// // //         c[start] = temp;
// // //         start++;
// // //         end--;
// // //     }
// // //     printf("%s", c);

// // //     // int pal = 1;
// // //     // while (start < end)
// // //     // {
// // //     //     if (c[start] != c[end])
// // //     //     {
// // //     //        pal = 0;
// // //     //        break;
// // //     //     }

// // //     //     start++;
// // //     //     end--;

// // //     // }
// // //     // if (pal)
// // //     // {
// // //     //    printf("%s","Palindrome");
// // //     // }else{
// // //     //     printf("%s","Not palindrome");
// // //     // }

// // // }
// // // #include <stdio.h>
// // // #include <string.h>
// // // void main(){
// // //     char c[40] = "Jayavel";
// // //     char th[40];

// // //     strcpy(th,c);
// // //     // printf("%s", th);

// // //     strcat(c,"Dev");
// // //     printf("%s", c);

// // //     char c1[]= "Jayavel";
// // //     printf("\ncls%d", strcmp(c, c1));

// // // }
// // #include <stdio.h>
// // void main()
// // {
// //     // char str[100];
// //     // printf("Enter a string: ");
// //     // scanf(" %[^\n]", str);

// //     // int count = 0;
// //     // for (int i = 0; str[i] != '\0'; i++) {
// //     //     char ch = str[i];
// //     //     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
// //     //         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
// //     //         count++;
// //     //     }
// //     // }
// //     // printf("Number of vowels: %d\n", count);

// //     // int consonants = 0;
// //     // for (int i = 0; str[i] != '\0'; i++) {
// //     //     char ch = str[i];
// //     //     if (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) &&
// //     //         !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
// //     //           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
// //     //         consonants++;
// //     //     }
// //     // }
// //     // printf("Number of consonants: %d\n", consonants);

// //     // int special = 0;
// //     // for (int i = 0; str[i] != '\0'; i++) {
// //     //     char ch = str[i];
// //     //     if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
// //     //         if (!(ch >= '0' && ch <= '9') && ch != ' ') {
// //     //             special++;
// //     //         }
// //     //     }
// //     // }
// //     // printf("Number of special characters: %d\n", special);

// //     // int digits = 0;
// //     // for (int i = 0; str[i] != '\0'; i++) {
// //     //     char ch = str[i];
// //     //     if (ch >= '0' && ch <= '9') {
// //     //         digits++;
// //     //     }
// //     // }
// //     // printf("Number of digits: %d\n", digits);

// //     // int len = 0;
// //     // while (str[len] != '\0') {
// //     //     len++;
// //     // }
// //     // int isPalindrome = 1;
// //     // int start = 0, end = len - 1;
// //     // while (start < end) {
// //     //     if (str[start] != str[end]) {
// //     //         isPalindrome = 0;
// //     //         break;
// //     //     }
// //     //     start++;
// //     //     end--;
// //     // }
// //     // if (isPalindrome) {
// //     //     printf("The string is a palindrome.\n");
// //     // } else {
// //     //     printf("The string is not a palindrome.\n");
// //     // }

// //     // for (int i = 0; i < len / 2; i++) {
// //     //     char temp = str[i];
// //     //     str[i] = str[len - i - 1];
// //     //     str[len - i - 1] = temp;
// //     // }
// //     // // printf("Reversed string: %s\n", str);

// //     // char character;
// //     // scanf("%c", &character);

// //     // if (character >= 'A' && character <='Z')
// //     // {
// //     //     character += 32;
// //     // }
// //     // printf("%c", character);

// //     // if (character >= 'a' && character <= 'z')
// //     // {
// //     //     character -= 32;
// //     // }
// //     // printf("%c", character);

// //     char str[100];
// //     printf("\nEnter a string (with spaces): ");

// //     // getchar();

// //     fgets(str, sizeof(str), stdin);
// //     printf("You entered: %s", str);

// //     puts(str);

// //     int freq[256] = {0};
// //     for (int i = 0; str[i] != '\0'; i++) {
// //         unsigned char ch = str[i];
// //         if (ch != '\n') {
// //             freq[ch]++;
// //         }
// //     }
// //     printf("Character frequencies:\n");
// //     for (int i = 0; i < 256; i++) {
// //         if (freq[i] > 0) {
// //             printf("'%c' : %d\n", i, freq[i]);
// //         }
// //     }
// // }

// #include <stdio.h>

// void main(){
//     char str1[100], str2[100], temp;
//     printf("Enter first string: ");
//     fgets(str1, sizeof(str1), stdin);
//     printf("Enter second string: ");
//     fgets(str2, sizeof(str2), stdin);

//     for (int i = 0; str1[i] != '\0'; i++) {
//         if (str1[i] == '\n') str1[i] = '\0';
//     }
//     for (int i = 0; str2[i] != '\0'; i++) {
//         if (str2[i] == '\n') str2[i] = '\0';
//     }

//     int i = 0;
//     for (; str1[i] != '\0' || str2[i] != '\0'; i++) {
//         temp = str1[i];
//         str1[i] = str2[i];
//         str2[i] = temp;
//     }
//     temp = str1[i];
//     str1[i] = str2[i];
//     str2[i] = temp;

//     printf("After swapping:\n");
//     printf("First string: %s\n", str1);
//     printf("Second string: %s\n", str2);


//     int freq1[256] = {0}, freq2[256] = {0};
//     for (int i = 0; str1[i] != '\0'; i++) {
//         freq1[(unsigned char)str1[i]]++;
//     }
//     for (int i = 0; str2[i] != '\0'; i++) {
//         freq2[(unsigned char)str2[i]]++;
//     }
//     int isAnagram = 1;
//     for (int i = 0; i < 256; i++) {
//         if (freq1[i] != freq2[i]) {
//             isAnagram = 0;
//             break;
//         }
//     }
//     if (isAnagram)
//         printf("The strings are anagrams.\n");
//     else
//         printf("The strings are not anagrams.\n");
// }

#include <stdio.h>

void main(){
    int a = 10;
    int *p;
    p = &a;
    *p = 20;
    printf("%d", *p);

    printf("%d", a);

    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    printf("Before swap: a = %d, b = %d\n", a, b);

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
}