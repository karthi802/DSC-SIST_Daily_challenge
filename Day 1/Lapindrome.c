#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    //iterate through all the test cases
    while(t--)
    {
        char x[1005];
        scanf("%s",x);
        int len,b[strlen(x)];
        int count=0;
        len=strlen(x);
        
        //assign 1 for all the characters 
        for(int a=0; a<len; a++)
        {
            b[a]=1;
        }
        
        //check if the lenght is even or not
        if(len%2 == 0)
        {
            //select  two characters and compare
            for (int i=0; i<len/2 ;i++)
            {
                for (int j=(len/2); j<len ;j++)
                {
                    //if the two characters are same assign the characters 0 and then add the count value by 1
                    if(x[i] == x[j])
                    {
                        if(b[i] && b[j])
                        {
                            b[i] = 0;
                            b[j] = 0;
                            count+=1;
                        }   
                        //if they are not same do nothing                     
                    }
                }
            }
        }
        else if(len%2 != 0)
        {
            for (int i=0; i<len/2 ;i++)
            {
                for (int j=(len/2)+1; j<len; j++)
                {
                    if(x[i] == x[j])
                    {
                        if(b[i] && b[j])
                        {
                            b[i] = 0;
                            b[j] = 0;
                            count+=1;
                        }                        
                    }
                }            
            }
        }

        if (count==len/2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        } 
    }
    return 0;
}

