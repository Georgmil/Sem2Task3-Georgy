#include "Razb.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>
#include <math.h>



int main(){
robbers();
int kol=5;
int n=1;
    while(n){
        printf("\n\n");
        printf("This is a menu, you will now see the options:\n");
        printf("To find robber by name press 1\n");
        printf("To print all robbers press 2\n");
        printf("To print all actual robbers press 3\n");
        printf("To kill a robber press 4\n");
        printf("To add a robber press 5\n");
        printf("To find the richest press 6\n");
        printf("\n");
        printf("Stolbtsi skakunov press 7\n");
        printf("Stolbtsi sablej press 8\n");
        printf("Stolbtsi rubin press 9\n");
        printf("Stolbtsi ozherelija press 10\n");
        printf("Stolbtsi zheni press 11\n");
        printf("Stolbtsi moneti press 12\n");
        printf("Stolbtsi bogatstvo press 13\n");
        printf("\n");
        printf("krugovaja diagrama skakunov press 70\n");
        printf("krugovaja diagrama sablej press 80\n");
        printf("krugovaja diagrama rubin press 90\n");
        printf("krugovaja diagrama ozherelija press 100\n");
        printf("krugovaja diagrama zhen press 110\n");
        printf("krugovaja diagrama moneti press 120\n");
        printf("krugovaja diagrama bogatstvo press 130\n");

        scanf("%d",&n);
        switch(n){
        case 1:
            char robname[10];
            printf("\nWhat is name of the robber you want to know information:  ");
            scanf("%s",&robname);
            najti(robname,kol);break;

        case 2:
            printf("All robbers:\n");
            printfall(kol);
            printf("\n\n");
            itogo(kol);break;
        case 3:
            printf("All(actual) robbers:\n");
            printfall_ac(kol);
            printf("\n\n");
            itogo_ac(kol);break;

        case 4:
            char name[10];
            printf("Who do you want to kill (name): ");
            scanf("%s",&name);
            deleterob(name,kol);
            printf("\n%s is killed",name);break;

        case 5:
            addrobber(kol);
            kol+=1;break;
        case 6:
            richest(kol);break;
        case 7:
            sskauni(kol);break;
        case 8:
            ssabli(kol);break;
        case 9:
            srubini(kol);break;
        case 10:
            sozher(kol);break;
        case 11:
            szheni(kol);break;
        case 12:
            smoneti(kol);break;
        case 13:
            sbog(kol);break;
        case 70:
            kskakuni(kol);break;
        case 80:
            ksabli(kol);break;
        case 90:
            krubini(kol);break;
        case 100:
            kozher(kol);break;
        case 110:
            kzheni(kol);break;
        case 120:
            kmoneti(kol);break;
        case 130:
            kbog(kol);break;

    }

}

    return 0;
}
