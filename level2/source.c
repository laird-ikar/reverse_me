#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    unsigned int user_index;
    size_t tmp_size;
    int tmp_int;
    bool must_break;
    char pseudostring1;
    char pseudostring2;
    char pseudostring3;
    char pseudostring4; //undefined pseudostring4;
    char user_string [24];
    char compared_string [9];
    unsigned int read_index_user;
    int write_index_compared;
    int nb_scanned_stuff;
    char idk_but_0; //undefined4 idk_but_0;

    idk_but_0 = 0;

    printf("Enter key batard: ");
    nb_scanned_stuff = scanf("%s", user_string);
    if (nb_scanned_stuff != 1)
    {
        printf("No 1\n");
        exit(1);
    }
    if (user_string[1] != '0')
    {
        printf("No 2\n");
        exit(1);
    }
    if (user_string[0] != '0')
    {
        printf("No 3\n");
        exit(1);
    }

    fflush(stdin);
    memset(compared_string, 0, 9);
    compared_string[0] = 'd';
    pseudostring4 = 0;
    read_index_user = 2;
    write_index_compared = 1;
    while(true)
    {
        tmp_size = strlen(compared_string);
        user_index = read_index_user;
        must_break = false;
        if (tmp_size < 8)
        {
            tmp_size = strlen(user_string);
            must_break = user_index < tmp_size;
        }
        printf("user_index: %d, tmp_size: %d\n", user_index, tmp_size);
        printf("strlen(user_string): %d\n", strlen(user_string));
        if (!must_break) {
            break;
        }
        pseudostring1 = user_string[read_index_user];
        pseudostring2 = user_string[read_index_user + 1];
        pseudostring3 = user_string[read_index_user + 2];
        printf("local3d %s\n", &pseudostring1);
        tmp_int = atoi(&pseudostring1);
        compared_string[write_index_compared] = (char)tmp_int;
        printf("local21 : %s | tmp_int: %d\n", compared_string, tmp_int);
        read_index_user = read_index_user + 3;
        write_index_compared = write_index_compared + 1;
    }
    compared_string[write_index_compared] = '\0';
    printf("key: %s\n", compared_string);
    tmp_int = strcmp(compared_string, "delabere");
    if (tmp_int == 0)
    {
        printf("Ok !\n");
        exit(0);
    }
    else {
        printf("No 4\n");
        exit(3);
    }
    return 0;
}