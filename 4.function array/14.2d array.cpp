#include <stdio.h>

int main()
 {
    
    int a1[2][2],a2[2][2],res[2][2];
    int i,j;



    for (int i = 0; i < 2;i++)
	 {
        for (int j = 0; j < 2;j++) 
		{
            printf("Enter element : ");
            scanf("%d", &a1[i][j]);
        }
        
    }
    
    printf("\n=======matrix-2=========\n");
    
    for (int i = 0; i < 2;i++)
	 {
        for (int j = 0; j < 2;j++) 
		{
            printf("Enter element : ");
            scanf("%d", &a2[i][j]);
        }
    }
     printf("\n==========matrix res=======\n");
     
    for (int i = 0; i < 2;i++)
	{
        for (int j = 0; j < 2;j++)
		{
            printf("%d",a1[i][j]-a2[i][j]);
			
		}
		printf("\n");
	}
            
    return 0;
}

