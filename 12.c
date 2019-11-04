/*___Pattern_no._#12__*/
/*	     5			  */
/*	    456			  */
/*     34567		  */
/*    2345678		  */
/*   123456789		  */
/* 					  */
/*___Satyansh_Pandey__*/
 
// main()
//{
//	int i,j,k;
//	for(i=0;i<=5;i++)
//	{
//		for(j=0;j<=9;j++)
//		{
//			if(j>=6-i&&j<=4+i)
//			{
//				printf("%d",j);
//			}
//			else
//			{
//				printf(" ");
//			}		
//		}
//			printf("\n");
//	}
//	getch();
//}
//or--->
main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
	k=i+1;
		for(j=0;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",j);
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
