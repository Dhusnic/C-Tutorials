  #include<stdio.h>
int main()
{
    int a[3][3],i,row,j,col;
    printf("enter the number of rows & coloums = ");
    scanf("%d%d",&row,&col);
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("the matrix format is  = \n");
    for ( i = 0; i < row; i++)
    {
        printf("[");
        for ( j = 0; j < col; j++)
        {
            printf("    %d  ",a[i][j]);
        }
        printf("]\n");
        
    }
    
    
     
    

}