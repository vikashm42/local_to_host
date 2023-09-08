# include <stdio.h>
int get_input(void);
void getoutput(int n);
int main (void)
{
    //get the input and can also use function
    int n=get_input();
   
    //get the output
    getoutput(n);
   
}


int get_input()
{
    int n;
    do
        {
            printf("enter the no. ");
            scanf("%d",&n);
        } 
        while (n<1);
        return n;
}

void getoutput(int n)
 {
    for ( int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf ("#");
            }
            printf ("\n");
        }   
 }