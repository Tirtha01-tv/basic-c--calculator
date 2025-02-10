#include <stdio.h>
// Declaration of Functions
void Addition();
void Subtraction();
void Multiplication();
void Division();
void Modulus();
void SumofDigits();
void MultiplicationofDigits();
void Percentage();
void MatrixAddition();
void MatrixMultiplication();


int main() {
    char menu = 'n';
    do {               
        printf("Enter the code of the function you want to perform: \n");
        printf("Addition of two numbers : a\n");
        printf("Subtraction of two numbers : b\n");
        printf("Multiplication of two numbers : c\n");
        printf("Division of two numbers : d\n");
        printf("Modulus of two numbers : e\n");
        printf("Sum of digits of a number : f\n");
        printf("Multiplication of digits of a number : g\n");
        printf("Percentage calculator of first semester : h\n");
        printf("Matrix addition : i\n");
        printf("Matrix multiplication : j\n");
       
        char choice;
        scanf(" %c", &choice);
        switch (choice) {
            case 'a': Addition(); break;
            case 'b': Subtraction(); break;
            case 'c': Multiplication(); break;
            case 'd': Division(); break;
            case 'e': Modulus(); break;
            case 'f': SumofDigits(); break;
            case 'g': MultiplicationofDigits(); break;
            case 'h': Percentage(); break;
            case 'i': MatrixAddition(); break;
            case 'j': MatrixMultiplication(); break;
            
            default: printf("Invalid choice\n");
        }
        printf("\nPress 'y' to display the menu again or any other key to exit the program: ");
        scanf(" %c", &menu);
    } 
    while (menu == 'y');
    printf("thank you for using\n");
}

//Defining Functions
void Addition() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Addition of two numbers is %d\n", a + b);
}

void Subtraction() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Subtraction of two numbers is %d\n", a - b);
}

void Multiplication() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Multiplication of two numbers is %d\n", a * b);
}

void Division() {
    int a, b;
    printf("Enter the dividend: ");
    scanf("%d", &a);
    printf("Enter the divisor: ");
    scanf("%d", &b);
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return;
    }
    printf("Division of two numbers is %d\n", a / b);
}

void Modulus() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if (b == 0) {
        printf("Modulus by zero is not allowed.\n");
        return;
    }
    printf("Modulus of two numbers is %d\n", a % b);
}

void SumofDigits() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of the digits is %d\n", sum);
}

void MultiplicationofDigits() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }
    printf("Multiplication of the digits is %d\n", product);
}

void Percentage() {
    int subjects, total = 0, marks;
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);
    for (int i = 0; i < subjects; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks);
        total += marks;
    }
    float percentage = (float)total / subjects;
    printf("Your percentage is %f \n", percentage);
}

void MatrixAddition() {
    int m, n;
    printf("\nEnter the number of rows in your matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in your matrix: ");
    scanf("%d", &n);
    printf("\n");
     if (m <= 0 || n <= 0) {
        printf("\nMatrix dimensions must be positive integers.\n");
        return;
    }
    int matrix1[m][n], matrix2[m][n];
   
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Enter the value at (%d, %d) position of the first matrix: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        } 
    }
    printf("\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Enter the value at (%d, %d) position of the second matrix: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }    
    printf("\nSum of the matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}

void MatrixMultiplication() {
    int m, n, p;
    printf("\nEnter the number of rows in your First matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in your First matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns in your Second matrix: ");
    scanf("%d", &p);

    if (m <= 0 || n <= 0 || p <= 0) {
        printf("\nMatrix dimensions must be positive integers.\n");
        return;
    }

    int matrix1[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the value at (%d, %d) position of the first matrix: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n");
    int matrix2[n][p];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("Enter the value at (%d, %d) position of the second matrix: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    int result[m][p];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nMultiplication of your Matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf(" %d", result[i][j]);
        }
        printf("\n");
    }
}


