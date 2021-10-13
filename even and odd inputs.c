main()
{
        int rows,k=0;
        printf("Enter the number of rows : ");
        scanf("%d",&rows);
        for (int i=1;i<=rows;i++)
        {
             if (rows%2==0)
            {
                if (i<=rows/2)
                   k++;
                if (i>rows/2+1)
                   k--;
            }

            else
                i<=((rows+1)/2)?k++:k--;

            for (int j=1;j<=(rows+1)/2 ;j++)
            {
                if (j<=k)
                {
                    printf("x");
                }
            }
            printf("\n");
        }

        getch();
}
