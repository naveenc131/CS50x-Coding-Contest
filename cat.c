#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
int main(int argc, char const *argv[])
{
	int counter = 0;
    char *input = get_string();
    char *token = strtok(input," ");
    char *prefix = "";
    if(input == NULL)
        {
       printf("There is no box");
       }
        
	while(token != NULL)
	{

		  counter = counter + 1;
			if (strcmp(token,"cat") == 0 )
			{
				if(counter % 10 == 1 & counter < 100)
                {
                    prefix = "st";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                }
                else if(counter % 10 == 2)
                 {
                    prefix = "nd";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                    
                }
                 else if(counter % 10 == 3)
                 {
                    prefix = "rd";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                    
                }
                else
                {
                    prefix = "th";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                    
                }
           
			}

		token = strtok(NULL, " ");
	}
	return 0;
}