#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    unsigned int uVar1;
    size_t sVar2;
    int iVar3;
    bool bVar4;
    char local_3d;
    char local_3c;
    char local_3b;
    char local_3a; //undefined local_3a;
    char local_39 [24];
    char local_21 [9];
    unsigned int local_18;
    int local_14;
    int local_10;
    int local_c; //undefined4 local_c;

    local_c = 0;

    printf("Enter key batard: ");
    local_10 = scanf("%s", local_39);
    if (local_10 != 1)
    {
        printf("No 1\n");
        exit(1);
    }
    if (local_39[1] != '0')
    {
        printf("No 2\n");
        exit(1);
    }
    if (local_39[0] != '0')
    {
        printf("No 3\n");
        exit(1);
    }

    fflush(stdin);
    memset(local_21, 0, 9);
    local_21[0] = 'd';
    local_3a = 0;
    local_18 = 2;
    local_14 = 1;
    while(true)
    {
        sVar2 = strlen(local_21);
        uVar1 = local_18;
        bVar4 = false;
        if (sVar2 < 8)
        {
            sVar2 = strlen(local_39);
            bVar4 = uVar1 < sVar2;
        }
        printf("uVar1: %d, sVar2: %d\n", uVar1, sVar2);
        printf("strlen(local_39): %d\n", strlen(local_39));
        if (!bVar4) {
            break;
        }
        local_3d = local_39[local_18];
        local_3c = local_39[local_18 + 1];
        local_3b = local_39[local_18 + 2];
        printf("local3d %s\n", &local_3d);
        iVar3 = atoi(&local_3d);
        local_21[local_14] = (char)iVar3;
        printf("local21 : %s | ivar3: %d\n", local_21, iVar3);
        local_18 = local_18 + 3;
        local_14 = local_14 + 1;
    }
    local_21[local_14] = '\0';
    printf("key: %s\n", local_21);
    iVar3 = strcmp(local_21, "delabere");
    if (iVar3 == 0)
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