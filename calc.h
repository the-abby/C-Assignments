int menu();
int areaOfTriangle(float num1, float num2);
int areaOfCircle(float num);
int areaOfRectangle(float num1, float num2);
int calc_check(int calc_ch);

int menu()
{
    int choice;
    system("cls");
    printf("=================================\n");
    printf("Choose your choice               \n");
    printf("=================================\n");
    printf("1. Area of shapes                \n");
    printf("2. Add Numbers                   \n");
    printf("3. Multiply numbers              \n");
    printf("4. Swap numbers                  \n");
    printf("0. Exit                          \n");
    printf("=================================\n");
    printf("Choose from (1-4)/5 from the list\n");
    scanf("%d", &choice);
    menu_check(choice);
}

//======================================================
// AREA PART
int menu_check(int menu_ch)
{
    switch(menu_ch)
    {
    case 1:
        system("cls");
        area();
        break;
    case 2:
        system("cls");
        add_num();
        break;
    case 3:
        system("cls");
        multiply_num();
        break;
    case 4:
        system("cls");
        swap_num();
        break;
    case 0:
        system("cls");
        //
        break;
    default :
        system("cls");
        printf("Invalid input");
        menu();
        break;
    }
}
int area()
{
    int choice;
    system("cls");
    printf("======================\n");
    printf("Area of shapes        \n");
    printf("======================\n");
    printf("1. Area of triangle   \n");
    printf("2. Area of circle     \n");
    printf("3. Area of rectangle  \n");
    printf("4. Quadratic Equation \n");
    printf("5. <<Back             \n");
    printf("0. <<Exit             \n");
    printf("======================\n");
    scanf("%d", &choice);
    area_check(choice);

}

int area_check(int area_ch)
{
    switch(area_ch)
    {
    case 1:
        system("cls");
        triangle();
        break;
    case 2:
        system("cls");
        circle();
        break;
    case 3:
        system("cls");
        rectangle();
        break;
    case 4:
        system("cls");
        quadratic_eqn();
        break;
    case 5:
        system("cls");
        menu();
        break;
    case 0:
        system("cls");
        break;
    default :
        system("cls");
        printf("Invalid input");
        area();
        break;
    }
}
//TRIANGLE
int triangle()
{
    system("cls");
    float base, height, result;
    int choice;
    printf("Enter the base of your triangle: ");
    scanf("%f" ,&base);
    printf("Enter the height of your triangle: ");
    scanf("%f", &height);
    result = areaOfTriangle(base, height);
    printf("\n(%3.2f * %3.2f )/ 2\n = %3.2f \n\n", base , height, result);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

int areaOfTriangle(float num1, float num2)
{
    float area;
    area = ((num1 * num2)/2);
    return(area);
}

//CIRCLE
int circle()
{
    system("cls");
    float pi = 3.142, radius, result;
    int choice;
    printf("Enter the radius of your circle: ");
    scanf("%f" ,&radius);
    result = areaOfCircle(radius);
    printf("\n3.142 * (%3.2f * %3.2f)\n = %3.2f \n\n" ,radius,radius , result);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}


int areaOfCircle(float num)
{
    float area;
    area = 3.142 * (num*num);
    return(area);
}



// RECTANGLE
int rectangle()
{
    system("cls");
    float length, breadth, result;
    int choice;
    printf("Enter the length of your rectangle: ");
    scanf("%f" ,&length);
    printf("Enter the breadth of your rectangle: ");
    scanf("%f", &breadth);
    result = areaOfRectangle(length, breadth);
    printf("\n(%3.2f * %3.2f )\n = %3.2f \n\n", length , breadth, result);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

int areaOfRectangle(float num1, float num2)
{
    float area;
    area = (num1 * num2);
    return(area);
}


// QUADRATIC EQUATION
int quadratic_eqn()
{
    system("cls");
    float num1, num2, num3,num4, ans1, ans2;
    int choice;
    printf("Enter a: ");
    scanf("%f" ,&num1);
    printf("Enter b: ");
    scanf("%f" ,&num2);
    printf("Enter c: ");
    scanf("%f" ,&num3);
    num4 = (num2 * num2) - (4 * num1 * num3);
    ans1 = (-num2 - sqrt(num4))/(2 * num1);
    ans2 = (-num2+ sqrt(num4))/(2 * num1);
    printf("\n The value of X1 and X2 are  %3.2f and %3.2f\n\n" , ans1, ans2);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}






int calc_check(int calc_ch)
{
    switch(calc_ch)
    {
    case 1:
        system("cls");
        menu();
        break;
    case 2:
        system("cls");
        break;
        //
    default :
        system("cls");
        area();
        break;
    }
}
// END OF AREA
// ===================================================================


// ===================================================================
// START ADD NUMBERS

int add_num()
{
    int choice;
    system("cls");
    printf("============================\n");
    printf("Addition of numbers         \n");
    printf("============================\n");
    printf("1. Addition of two Numbers  \n");
    printf("2. Addition of Three Numbers\n");
    printf("3. Addition of Four Numbers \n");
    printf("4. <<Back                   \n");
    printf("0. <<Exit                   \n");
    printf("============================\n");
    scanf("%d", &choice);
    add_num_check(choice);
}

int add_num_check(int add_num_ch)
{
    switch(add_num_ch)
    {
    case 1:
        system("cls");
        add_two_num();
        break;
    case 2:
        system("cls");
        add_three_num();
        break;
    case 3:
        system("cls");
        add_four_num();
        break;
    case 4:
        system("cls");
        menu();
        break;
    case 0:
        system("cls");
        break;
    default :
        system("cls");
        printf("Invalid input");
        area();
        break;
    }
}

//Add two numbers
int add_two_num()
{
    system("cls");
    int choice;
    float num1, num2, sum;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("\n%3.2f + %3.2f = %3.2f\n\n", num1, num2, sum);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Add three numbers
int add_three_num()
{
    system("cls");
    int choice;
    float num1, num2, num3, sum;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    printf("Enter your third number here: ");
    scanf("%f", &num3);
    sum = num1 + num2 + num3;
    printf("\n%3.2f + %3.2f + %3.3f = %3.2f\n\n", num1, num2, num3, sum);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Add four numbers
int add_four_num()
{
    system("cls");
    int choice;
    float num1, num2, num3, num4, sum;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    printf("Enter your third number here: ");
    scanf("%f", &num3);
    printf("Enter your fourth number here: ");
    scanf("%f", &num4);
    sum = num1 + num2 + num3 + num4;
    printf("\n%3.2f + %3.2f + %3.2f + %3.2f = %3.2f\n\n", num1, num2, num3, num4, sum);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}
// END ADD NUMBERS
//=================================================================================


// ===================================================================
// START MULTIPLY NUMBERS

int multiply_num()
{
    int choice;
    system("cls");
    printf("==================================\n");
    printf("Multiplication of numbers         \n");
    printf("==================================\n");
    printf("1. Multiplication of two Numbers  \n");
    printf("2. Multiplication of Three Numbers\n");
    printf("3. Multiplication of Four Numbers \n");
    printf("4. Cube Root                      \n");
    printf("5. <<Back                         \n");
    printf("0. <<Exit                         \n");
    printf("==================================\n");
    scanf("%d", &choice);
    multiply_num_check(choice);
}

int multiply_num_check(int multiply_num_ch)
{
    switch(multiply_num_ch)
    {
    case 1:
        system("cls");
        multiply_two_num();
        break;
    case 2:
        system("cls");
        multiply_three_num();
        break;
    case 3:
        system("cls");
        multiply_four_num();
        break;
    case 4:
        system("cls");
        cubeRoot();
        break;
    case 5:
        system("cls");
        menu();
        break;
    case 0:
        system("cls");
        break;
    default :
        system("cls");
        printf("Invalid input");
        area();
        break;
    }
}

//Multiply two numbers
int multiply_two_num()
{
    system("cls");
    int choice;
    float num1, num2, sum;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    sum = num1 * num2;
    printf("\n%3.2f x %3.2f = %3.2f\n\n", num1, num2, sum);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Multiply three numbers
int multiply_three_num()
{
    system("cls");
    int choice;
    float num1, num2, num3, sum;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    printf("Enter your third number here: ");
    scanf("%f", &num3);
    sum = num1 * num2 * num3;
    printf("\n%3.2f x %3.2f x %3.3f = %3.2f\n\n", num1, num2, num3, sum);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Multiply four numbers
int multiply_four_num()
{
    system("cls");
    int choice;
    float num1, num2, num3, num4, sum;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    printf("Enter your third number here: ");
    scanf("%f", &num3);
    printf("Enter your fourth number here: ");
    scanf("%f", &num4);
    sum = num1 * num2 * num3 * num4;
    printf("\n%3.2f x %3.2f x %3.2f x %3.2f = %3.2f\n\n", num1, num2, num3, num4, sum);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Cube root
int cubeRoot()
{
    system("cls");
    int choice;
    float num, cube;
    printf("Enter a number here: ");
    scanf("%f", &num);
    cube = cbrt(num);
    printf("\nCube Root of %3.2f = %3.2f\n\n", num, cube);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}
// END MULTIPLY NUMBERS
//=====================================================================

// ===================================================================
// START SWAPPING NUMBERS

int swap_num()
{
    int choice;
    system("cls");
    printf("==================================\n");
    printf("Swapping of numbers               \n");
    printf("==================================\n");
    printf("1. Swapping of two Numbers        \n");
    printf("2. Swapping of Three Numbers      \n");
    printf("3. Swapping of Four Numbers       \n");
    printf("5. <<Back                         \n");
    printf("0. <<Exit                         \n");
    printf("==================================\n");
    scanf("%d", &choice);
    swap_num_check(choice);
}

int swap_num_check(int swap_num_ch)
{
    switch(swap_num_ch)
    {
    case 1:
        system("cls");
        swap_two_num();
        break;
    case 2:
        system("cls");
        swap_three_num();
        break;
    case 3:
        system("cls");
        swap_four_num();
        break;
    case 4:
        system("cls");
        menu();
        break;
    case 0:
        system("cls");
        break;
    default :
        system("cls");
        printf("Invalid input");
        area();
        break;
    }
}

//Swap two numbers
int swap_two_num()
{
    system("cls");
    int choice;
    float num1, num2, temp;
    printf("Enter your first number here: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n\nThe values of num1 is now %3.2f\n", num1);
    printf("The values of num2 is now %3.2f\n\n", num2);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Swap three numbers
int swap_three_num()
{
    system("cls");
    int choice;
    float num1, num2,num3, temp;
    printf("Enter your first number here: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    printf("Enter your third number here: ");
    scanf("%f", &num3);
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;
    printf("\n\nThe values of num1 is now %3.2f\n", num1);
    printf("The values of num2 is now %3.2f\n", num2);
    printf("The values of num3 is now %3.2f\n\n", num3);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}

//Swap four numbers
int swap_four_num()
{
    system("cls");
    int choice;
    float num1, num2, num3, num4, temp;
    printf("Enter your first number here: ");
    scanf("%f", &num1);
    printf("Enter your second number here: ");
    scanf("%f", &num2);
    printf("Enter your third number here: ");
    scanf("%f", &num3);
    printf("Enter your fourth number here: ");
    scanf("%f", &num4);
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = num4;
    num4 = temp;
    printf("\n\nThe values of num1 is now %3.2f\n", num1);
    printf("The values of num2 is now %3.2f\n", num2);
    printf("The values of num3 is now %3.2f\n", num3);
    printf("The values of num4 is now %3.2f\n\n", num4);
    printf("Do you wish to continue?\n");
    printf("Press 1 to go back to main menu or 2 to exit.\n");
    scanf("%d", &choice);
    calc_check(choice);
}
// END OF SWAPPING NUMBERS
//==========================================================================
