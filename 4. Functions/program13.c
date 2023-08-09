/* =================================================================
   Author: Miguel Marines
   ============================================================== */

/* =================================================================
   Problem:
   Program to compute the amount of tuition that a student pays in
   a university, taking into acount the different scolarships and
   student loans.
================================================================== */

// Library
#include <stdio.h>

// Menu function.
void menu(void)
{
    printf("1. Know if the student applies for a scholarship.\n");
    printf("2. Know the porcentage of scholarship that applies for a student.\n");
    printf("3. Know if the student mantains the scholarship.\n");
    printf("4. Know the amount of the tuition with scholarship.\n");
    printf("5. Know if the student is eligible for other scholarships.\n");
    printf("6. Know the porcentage of student loan that applies to the student.\n");
    return;
}

// Function to compute the average.
float average(float grade1, float grade2, float grade3, float grade4, float grade5, float grade6)
{
    float average = (grade1 + grade2 + grade3 + grade4 + grade5 + grade6) / 6;
    return average;
}

// Function to compute the tuition with scolarship.
float tuition_scolarship(float porcentage_scolarship, float tuition)
{
    float tuition_scolarship = (tuition * (100 - porcentage_scolarship)) / 100;
    return tuition_scolarship;
}

// Function to compute student loan.
float student_loan(float income)
{
    if(income <= 15000 && income >= 10000)
    {
        float loan = 25;
        return loan;
    }
    else if(income <= 9999)
    {
        float loan = 50;
        return loan;
    }
    else
    {
        float loan = 0;
        return loan;
    }
    return 0;
}

// Main
int main()
{
    // Variables.
    char porcentage ='%';
    int decision;
    float a, b, c, d, e, f, av, tuition, tuitionScolarship, tuition_scolarship_v, income, loan;
    
    // Menu Function
    menu();

    // User input
    scanf("%i", &decision);

    switch(decision)
    {
        case 1:
        {
            printf("Enter the 6 grades of the student\n");
            scanf(" %f %f %f %f %f %f%*c", &a, &b, &c, &d, &e, &f);
            av = average(a, b, c, d, e, f);
            if(av >= 80)
            {
                printf("Student eligible for scholarship.\n");
            }
            else
            {
                printf("Student not eligible for scholarship.\n");
            }
            break;
        }
        case 2:
        {
            printf("Enter the 6 grades of the student\n");
            scanf(" %f %f %f %f %f %f%*c", &a, &b, &c, &d, &e, &f);
            av = average(a, b, c, d, e, f);
            if(av >= 95)
            {
                printf("The student has 80 %c of scolarship.", porcentage);
            }
            else if(av < 95 && av >= 90)
            {
                printf("The student ha 70 %c of scolarship.", porcentage);
            }
            else if(av < 90 && av >= 85)
            {
                printf("The student has 60 %c of scolarship.", porcentage);
            }
            else if(av < 85 && av >= 80)
            {
                printf("The student has 50 %c of scolarship.",porcentage);
            }
            else
            {
                printf("The student has no scolarship.");
            }
            break;
        }
        case 3:
        {
            printf("Enter the 6 grades of the student\n");
            scanf(" %f %f %f %f %f %f%*c", &a, &b, &c, &d, &e, &f);
            av = average(a, b, c, d, e, f);
            if(av >= 80)
            {
                printf("The student mantains the scolarship.");
            }
            else
            {
                printf("The student does not mantain the scolarship.");
            }
            break;
        }
        case 4:
        {
            printf ("Enter the tuition cost\n");
            scanf("%f", &tuition);
            printf("Enters thte scolarship porcentage\n");
            scanf("%f", &tuitionScolarship);
            tuition_scolarship_v = tuition_scolarship(tuitionScolarship,tuition);
            printf("The tuition with scolarship is $ %.2f", tuition_scolarship);
            break;
        }
        case 5:
        {
            printf("Enter the 6 grades of the student\n");
            scanf(" %f %f %f %f %f %f%*c", &a, &b, &c, &d, &e, &f);
            av = average(a, b, c, d, e, f);
            if(av >= 95)
            {
                printf("The student applies for the Golden Scolarship to study abroad.");
            }
            else if(av < 95 && av >= 90)
            {
                printf("The student applies for the Silver Scolarship to study abroad.");
            }
            else if(av < 90 && av >= 85)
            {
                printf("The student applies for the Bronce Scolarship to study abroad.");
            }
            else if(av < 85 && av >= 80)
            {
                printf("The student does not apply for other type of scolarship.");
            }
            else
            {
                printf("The student does not have a scolarship.");
            }
            break;
        }
        case 6:
        {
            printf("Enter the monthly income of the student's family.\n");
            scanf("%f", &income);
            loan = student_loan(income);
            printf("The student loan is %.0f %c ", loan, porcentage);
            break;
        }
        default:
        {
            printf("Error, please try again.");
            return 0;
            break;
        }
    }
    
    // Ends the program properly.
    return 0;
}
