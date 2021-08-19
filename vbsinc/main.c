#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    FILE* fichier = NULL;
    fichier = fopen("main.vbs", "w+");
    fclose(fichier);
    fichier = fopen("main.vbs", "w");
    if (fichier != NULL)
    {
        fprintf(fichier, "msgbox(\"kgh\")");
        fclose(fichier);
    }


    system("start main.vbs");
    return 0;
}
