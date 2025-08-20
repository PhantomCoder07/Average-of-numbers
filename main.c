// Standard
#include <stdio.h>
int main()
{
    float a,b,c,sum,avg;
    printf ("Enter three numbers: ");
    scanf ("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf ("The average of three numbers is: %.2f",avg);
    return 0;
}
// Function
#include <stdio.h>
float average (float a, float b, float c)
{
    return (a+b+c)/3;
}
int main()
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("Average of three numbers: %.2f\n",average(a,b,c));
    return 0;
}
// Structure
#include <stdio.h>
struct average
{
    float value;
};
int main()
{
    int i,n;
    printf ("Enter number limit: ");
    scanf ("%d",&n);
    struct average av[n];
    float avg,sum=0;
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%f",&av[i].value);
        sum+=av[i].value;
    }
    avg= sum/n;
    printf ("The average of three numbers is: %.2f",avg);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Average.txt","w");
    file2 = fopen ("Average.txt","r");
    float a,b,c,sum,avg;
    char ch;
    if (file1==NULL)
        printf ("The file does not exist.");
    else
    {
        printf ("Enter three numbers: ");
        scanf ("%f %f %f",&a,&b,&c);
        sum=a+b+c;
        avg=sum/3;
        fprintf (file1,"The average of three numbers is: %.2f",avg);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist.");
    else
    {
        while (!feof (file2))
        {
            ch = fgetc (file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
