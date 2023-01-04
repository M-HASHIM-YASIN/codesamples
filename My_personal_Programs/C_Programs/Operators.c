// There are 6 types o9f Operators are as Follows:

//     1.  Arithmetic Operators
//     2.  Relational Operators
//     3.  Logical Operators
//     4.  BitWise Operators
//     5.  Assignment Operators
//     6.  Misc Operators

#include<stdio.h>

int main()
{
    int a1 =3, b1=5;

    printf("******* Arithmetic Operators******\n");
    printf("The Sum of a1 and b1 is %d.\n",a1+b1);
    printf("The Subtraction of a1 and b1 is %d.\n",a1-b1);
    printf("The Multiplication of a1 and b1 is %d.\n",a1*b1);
    printf("The Division of a1 and b1 is %d.\n",a1/b1);
    printf("The Remainder of a1 and b1 is %d.\n",a1%b1);
    printf("The Decrement of a1 and b1 is %d.\n",--b1);
    printf("The Increment of a1 and b1 is %d.\n",++a1-b1);


    printf("\n\n******* Relational Operators******\n");
    int a2 =3, b2=5;
    
    printf("The The Answer is %d.\n",a2==b2);
    printf("The The Answer is %d.\n",a2!=b2);
    printf("The The Answer is %d.\n",a2>b2);
    printf("The The Answer is %d.\n",a2<b2);
    printf("The The Answer is %d.\n",a2>=b2);
    printf("The The Answer is %d.\n",a2<=b2);



    printf("\n\n******* Logical Operators******\n");
    int a3 =0, b3=1;
    
    printf("The The Answer is %d.\n",a3 && b3);
    printf("The The Answer is %d.\n",a3 || b3);
    printf("The The Answer is %d.\n",!b3);
    printf("The The Answer is %d.\n",!a3);
    printf("The The Answer is %d.\n",!a3 && b3);
    


    printf("\n\n******* BitWise Operators******\n");
    int a4 =19;  // 0010011 
    int b4=87;   // 1010111
    
    printf("The Bitwise AND Operator is %d.\n",a4 & b4);
    printf("The Bitwise OR Operator is %d.\n",a4 | b4);
    printf("The Bitwise XOR Operator is %d.\n",a4 ^ b4);
    printf("The Bitwise ONE'S Complement Operator is %d.\n",~a4);
    printf("The Bitwise LEFT SHIFT Operator is %d.\n",a4 << b4);
    printf("The Bitwise RIGHT SHIFT Operator is %d.\n",a4 >> b4);
    

   printf("\n\n******* Assignment Operators******\n");
    int a5 = 9;
    
    printf("The Answer is %d.\n",a5+=7);
    printf("The Answer is %d.\n",a5-=9);
    printf("The Answer is %d.\n",a5*=7);
    printf("The Answer is %d.\n",a5%=7);
    



    return 0;
}