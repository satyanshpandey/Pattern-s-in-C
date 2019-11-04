/*____Pattern_no._#11____*/
/*					    */
/*	     1				*/ 
/*    	222				*/
/*	   33333			*/
/*	  4444444			*/
/*	 555555555			*/
/*					    */
/*___Satyansh_Pandey____*/

main()
{
	int i,j,k=1;
	for(i=0;i<=5;i++)
	{
//		k=i;
		for(j=0;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",i);//printf("%d",k);
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





//or:---->
