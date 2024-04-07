#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,k,row1,row2,j,col1,col2;
    printf("enter the number of rows & coloums in a = ");
    scanf("%d%d",&row1,&col1);
    printf("enter the number of rows & coloums in b = ");
    scanf("%d%d",&row2,&col2);
    if (col1==row2)
    {
        printf("enter the elements of a =   ");
        for ( i = 0; i < row1; i++)
        {
            for ( j = 0; j < col1; j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
         printf("enter the elements of b =   ");
        for ( i = 0; i < row2; i++)
        {
            for ( j = 0; j < col2; j++)
            {
                scanf("%d",&b[i][j]);
            }
            
        }
        printf("the matrix a format is  = \n");
        for ( i = 0; i < row1; i++)
        {
            printf("[");
            for ( j = 0; j < col1; j++)
            {
                printf("    %d  ",a[i][j]);
            }
            printf("]\n");
            
        }
        printf("the matrix b a format is  = \n");
        for ( i = 0; i < row2; i++)
        {
            printf("[");
            for ( j = 0; j < col2; j++)
            {
                printf("    %d  ",b[i][j]);
            }
            printf("]\n");
            
        }
        for ( i = 0; i < row1; i++)
        {
            for ( j = 0; j < col2; j++)
            {   
                c[i][j]=0;
                for (  k = 0; k < row2; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                
                
            }
            
        }
        printf("the c = a+b \nc = \n");
        for ( i = 0; i < row2; i++)
        {
            printf("[");
            for ( j = 0; j < col2; j++)
            {
                printf("    %d  ",c[i][j]);
            }
            printf("]\n");
            
        }
   

        
        


        
    }
     else
    {
        printf("can not be subtracted ");
    }
    
    
     
    

}