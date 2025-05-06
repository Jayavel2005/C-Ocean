struct Complex
    {
        float real;
        float image;
    };

    struct Complex num1, num2, sum, mul;

    printf("Enter the real part for num1: ");
    scanf("%f", &num1.real);
    printf("Enter the imaginary part for num1: ");
    scanf("%f", &num1.image);
    printf("Enter the real part for num2: ");
    scanf("%f", &num2.real);
    printf("Enter the imaginary part for num2: ");
    scanf("%f", &num2.image);
    sum.real = num1.real + num2.real;
    sum.image = num1.image + num2.image;
    printf("%.2f + %.2fi\n", sum.real, sum.image);


    mul.real = (num1.real * num2.real) - (num1.image * num2.image);
    mul.image = (num1.real * num2.image) + (num1.image * num2.real);
    printf("%.2f + %.2fi", mul.real , mul.image);
