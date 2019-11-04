/*____Pattern_no._#3_____*/
/*			******	     */
/*			*****		 */
/* 			****		 */
/* 			***		   	 */
/*    		**			 */
/*     		*			 */
/*	 					 */
/*_____Satyansh_Pandey___*/
main()
{
	int i,j;
	for(i=0;i<=5;i++)//for(i=1;i<=5;i++)
	{
		for(j=0;j<=5;j++)//for(j=1;j<=5;j++)
		{
			if(j<=5-i)//if(j<=6-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		
	}
getch();
}

//or:---->
//main()
//{
//	int i,j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=7;j++)
//		{
//			if(j<=5-i||j>=7+i)
//			printf("*");
//			else
//			printf(" ");
//		}
//		printf("\n");
//	}
//	getch();
//}


