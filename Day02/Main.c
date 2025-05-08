#include <stdio.h>
#define siUnitOfFeet 0.3048
#include <math.h>
#include <string.h>

void main()
{
    // Feat to Metre
    // float feet, meters;
    // printf("Enter the Feet: ");
    // scanf("%f", &feet);
    // meters = siUnitOfFeet * feet;
    // printf("%.2f feet = %f meters", feet, meters);

    // unsigned int integer;
    // printf("Enter the Ineteger: ");
    // scanf("%d", &integer);
    // char character = integer; // This line implicity converts the integer to character
    // printf("%c", character);

    // for (char character = 'A'; character <= 'Z'; character++)
    // {
    //     printf("%c = %d\n", character, character);
    // }

    // bmi calculation
    // formula is w/m^2
    // float weight , meter, bmi;
    // printf("Enter the weight: ");
    // scanf("%f", &weight);
    // printf("Enter the meters: ");
    // scanf("%f", &meter);
    // meter = meter / 100;
    // bmi = weight / (meter * meter);
    // printf("%.2f", bmi);

    // vote validation
    // int age;
    // printf("Enter the Age: ");
    // scanf("%d", &age);
    // printf(age >= 18 ? "Valid" : "not valid");

    // float a = 7.1;
    // if (a >= 0)
    // {
    //     printf("%d", (int)(a + 0.5));
    // }
    // else
    // {
    //     printf("%d", (int)(a - 0.5));
    // }
    // int a = 5, b = 10;
    // a = a ^ b;
    // b = b ^ a;
    // a = a ^ b;
    // printf("a = %d, b = %d", a,b);

    // int cube = 1;
    // int num = 7;
    // for (int i = 0; i < 3; i++)
    // {
    //     cube *= num;
    // }
    // printf("%d", cube);

    // float marketPrice, sellingPrice, profitOrLoss;
    // scanf("%f %f", &marketPrice, &sellingPrice);

    // if (marketPrice > sellingPrice)
    // {
    //     profitOrLoss = marketPrice - sellingPrice;
    //     printf("Loss: %.2f%%\n",(profitOrLoss / marketPrice) * 100);
    // }else if(sellingPrice > marketPrice){
    //     profitOrLoss = sellingPrice - marketPrice;
    //     printf("Profit: %.2f%%\n",(profitOrLoss / marketPrice) * 100);
    // }
    // else{
    //     printf("There is no profit and loss");
    // }

    // printf("%c", 122);

    // int pin, enteredPin, choice;
    // float balance = 1000.0, amount;

    // pin = 1234;
    // printf("Enter your PIN: ");
    // scanf("%d", &enteredPin);

    // if (enteredPin == pin)
    // {
    //     printf("\nPIN validated successfully.\n");
    //     printf("\nATM Menu:\n");
    //     printf("1. Check Balance\n");
    //     printf("2. Deposit Money\n");
    //     printf("3. Withdraw Money\n");
    //     printf("4. Exit\n");
    //     printf("Enter your choice: ");
    //     scanf("%d", &choice);

    //     switch (choice)
    //     {
    //     case 1:
    //         printf("Your account balance is: %.2f\n", balance);
    //         break;
    //     case 2:
    //         printf("Enter the amount to deposit: ");
    //         scanf("%f", &amount);
    //         if (amount > 0)
    //         {
    //             balance += amount;
    //             printf("Amount deposited successfully. New balance: %.2f\n", balance);
    //         }
    //         else
    //         {
    //             printf("Invalid amount. Please try again.\n");
    //         }
    //         break;
    //     case 3:
    //         printf("Enter the amount to withdraw: ");
    //         scanf("%f", &amount);
    //         if (amount > 0 && amount <= balance)
    //         {
    //             balance -= amount;
    //             printf("Amount withdrawn successfully. New balance: %.2f\n", balance);
    //         }
    //         else if (amount > balance)
    //         {
    //             printf("Insufficient balance.\n");
    //         }
    //         else
    //         {
    //             printf("Invalid amount. Please try again.\n");
    //         }
    //         break;
    //     case 4:
    //         printf("Thank you for using the ATM. Goodbye!\n");
    //         break;
    //     default:
    //         printf("Invalid choice. Please try again.\n");
    //     }
    // }
    // else
    // {
    //     printf("Invalid PIN. Access denied.\n");
    // }

    // int n = 7;
    // int matchs = 0;
    // while (n != 1){
    //     if (n % 2 == 0 )
    //     {
    //         matchs += (n/2);
    //         n /= 2;
    //     }
    //     else{
    //         matchs += (n - 1) / 2;
    //         n = (n - 1) / 2 + 1;
    //     }

    // }
    // printf("%d", matchs);

    // printf("%d", 4==4==1);

    // int n = 1;
    // int count = 0;
    // if(n>=0 && n<=9){
    //     count = 1;
    //     printf("%d", count);
    //     return ;
    // }
    // while (n > 0)
    // {
    //     n/=10;
    //     count++;
    // }
    // printf("%d", count);

    // int a = 56;
    // int b = 20;
    // int q;

    // int i;
    // for(i = 1;i<=5;i++){
    //     printf("%d", i);
    //     i = i + 1;

    // }
    int n , sum = 0;
        scanf("%d", &n);
        for(int i = 1; i<=n;i++){
            sum = sum + i;
            printf("Iteration %d =  Sum : %d\n",i,sum);
        }
        printf("\n%d", sum);

    int i = 0;
    while (i<= 100)
    {
        printf("%d ",i);
        i++;
    }

    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        i % 2 == 0 ? printf("%d is Even\n", i) : printf("%d is Odd\n", i);
    }

    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        if(i % 5 == 0){
            printf("%d is Divisible by 5",i);
        }
    }

    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        printf("%d\n", i * i);
    }

    int n , fact = 1;

    scanf("%d", &n);
    if(n == 0 || n == 1){
        printf("%d", fact);
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d", fact);

    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
        
    int n, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);


    
}