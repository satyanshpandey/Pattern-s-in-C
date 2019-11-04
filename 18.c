/*___________Pattern_no._#18____________*/
/*	Enter the value of the row's 10		*/
/*		    	*						*/
/*		   	   ***						*/
/*		  	  *****						*/
/*		  	 *******					*/
/*		    *********					*/
/*		 	 *******					*/
/*		  	  *****						*/
/*		   	   ***						*/
/*		    	*						*/
/*_________SATYANSH_PANDEY______________*/
main()
{
	int i,j,k,rows,n;
	printf("Enter the value of the row's ");
	scanf("%d",&rows);
	n=(rows+1)/2;
	for(i=1;i<=rows;i++)
	{
		i<=n?k++:k--;
		for(j=1;j<=rows;j++)
		{
			if(j>=n+1-k&&j<=n-1+k)
			{
			
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}
