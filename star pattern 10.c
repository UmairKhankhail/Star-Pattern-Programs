main()
{

    for (int i=1;i<=7;i++)
    {
        for (int j=1;j<=7;j++)
        {
            if (i<=4)
            {
                if(j>=5-i && j<=3+i)
                {
                    printf("x");
                }

                else
                {
                    printf(" ");
                }
              }
            else
               {
                if(j>=i-3 && j<=11-i)
                {
                    printf("x");
                }
                else
                {
                    printf(" ");
                }

            }

        }
                    printf("\n");
    }
}
