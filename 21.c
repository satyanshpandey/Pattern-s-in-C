/*_______________Pattern_no._#21____________________*/
/*													*/
/*		Enter the value of the rows:====> 7			*/
/*		*************								*/
/* 		 ***********								*/
/*		  *********									*/
/* 		   *******									*/
/*  		*****									*/
/*   		 ***									*/
/*    		  *										*/
/*													*/
/*________________Satyansh_Pandey___________________*/
 main()
 {
 	int i,j,r;
 	printf("Enter the value of the rows:====> ");
 	scanf("%d",&r);
 	for(i=1;i<=r;i++)
 	{
 		for(j=1;j<=2*r-1;j++)
 		{
 			if(j>=i&&j<=2*r-i)
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
