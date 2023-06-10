#include <stdio.h>

int check_password(const char pass_1[], const char pass_2[], int pass_cnt, int cnt)
{
    if(cnt!= pass_cnt)
        return 0;
    for (int i = 0; i < pass_cnt; i++)
    {
        if(pass_1[i] != pass_2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char id[8];
    char password[8];
    char password_ch[8];
    int count = 0, pass_count = 0, id_count = 0;
    printf("Create your ID (maximum 8 characters): ");
    while(1)
    {
        scanf("%c", &id[id_count]);
        if(id[id_count] == '\n')
            break;
        id_count++;
    }
    
    pass_count = 0;
    printf("Enter password (maximum 8 characters): ");
    while(1)
    {
        scanf("%c", &password[pass_count]);
        if(password[pass_count] == '\n')
            break;
        pass_count++;
    }
    printf("Confirm password (maximum 8 characters): ");
    count = 0;
    while(1)
    {
        scanf("%c", &password_ch[count]);
        if(password_ch[count] == '\n')
            break;
        count++;
    }

    if(check_password(password, password_ch, pass_count, count)) 
    {
        printf("Your ID is ");
        for (int i = 0; i < id_count; i++)
        {
            printf("%c", id[i]);
        }
        printf("Your password is ");
        for (int i = 0; i < pass_count; i++)
        {
            printf("%c", password[i]);
        }
        return 0;
    }

    while(!check_password(password, password_ch, pass_count, count))
    {
        if(check_password(password, password_ch, pass_count, count)) 
        {
            break;
        }
        else
        {
            printf("The password confirmation does not match\n\n");
        }

        pass_count = 0;
        printf("Enter password (maximum 8 characters): ");
        while(1)
        {
            scanf("%c", &password[pass_count]);
            if(password[pass_count] == '\n')
                break;
            pass_count++;
        }
        printf("Confirm password (maximum 8 characters): ");
        count = 0;
        while(1)
        {
            scanf("%c", &password_ch[count]);
            if(password_ch[count] == '\n')
                break;
            count++;
        }
    }

    if(check_password(password, password_ch, pass_count, count)) 
    {
        printf("Your ID is ");
        for (int i = 0; i < id_count; i++)
        {
            printf("%c", id[i]);
        }
        printf("\n");
        printf("Your password is ");
        for (int i = 0; i < pass_count; i++)
        {
            printf("%c", password[i]);
        }
        printf("\n");
    }
}