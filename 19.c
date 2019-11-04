/*______________________Pattern_no._#19_________________________*/
/*																*/
/*		Enter the value of the rows ===>rows>>:---> 10			*/
/*		*														*/
/*		**														*/
/*		***														*/
/*		****													*/
/*		*****													*/
/*		****													*/
/*		***														*/
/*		**														*/
/*		*														*/
/*______________________SATYANSH__PANDEY________________________*/

main()
{
	int i,j,k=0,rows,col;
	printf("Enter the value of the rows ===>rows>>:---> ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		i<=(rows+1)/2?k++:k--;
		for(j=1;j<=(rows+1)/2;j++)
		{
			if(j<=k)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
