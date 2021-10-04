main()
{
    for (int i=1;i<=8;i++)
    {
        for (int j=1;j<=4;j++)
        {
            if (i<=4)
            {
                if (j<=i)
                {
                    printf("x");
                }
            }

            else
            {
                if (j<=8-i)
                {
                    printf("x");
                }
            }
        }
        printf("\n");
    }
}
