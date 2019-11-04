/*_____Pattern_no._#34_______*/
/*							 */
/*		   A				 */
/*		  ABC				 */
/*		 ABCDE				 */
/*		ABCDEFG				 */
/*							 */	
/*______Satyansh_Pandey______*/
main()
{

	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k='A';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
				printf("%c",k);
				k++;	
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
