#include<stdio.h>
#include<stdlib.h>
struct complex 
{
    int real_no, img_no;
};

int main()
{
    int choice, x, y, z;
    struct complex a, b, c;
    while(1)
    {
        printf("Enter 1 to add 2 complex numbers:\n");
        printf("Enter 2 to subtract 2 complex numbers:\n");
        printf("Enter 3 to multiply 2 complex numbers:\n");
        printf("Enter 4 to divide 2 complex numbers:\n");
        printf("Enter 5 to exit:\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        if(choice ==5)
        exit(0);
        if(choice>=1 && choice<=4)
        {
            printf("Enter a and b where a+ib is the first complex number:");
            printf("\na = ");
            scanf("%d", &a.real_no);
            printf("b = ");
            scanf("%d", &a.img_no);
            printf("Enter c and d where c+id is the second complex number:");
            printf("\nc = ");
            scanf("%d", &b.real_no);
            printf("d = ");
            scanf("%d", &b.img_no);
        }
        if(choice == 1)
        {
            c.real_no = a.real_no + b.real_no;
            c.img_no = a.img_no + b.img_no;
            if(c.img_no>=0)
            printf("Sum of complex no. : %d + %di", c.real_no, c.img_no);
            else
            printf("Sum of complex no. : %d   %di", c.real_no, c.img_no);
        }
        else if (choice == 2)
         {
            c.real_no = a.real_no - b.real_no;
            c.img_no = a.img_no - b.img_no;
            if(c.img_no>=0)
            printf("Difference of complex no. : %d + %di", c.real_no, c.img_no);
            else
            printf("Difference of complex no. : %d   %di", c.real_no, c.img_no);
        }
        else if (choice == 3)
         {
            c.real_no = a.real_no*b.real_no - a.img_no*b.img_no;
            c.img_no = a.img_no*b.real_no + a.real_no*b.img_no;
            if(c.img_no>=0)
            printf("Multiplication of complex no. : %d + %di", c.real_no, c.img_no);
            else
            printf("Multiplication of complex no. : %d   %di", c.real_no, c.img_no);
        }
        else if(choice == 4)
        {
            if(b.real_no == 0 && b.img_no == 0)
            printf("Division by 0 + 0i is not allowed.");
            else
            {
                x = a.real_no*b.real_no + a.img_no*b.img_no;
                y = a.img_no*b.real_no - a.real_no*b.img_no;
                z = b.real_no*b.real_no + b.img_no*b.img_no;
                if(x%z == 0 && y%z == 0)
                {
                    if(y/z >= 0)
                    printf("Division of complex no.: %d + %di", x/z, y/z);
                    else
                    printf("Division of complex no.: %d   %di", x/z, y/z);
                }
                else if(x%z == 0 && y%z != 0)
                {
                    if(y/z >= 0)
                    printf("Division of complex no.: %d + %d/%di", x/z, y, z);
                    else
                    printf("Division of complex no.: %d   %d/%di", x/z, y, z);
                }
                 else if(x%z != 0 && y%z == 0)
                {
                    if(y/z >= 0)
                    printf("Division of complex no.: %d/%d + %di", x, z, y/z);
                    else
                    printf("Division of complex no.: %d/%d   %di", x, z, y/z);
                }
                else
                {
                    if(y/z >= 0)
                    printf("Division of complex no.: %d/%d + %d/%di",x, z, y, z);
                    else
                    printf("Division of complex no.: %d/%d   %d/%di",x, z, y, z);
                }
            }
        }
        else
        printf("Invalid Choice.");
        printf("\n Enter any key to enter choice again...\n");
    }
}