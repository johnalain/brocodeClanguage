# include <stdio.h>
# include <string.h>
int main(){
        char name[50];
        printf("enter your name: ");
        fgets(name, 50, stdin);
        // name[strlen(name) - 1] = '\0';
        if (strlen(name) > 0 && name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
}

        printf("%s\n", name);
        return 0;
}
