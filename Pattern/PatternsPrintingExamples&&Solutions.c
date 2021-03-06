/******************************************************************************

                            Printing Patterns Exercises
                                   With Solutions

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 0, jj = 0, j = 0, jloop = 0, jjloop = 0; 
    
    /*
        We want to print this!
        
                 *
               * *
             * * *
           * * * *
         * * * * *
    
    */
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j <= (5-i); j++)
            printf(" ");
        for(jj = 1; jj<=i; jj++)
            printf("*");
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j <= (5-i); j++)
            printf(" ");
        for(jj = 1; jj<=i; jj++)
            printf("%d", jj);
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j <= (5-i); j++)
            printf(" ");
        for(jj = 1; jj<=i; jj++)
            printf("%d", i);
        printf("\n");
    }
    
    printf("\n"); 
    
    /*
        We want to print this!
        
        * * * * *
        *     * *
        *   *   *
        * *     *
        * * * * *
        
        AND also this!
        
        * * * * *
        * *   * *
        *   *   *
        * *   * *
        * * * * *
        
        AND also this!
        
        * * * * *
        * *     *
        *   *   *
        *     * *
        * * * * *
        
        AND also this! (Still need to this)
        
        * * * * *
        * *     *
        * * *   *
        * * * * *
        * * * * *
        
                
        AND also this! (Still need to do this)
        
        * * * * *
        * * * * *
        *   * * *
        *     * *
        * * * * *
    
    */
    
    for(i = 1; i<=5; i++)
    {   
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j==5 || j == 5-i+1)
                printf("@");
            else 
                printf(" "); 
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 1; i<=5; i++)
    {   
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j==5 || i == j || j == 5-i+1)
                printf("@");
            else 
                printf(" "); 
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 1; i<=5; i++)
    {   
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j==5 || j == i)
                printf("@");
            else 
                printf(" "); 
        }
        printf("\n");
    }
    
    printf("\n");
    
    /*
        We want to print this!
        
        * 
        * *      
        * * *   
        * * * *
        * * * * *
    */
    
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j<=i; j++)
            printf("*");
        printf("\n"); 
    }
    
    printf("\n");
    
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j<=i; j++)
            printf("%d", j);
        printf("\n"); 
    }
    
    printf("\n");
    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= i; j--)
            printf("*");
        printf("\n"); 
    }
    
    printf("\n");
    
    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= i; j--)
            printf("%d", j);
        printf("\n"); 
    }
    
    printf("\n");
    
    /*
        We want to print this!
        
        * * * * *
        * * * *     
        * * *   
        * * 
        * 
    */
    
    
    for(i = 5; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
            printf("*");
        printf("\n"); 
    }
    
    printf("\n"); 
    
    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j <= (5-i); j++)
            printf("*");
        printf("\n"); 
    }

    printf("\n"); 
    
    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
            printf("*");
        printf("\n"); 
    }
    
    printf("\n"); 
    
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n"); 
    }
    
    printf("\n"); 
    
    /*
        We want to print this!
        
        A A A A A
        B B B B     
        C C C   
        D D 
        E 
    */
    
    char alphaBet = 'A'; 
    
    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("%c", alphaBet);
        }
        alphaBet++; 
        printf("\n"); 
    }
    
    printf("\n");
    
    alphaBet = 'A';
    
    for(i = 5; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%c", alphaBet);
        }
        alphaBet++; 
        printf("\n"); 
    }
    
    /*
    
      We want to do this!
    
      A
      B B
      C C C
      D D D D
      E E E E E
      
    */
    
    printf("\n");
    
    alphaBet = 'A';
    
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", alphaBet);
        }
        alphaBet++; 
        printf("\n"); 
    }
    
        printf("\n");
    
    alphaBet = 'A';
    
    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= i; j--)
        {
            printf("%c", alphaBet);
        }
        alphaBet++; 
        printf("\n"); 
    }
    
    /*
        We want to try to do this!
        
                    *
                *   *   *
            *   *   *   *   *
        *   *   *   *   *   *   *
    *   *   *   *   *   *   *   *   *
    
    (OMG, look at that beautiful pyramid!)
    
    */
    
    printf("\n"); 
    
    int space, k=0;
    int rows = 5;
    for (i=1; i<=rows; i++,k=0)
    {
        for (space=1; space<=rows-i; space++)
            printf("  "); 
        while (k!=2*i-1) 
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }    
    
    printf("\n");
    
    /*
        We want to print this!
        
        1
        2 3
        4 5 6
        7 8 9 10
    
        Guess what? This is floyd triangle~!
    */
    
    int number = 1; 
    for(i = 1; i<=4; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d ", number);
            number++; 
        }
        printf("\n");
    }
    
    printf("\n");
    
    /*
    
        We want to print this!!!
        
                        *
                    *   *
                *   *   *
            *   *   *   *
        *   *   *   *   *
    
    */  
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=5; j++)
        {
            if(j<=(5-i))
                printf(" ");
            else
                printf("*");
        }    
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 5; i>=1; i--)
    {
        for(j = 1; j<=5; j++)
        {
            if(j<=(i-1))
                printf(" ");
            else
                printf("*");
        }    
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 5; i>=1; i--)
    {
        for(j = 1; j<=(i-1); j++)
        {
            printf(" ");
        }    
        for(jj = 5; jj >=(i); jj--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    /*
        We want to print this!
        
        1
        2 4
        3 6 9
        4 8 12 16
        5 10 15 20 25
    
        Guess what? This is weird pattern triangle~!
    */
    
    int numberFactor = 1; 
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d ", (j*numberFactor));
        }
        numberFactor++;
        printf("\n"); 
    }
    
    printf("\n"); 
    
    /*
    
        We want to print this!
        
        1
        1 0
        1 0 1
        1 0 1 0
        1 0 1 0 1
    
        Guess what? This is weird pattern triangle~!
    */
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=i; j++)
        {
            if(j%2==0)
                printf("%d ", 0);
            else
                printf("%d ", 1);
        }
        printf("\n"); 
    }
    
    printf("\n"); 
    
    /*
    
        We want to print this!
        
                        *
                    *       *
                *       *       *
            *       *       *       *
        *       *       *       *       *
        
                        OR
                        
                        *
                       * *
                      * * *
                     * * * *
                    * * * * *
    
        Guess what? This is weird pattern triangle ~ AGAIN!
    */
    
    
    for(i = 1; i<=5; i++)
    {
        for(j = 5-i; j>=1; j--)
        {
            printf(" ");
        }
        for(jj = 1; jj<=i; jj++)
        {
            printf("* ");
        }
        printf("\n"); 
    }
    
    /* 
    
        We want to print this!
        
                        1
                    1       1
                1       2       1
            1       3       3       1
        1       4       6      4       1
        
        Guess what? This is a pascal triangle!
        
    */
    
    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 5-i; j>=0; j--)
        {
            printf(" ");
        }
        
        int characterPascal = 1; 
        int denominator = 1; 
        int numerator = i-1; 
        for(jj = 1; jj<=i; jj++)
        {
            printf("%d ", characterPascal);
            characterPascal = characterPascal*numerator; 
            characterPascal = characterPascal/denominator; 
            denominator++;
            numerator--; 
        }
        printf("\n");
    }
    
    printf("\n");
    
    /*
    
        We want to try to do this!
        
                    *
                   ***
                  *****
                 *******
                *********
    
        (OMG, look at that beautiful pyramid!)
    
    */
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=(5-i); j++)
        {
            printf(" ");
        }
        for(jj = 1; jj <= (2*i-1); jj++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    /*
    
        We want to try to do this!
    
                 *******
                  ***** 
                   ***
                    *
    
        (OMG, look at that beautiful inverted pyramid!)
    
    */
    
    
    for(i = 1; i<=4; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf(" ");
        }
        for(jj=0; jj<=2*(4-i); jj++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    
    printf("\n"); 
    
    /*
    
        We want to try to do this!
        
                    *
                   ***
                  *****        
                 *******
                *********
                 *******
                  ***** 
                   ***
                    *
    
        (OMG, look at that beautiful diamond (lol)!)
    
    */
    
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=(5-i); j++)
        {
            printf(" ");
        }
        for(jj = 1; jj<=2*i-1; jj++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i<=4; i++)
    {
        for(jjloop = 1; jjloop <= i; jjloop++)
        {
            printf(" ");
        }
        for(jloop = 0; jloop <=2*(4-i); jloop++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    /*
    
        We want to print this!    
        
        ****** ******
        *****   *****
        ***       ***
        *           *
        *           *
        ***       ***
        *****   *****
        ****** ******
    
    */
    
    for(i = 0; i<=2*(5-1); i++)
    {
        printf("*");
    }
    printf("\n");
    for(i = 1; i<=5; i++)
    {
        for(j = 1; j<=(5-i); j++)
        {
            printf("*");
        }
        for(jj = 1; jj<=2*i-1; jj++)
        {
            printf(" ");
        }
        for(j = 1; j<=(5-i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i<=4; i++)
    {
        for(jjloop = 1; jjloop <= i; jjloop++)
        {
            printf("*");
        }
        for(jloop = 0; jloop <=2*(4-i); jloop++)
        {
            printf(" ");
        }
        for(jjloop = 1; jjloop <= i; jjloop++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 0; i<=2*(4-0); i++)
    {
        printf("*");
    }
    printf("\n");
    
    /*
    
        We want to print this pattern!
        
                 *
                # *
               # * #
              * # * # 
             * # * # *
             
    */
    
    for(i = 1; i<=5; i++)
    {
        for(j = 5-i; j>=1; j--)
        {
            printf(" ");
        }
        for(jj = 1; jj<=(i); jj++)
        {
            if(jj%2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n"); 
    }
    return 0;
}
