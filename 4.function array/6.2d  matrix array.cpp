#include <stdio.h>

int main()
 {
    
    int a1[3][3],a2[3][3],res[3][3];
    int i,j;



    for (int i = 0; i < 3;i++)
	 {
        for (int j = 0; j < 3;j++) 
		{
            printf("Enter element : ");
            scanf("%d", &a1[i][j]);
        }
        
    }
    
    printf("\n=======matrix-2=========\n");
    
    for (int i = 0; i < 3;i++)
	 {
        for (int j = 0; j < 3;j++) 
		{
            printf("Enter element : ");
            scanf("%d", &a2[i][j]);
        }
    }
     printf("\n==========matrix sub=======\n");
     
    for (int i = 0; i < 3;i++)
	{
        for (int j = 0; j < 3;j++)
		{
            printf("%d"" ",a1[i][j]-a2[i][j]);
			
		}
		printf(" \n");
	}
	printf("\n==========matrix addition=======\n");
	
	for (int i = 0; i < 3;i++)
	{
        for (int j = 0; j < 3;j++)
		{
            printf("%d"" ",a1[i][j] + a2[i][j]);
			
		}
		printf(" \n");
	}
     printf("\n==========matrix multi=======\n");
	
	for (int i = 0; i < 3;i++)
	{
        for (int j = 0; j < 3;j++)
		{
            printf("%d"" ",a1[i][j] * a2[i][j]);
			
		}
		printf(" \n");
	}       
            
     

  
    

    return 0;
}

