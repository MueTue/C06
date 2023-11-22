#include <stdio.h>
#include <unistd.h>

void main(int argc, char *argv[])    
{
    
    int i = argc-1;
    int j;
    while(i > 0)
    {
        j = 0;

        while(argv[i][j])
        {
            write(1,&argv[i][j],1);
            j++;
        } 
        write(1,"\n",2);

        i--;
    }
}