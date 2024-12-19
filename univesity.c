
#include <stdio.h>
float result = divide(10, 3);
    printf("Division result: %.2f\n", result);

int globalVar = 10;  // Global variable
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);

// Function to print all elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to print a 2D array
void printMatrix(int matrix[2][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void append(int array[] , int size, int element);
void prettyPrint(int array[], int size);

}
int main() {
    printf("Hello, World!\n");


    int x = 10, y = 3;
    int sum = x + y;
    int mod = x % y;
    printf("Sum: %d, Mod: %d\n", sum, mod);


    int result = (5 + 3) * 2;  // evaluates to 16

    int age = 20;

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

     for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }

     int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);


    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    // Function declaration
    int multiply(int x, int y);
    int main() {
    int result = multiply(5, 3);
    printf("Result: %d\n", result);

}
    // Function definition
    int multiply(int x, int y) {
    return x * y;
    float divide(int a, int b) {
    return (float)a / b;
}
    int localVar = 5;  // Local variable
    printf("Global: %d, Local: %d\n", globalVar, localVar);
    
        int result = factorial(5);
    printf("Factorial: %d\n", result);


    type arrayName[size];

    int numbers[5];  // Declares an array of 5 integers
    int numbers[5] = {1, 2, 3, 4, 5};  // Array initialized with values
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);

        int numbers[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }
    type arrayName[rows][columns];
    int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("Element at [0][1]: %d\n", matrix[0][1]);  // Access second element in the first row
    printf("Element at [1][2]: %d\n", matrix[1][2]);  // Access third element in the second row

    int numbers[5] = {10, 20, 30, 40, 50};
    printArray(numbers, 5);  // Passing array to function

        int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("Element at [0][1]: %d\n", matrix[0][1]);  // Access second element in the first row
    printf("Element at [1][2]: %d\n", matrix[1][2]);  // Access third element in the second row

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printMatrix(matrix, 2, 3);

        int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    
    printf("Sum: %d\n", sum);

        int numbers[5] = {10, 20, 5, 30, 15};
    int max = numbers[0];  // Assume the first element is the maximum
    
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    printf("Maximum element: %d\n", max);

    int myArray[10];

    myArray[5] = 5;
    for (int i=0; i<10; i++){
        printf("%d\n", myArray[i]);
    }

    int multiArray[3][4];
    for(int i = 0; i<3; i++){
        printf("%d\n" , multiArray[i][0]);
    }

    int matrix[3][3]=
    {{1,2,3},
    {4,5,6},
    {7,8,9}}:
    for (int i = 0; i<3; i++){
        for(int j = 0; j<3, j++;){
            if(j != 2)
            printf("%d, ", matrix[i][j]);
            else
            printf("%d ", );

            printf("%d, " , matrix[i][j]);
        
        }
        printf("\n");
    }




    return 0;
    }
}

void append(int array[], int size, int element){
for(int i = 0; i<size; i++){
    if (array[i]==0){
        array[i]=element;
        break;
    }
}

}
void prettyPrint(int array[], int size){
for(int i=0; i<size;i++){
    printf("%d" , array[1]);

}
printf("\n");
}
void perfectSquatres(int start, int end) {
    for(int i = 0; i<end;i++){
        if(i*i>start && i*i<end){
            printf("%d\n" , i*i);
        }
    }
}