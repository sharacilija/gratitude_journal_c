#include <stdio.h>
#include <string.h>

#define BUFFER_LEN 10000
char buffer[BUFFER_LEN];

int main()
{
    
    puts("Welcome to your daily gratitude journal. It's awesome you keep up the practice.");
    puts("Enter 3 things that you are grateful for.");

    for (int i = 0; i < 3; ++i) 
    {
        memset(buffer, 0, BUFFER_LEN);
        fgets(buffer, BUFFER_LEN, stdin);
        FILE *fp = fopen("gratitude_db.txt", "a");
        fputs(buffer, fp);
        fclose(fp);
    }

    puts("Thank you. See you tomorrow.");

    return 0;
}
