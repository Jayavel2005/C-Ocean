#include <stdio.h>
#include <math.h>
#define PI 3.14

void main()
{
    // 1.Product of Two Numbers
    // float number1, number2, product;
    // printf("Enter the value of number1: ");
    // scanf("%f", &number1);
    // printf("Enter the value of number2: ");
    // scanf("%f", &number2);
    // product = number1 * number2;
    // printf("The product of %.2f and %.2f isL %.2f", number1, number2, product);

    // Find Employee salary
    // float basic, hra, da, totalSalary;
    // printf("Enter the basic salary: ");
    // scanf("%f", &basic);
    // hra = 0.2 * basic;
    // da = 0.05 * basic;
    // totalSalary = basic + hra + da;
    // printf("The Basic Salary is : %.2f\nThe Hra is : %.2f\nThe Da is : %.2f\nTotal Salary is : %.2f\n", basic, hra, da, totalSalary);

    // float float hrr = (20/100);  // This performs integer division, resulting in 0 instead of 0.2
    //  printf("HRA is : %.2f\n", hrr);

    // 3.Area of the circle , rectangle, squre, and also perimeter of rectangle and square, circle

    // Area of Circle
    // float radius, area, perimeter;
    // printf("Enter the radius: ");
    // scanf("%f", &radius);
    // area = PI * radius * radius;
    // perimeter = 2 * PI * radius;
    // printf("The area of the circle is: %.2f\n", area);
    // printf("Perimeter of the Circle: %.2f\n", perimeter);

    // // Area of square
    // float side, squareArea;
    // printf("Enter the value: ");
    // scanf("%f", &side);
    // squareArea = side * side;
    // printf("Area of the square is : %.2f\n", squareArea);

    // // Area of rectangle
    // float length, breadth, rectangleArea;
    // printf("Enter the length: ");
    // scanf("%f", &length);
    // printf("Enter the breadth: ");
    // scanf("%f", &breadth);
    // rectangleArea = length * breadth;
    // printf("Area of the Rectangle is : %.2f\n", rectangleArea);

    // // Area of Triangle
    // float height, width, areaTriangle;
    // printf("Enter the height: ");
    // scanf("%f", &height);
    // printf("Enter the width: ");
    // scanf("%f", &width);
    // areaTriangle = 0.5 * height * width;
    // printf("Area of the Triangle: %.2f", areaTriangle);

    // int hour, minutes, totalMinutes;
    // printf("Enter the hour: ");
    // scanf("%d", &hour);
    // printf("Enter the minutes: ");
    // scanf("%d", &minutes);
    // totalMinutes = (hour * 60) + minutes;
    // printf("%d hour %d minutes =  %d minutes ", hour, minutes, totalMinutes);

    // 2.Swap without temp
    // int a, b;
    // printf("Enter the value of a: ");
    // scanf("%d", &a);
    // printf("Enter the value of b: ");
    // scanf("%d", &b);

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // printf("After swapping, a = %d and b = %d\n", a, b);

    // 3. Convert Fahrenheit to Celsius
    //  float fahrenheit, celsius;
    //  printf("Enter temperature in Fahrenheit: ");
    //  scanf("%f", &fahrenheit);
    //  celsius = (fahrenheit - 32) * 5 / 9;
    //  printf("Temperature in Celsius: %.2f\n", celsius);

    // 5.print user information
    // char name[50], address[100];
    // int age;
    // printf("Enter your name: ");
    // scanf(" %[^\n]", name); // To read a string with spaces
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("Enter your address: ");
    // scanf(" %[^\n]", address); // To read a string with spaces
    // printf("User Information:\n");
    // printf("Name: %s\n", name);
    // printf("Age: %d\n", age);
    // printf("Address: %s\n", address);

    // 4.Complex Number Addition
    // struct Complex
    // {
    //     float real;
    //     float image;
    // };

    // struct Complex num1, num2, sum, mul;

    // printf("Enter the real part for num1: ");
    // scanf("%f", &num1.real);
    // printf("Enter the imaginary part for num1: ");
    // scanf("%f", &num1.image);
    // printf("Enter the real part for num2: ");
    // scanf("%f", &num2.real);
    // printf("Enter the imaginary part for num2: ");
    // scanf("%f", &num2.image);
    // sum.real = num1.real + num2.real;
    // sum.image = num1.image + num2.image;
    // printf("%.2f + %.2fi\n", sum.real, sum.image);

    // mul.real = (num1.real * num2.real) - (num1.image * num2.image);
    // mul.image = (num1.real * num2.image) + (num1.image * num2.real);
    // printf("%.2f + %.2fi", mul.real , mul.image);

    int n1 = 5, n2 = 3, n3 = 9;
    if (n1 > n2 && n1 > n3)
    {
        printf("%d", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d", n2);
    }else{
        printf("%d",n3);
    }
}