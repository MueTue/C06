#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] || s2[i])
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            if(s1[i] < s2[i])
            {
                return -1;
            }

            if(s1[i] > s2[i])
            {
                return 1;
            }
        }
    }
    return 0;
}

void main(int argc, char *argv[])
{
    argc--;
    int i = 1;
    int j = 2;
    
    while(i <= argc-1)
    {
        
        while(j <= argc)
        {
            
            if(ft_strcmp(argv[i], argv[j]) > 0)
            {
                char * temp;
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }

            j++;
        }
        j = 2;
        i++;
    }
    i = 1;
    j = 0;

    while(i <= argc)
    {
        j = 0;

        while(argv[i][j])
        {
            write(1,&argv[i][j],1);
            j++;
        } 
        write(1,"\n",2);

        i++;  
    }

}