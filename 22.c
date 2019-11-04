/*_________Pattern_no._#22__________*/
/*									*/
/*			   5					*/
/*			  565					*/
/*			 56765					*/
/*			5678765					*/
/*									*/
/*_________Satyansh__Pandey_________*/
main()
{
	int i,j,k=0;
	for(i=1;i<=4;i++)
	{
		k=i;
		
		for(j=1;j<=7;j++)
		{
			j<=4?k++:k--;
			if(j>=5-i&&j<=3+i)
			
			printf("%d",k);
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
