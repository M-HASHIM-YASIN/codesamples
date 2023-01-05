#include<stdio.h>
#include<string.h>

int marks(int a, int b)
{
    return a+b;
}


int mark(int x, int y, int z)
{
    return x+y+z;
}


float marksavg(float a, float b)
{
    return (a+b)/2;
}


float markavg(float x, float y, float z)
{
    return (x+y+z)/3;
}
int main()
{
    // Funstion Calling
    // printf("\n****** Functions Calling ******\n");
    // printf("The Sum of 2 Numbers is %d.\n",marks(47,63));
    // printf("The Sum of 3 Numbers is %d.\n",mark(47,63,8));
    // printf("The Average of 2 Numbers is %f.\n",marksavg(47,63));
    // printf("The Average of 3 Numbers is %f.\n",markavg(47,63,8));


    // ****** Pointer ******
    // printf("\n****** Pointers ******\n\n");
    // printf("Pointer - (Call by refference)\n");

    // int a = 125;
    // int b;
    // printf("The Value of a is %d before pointer.\n",a);

    // int* ptr1 = NULL;
    // int* ptr2 = NULL;
    // int c;
    // printf("Enter the value of c: ");
    // scanf("%d",&c);
    // if(ptr1)
    // {
    //     printf("Pointer is not null");
    // }
    // ptr1 = &a; // &a means that address of a
    // ptr2 = &b;
    // *ptr1 = c;
    // *ptr2 = 700 + *ptr1;
    // printf("The Value of a is %d after pointer.\n",b);


    // ****** Arrays ******
    // printf("\n****** Arrays ******\n\n");
    // int ary[10] = {12,4,2,7,8,45,3,10,17,9};

    
    // for(int i=0; i<10; i++)  // Array 
    // {
    //     for(int x=1; x<=10; x++)
    //     {
    //         printf(" %d * %d = %d\n",ary[i],x,ary[i]*x);
    //     }
    //     printf("\n");
    // }


    // Strings (copy, merge and Compare etc)
    printf("\n\n****** String ******\n");

    char str1[4] = {'M','H','Y','\0'};
    char str2[40] , str3[50];

    // String Copy
    strcpy(str2 , str1);
    printf("%s\n",str2);

    // String Merge
    strcpy(str1 , "Hashim ");
    strcpy(str3 , "Yasin");
    strcat(str1 , str3);
    
    printf("%s",str1);
    printf("\n");
    return 0;
}