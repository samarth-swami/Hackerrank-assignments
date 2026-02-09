#include <stdio.h>

int main() {
    int year;
    int internship;
    char branch;

    /* Read year and branch */
    scanf("%d", &year);
    scanf(" %c", &branch);

    switch (year) {

        /* -------- Year 1 -------- */
        case 1:
            printf("Physics\n");
            printf("Chemistry\n");
            printf("Maths\n");
            break;

        /* -------- Year 2 -------- */
        case 2:
            switch (branch) {

                case 'C':
                    printf("C Programming\n");
                    printf("Computer Organization & Architecture\n");
                    printf("Web Development\n");
                    break;

                case 'E':
                    printf("Signal Processing\n");
                    printf("Logic Design\n");
                    printf("Network Analysis\n");
                    break;

                case 'M':
                    printf("Thermodynamics\n");
                    printf("Solid Mechanics\n");
                    printf("Heat Transfer\n");
                    break;

                default:
                    printf("-1");
            }
            break;

        /* -------- Year 3 -------- */
        case 3:
            switch (branch) {

                case 'C':
                    printf("Object-oriented Programming\n");
                    printf("DBMS\n");
                    printf("Data Structures & Algorithms\n");
                    break;

                case 'E':
                    printf("Analog Electronics\n");
                    printf("Embedded Systems\n");
                    printf("Microcontrollers\n");
                    break;

                case 'M':
                    printf("Applied Mechanics\n");
                    printf("Kinematics\n");
                    printf("Mechatronics\n");
                    break;

                default:
                    printf("-1");
            }
            break;

        /* -------- Year 4 -------- */
        case 4:
            scanf("%d", &internship);

            switch (internship) {

                /* Internship chosen */
                case 1:
                    printf("Enrolled into Internship Program");
                    break;

                /* Regular subjects */
                case 0:
                    switch (branch) {

                        case 'C':
                            printf("Operating Systems\n");
                            printf("Computer Networks\n");
                            printf("Compiler Design\n");
                            break;

                        case 'E':
                            printf("VLSI Design\n");
                            printf("Fiber-optic Communication\n");
                            printf("Digital Electronics\n");
                            break;

                        case 'M':
                            printf("Mechanism of Materials (MOM)\n");
                            printf("Strength of Materials (SOM)\n");
                            printf("Machine Design\n");
                            break;

                        default:
                            printf("-1");
                    }
                    break;

                default:
                    printf("-1");
            }
            break;

        /* -------- Invalid Year -------- */
        default:
            printf("-1");
    }

    return 0;
}
