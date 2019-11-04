/*_____Pattern_no._#39______*/
/*							*/
/*		1					*/
/*		10					*/
/*		101					*/
/*		1010				*/
/*		10101				*/
/*		101010				*/
/*							*/
/*______Satyansh_Pandey_____*/
main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		k=1;
		for(j=1;j<=6;j++)
		{
			if(j<=i)
			{
			printf("%d",k);
			k=1-k;//for alternating the value of the 'k'
			}
			
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
