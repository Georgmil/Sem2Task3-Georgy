
#include "Razb.hpp"


struct R{
    char Name[10];
    bool zhivoj;
    int skakuni;
    int sabli;
    int rubini;
    int ozher;
    int zheni;
    int moneti;
    int bogatstvo;
};
struct R band[40];

void robbers(){
    strcpy(band[0].Name,"Ali");
    band[0].zhivoj=true;
    band[0].skakuni=3;
    band[0].sabli=2;
    band[0].rubini=10;
    band[0].ozher=4;
    band[0].zheni=1;
    band[0].moneti=10;
    band[0].bogatstvo=(band[0].skakuni*500 +(band[0].sabli*100)+ (band[0].rubini*50)+(band[0].ozher*10)+(band[0].zheni*200)+band[0].moneti);


    strcpy(band[1].Name,"Ismail");
    band[1].zhivoj=true;
    band[1].skakuni=4;
    band[1].sabli=5;
    band[1].rubini=5;
    band[1].ozher=6;
    band[1].zheni=1;
    band[1].moneti=100;
    band[1].bogatstvo=(band[1].skakuni*500 +(band[1].sabli*100)+ (band[1].rubini*50)+(band[1].ozher*10)+(band[1].zheni*200)+band[1].moneti);

    strcpy(band[2].Name,"Mustafa");
    band[2].zhivoj=true;
    band[2].skakuni=1;
    band[2].sabli=1;
    band[2].rubini=3;
    band[2].ozher=2;
    band[2].zheni=1;
    band[2].moneti=9;
    band[2].bogatstvo=(band[2].skakuni*500 +(band[2].sabli*100)+ (band[2].rubini*50)+(band[2].ozher*10)+(band[2].zheni*200)+band[2].moneti);

    strcpy(band[3].Name,"Azamat");
    band[3].zhivoj=true;
    band[3].skakuni=8;
    band[3].sabli=10;
    band[3].rubini=30;
    band[3].ozher=25;
    band[3].zheni=4;
    band[3].moneti=130;
    band[3].bogatstvo=(band[3].skakuni*500 +(band[3].sabli*100)+ (band[3].rubini*50)+(band[3].ozher*10)+(band[3].zheni*200)+band[3].moneti);

    strcpy(band[4].Name,"Shamil");
    band[4].zhivoj=true;
    band[4].skakuni=2;
    band[4].sabli=6;
    band[4].rubini=30;
    band[4].ozher=5;
    band[4].zheni=1;
    band[4].moneti=7;
    band[4].bogatstvo=(band[4].skakuni*500 +(band[4].sabli*100)+ (band[4].rubini*50)+(band[4].ozher*10)+(band[4].zheni*200)+band[4].moneti);

}






void printfi(int i){
    printf("%s",band[i].Name);
    if(band[i].zhivoj==true)
        printf("         Da");
    else
        printf("         Net");
    printf("           %d           %d            %d             %d               %d          %d           %d\n",band[i].skakuni, band[i].sabli,
            band[i].rubini,
            band[i].ozher,
            band[i].zheni,
            band[i].moneti,
            band[i].bogatstvo);



}
void najti(char robname[10],int kol){
    printf("Ceni: skakuni=500dinar; sablja=100;rubin=50; ozher=10; zhena=200 dinar\n\n");
    printf("Imja       Zhivoj       Skakuni       Sabli       Rubini       Ozherelija       Zheni       Moneti       Boagtstvo\n");
    for(int i=0;i<kol;i++){
        if(strcmp(robname,band[i].Name)==0){
            printf("\n");
            printfi(i);
            }

    }
}

void printfall(int kol){
printf("Ceni: skakuni=500dinar; sablja=100;rubin=50; ozher=10; zhena=200 dinar\n\n");
printf("Imja       Zhivoj       Skakuni       Sabli       Rubini       Ozherelija       Zheni       Moneti       Boagtstvo\n");
    for(int i=0;i<kol;i++){
        printf("\n\n");
        printfi(i);
    }
}
void printfall_ac(int kol){
printf("Ceni: skakuni=500dinar; sablja=100;rubin=50; ozher=10; zhena=200 dinar\n\n");
printf("Imja       Zhivoj       Skakuni       Sabli       Rubini       Ozherelija       Zheni       Moneti       Boagtstvo\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            printf("\n\n");
            printfi(i);}
    }
}


void itogo_ac(int kol){
    int summa_bog=0,summa_skak=0,summa_sab=0,summa_zhen=0,summa_ozher=0,summa_rubin=0,summa_monet=0;
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    for(int i=0;i<kol;i++){

        if(band[i].zhivoj==true){
            summa_bog+=band[i].bogatstvo;
            summa_skak+=band[i].skakuni;
            summa_sab+=band[i].sabli;
            summa_zhen+=band[i].zheni;
            summa_ozher+=band[i].ozher;
            summa_rubin+=band[i].rubini;
            summa_monet+=band[i].moneti;}
    }
    printf("ITOGO                    %d             %d          %d               %d             %d           %d           %d\n",
            summa_skak
           ,summa_sab
           ,summa_rubin
           ,summa_ozher
           ,summa_zhen
           ,summa_monet
           ,summa_bog);
    }
void itogo(int kol){
    int summa_bog=0,summa_skak=0,summa_sab=0,summa_zhen=0,summa_ozher=0,summa_rubin=0,summa_monet=0;
    printf("----------------------------------------------------------------------------------------------------------------------\n");

    for(int i=0;i<kol;i++){
        summa_bog+=band[i].bogatstvo;
        summa_skak+=band[i].skakuni;
        summa_sab+=band[i].sabli;
        summa_zhen+=band[i].zheni;
        summa_ozher+=band[i].ozher;
        summa_rubin+=band[i].rubini;
        summa_monet+=band[i].moneti;}
     printf("ITOGO                    %d             %d          %d               %d             %d           %d           %d\n",
            summa_skak
           ,summa_sab
           ,summa_rubin
           ,summa_ozher
           ,summa_zhen
           ,summa_monet
           ,summa_bog);
    }

void deleterob(char robname[10],int kol){
    for(int i=0;i<kol;i++){
        if(strcmp(robname,band[i].Name)==0 && band[i].zhivoj==true){
            band[i].zhivoj=false;
            break;}

}

}

void addrobber(int kol){
    printf("What is the name of robber: ");
    scanf("%s",&band[kol].Name);
    band[kol].zhivoj=true;
    printf("\nSkolko skaunov u %s? ",band[kol].Name);
    scanf("%d",&band[kol].skakuni);
    printf("\nSkolko sablij u %s? ",band[kol].Name);
    scanf("%d",&band[kol].sabli);
    printf("\nSkolko rubin u %s? ",band[kol].Name);
    scanf("%d",&band[kol].rubini);
    printf("\nSkolko ozherelij u %s? ",band[kol].Name);
    scanf("%d",&band[kol].ozher);
    printf("\nSkolko zhen u %s? ",band[kol].Name);
    scanf("%d",&band[kol].zheni);
    printf("\nSkolko monet u %s? ",band[kol].Name);
    scanf("%d",&band[kol].moneti);
    band[kol].bogatstvo=(band[kol].skakuni*500 +(band[kol].sabli*100)+ (band[kol].rubini*50)+(band[kol].ozher*10)+(band[kol].zheni*200)+band[kol].moneti);

    printf("\n\n");
    printf("robber has sucsefully joind the team\n");
}

void richest(int kol){
    int richi=0;
    int richid;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].bogatstvo>richi){
                richi=band[i].bogatstvo;
                richid=i;}
        }

    }
    printf("The richest is:\n");
    printf("Imja       Zhivoj       Skakuni       Sabli       Rubini       Ozherelija       Zheni       Moneti       Boagtstvo\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].bogatstvo==band[richid].bogatstvo){
                printf("\n");
                printfi(i);}
        }
    }


}

void sskauni(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].skakuni>maks){
                maksid=i;
                maks=band[i].skakuni;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].skakuni)/ float(band[maksid].skakuni));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- skakunov\n",num+1,band[i].Name,band[i].skakuni);
            num+=1;

        }
    }

    getch();
    closegraph();
}

void ssabli(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].sabli>maks){
                maksid=i;
                maks=band[i].sabli;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].sabli)/ float(band[maksid].sabli));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- sablej\n",num+1,band[i].Name,band[i].sabli);
            num+=1;

        }
    }

    getch();
    closegraph();
}

void srubini(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].rubini>maks){
                maksid=i;
                maks=band[i].rubini;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].rubini)/ float(band[maksid].rubini));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- rubin\n",num+1,band[i].Name,band[i].rubini);
            num+=1;

        }
    }

    getch();
    closegraph();
}

void sozher(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].ozher>maks){
                maksid=i;
                maks=band[i].ozher;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].ozher)/ float(band[maksid].ozher));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- ozherelij\n",num+1,band[i].Name,band[i].ozher);
            num+=1;

        }
    }

    getch();
    closegraph();
}
void szheni(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].zheni>maks){
                maksid=i;
                maks=band[i].zheni;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].zheni)/ float(band[maksid].zheni));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- zhen\n",num+1,band[i].Name,band[i].zheni);
            num+=1;

        }
    }

    getch();
    closegraph();
}
void smoneti(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].moneti>maks){
                maksid=i;
                maks=band[i].moneti;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].moneti)/ float(band[maksid].moneti));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- monet\n",num+1,band[i].Name,band[i].moneti);
            num+=1;

        }
    }

    getch();
    closegraph();
}




void sbog(int kol){


    int width=1200;
    int height=650;
    int kolzhiv=0;

    initwindow(width,height);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(0,0,2);
    setcolor(BLACK);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true)
            kolzhiv+=1;
    }

    float width_stolb=width/((2*kolzhiv)+1);
    int maks=0; int maksid=0;


    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            if(band[i].bogatstvo>maks){
                maksid=i;
                maks=band[i].bogatstvo;}
            }
        }
    float propor;
    int num=0;
    printf("Stolbsii:\n");
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            propor=(float(band[i].bogatstvo)/ float(band[maksid].bogatstvo));

            line(width_stolb+width_stolb*2*num,height,width_stolb+width_stolb*2*num,height-(height*propor));
            line(width_stolb+width_stolb*2*num,height-(height*propor),2*width_stolb+width_stolb*2*num,height-(height*propor));
            line(2*width_stolb+width_stolb*2*num,height,2*width_stolb+width_stolb*2*num,height-(height*propor));
            printf("Stolbets %d -- %s-- %d-- bogatstvo\n",num+1,band[i].Name,band[i].bogatstvo);
            num+=1;

        }
    }

    getch();
    closegraph();
}

void ksabli(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);

    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].sabli;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].sabli)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}

void kskakuni(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].skakuni;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].skakuni)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}


void krubini(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].rubini;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].rubini)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}

void kzheni(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].zheni;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].zheni)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}

void kmoneti(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].moneti;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].moneti)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}

void kozher(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].ozher;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].ozher)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}

void kbog(int kol){


    int width=1200;
    int height=650;

    initwindow(width,height);
    cleardevice();

    setlinestyle(0,0,4);
    outtext("Chtobi zakrit: Nazhmite mishju na luboe mesto na ekrane(ne krestik), i potom luboju klavishu!!!!");

    int summa=0;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            summa+=band[i].bogatstvo;
        }
    }
    float prosent;
    float start=0,last=0;
    int last1;
    for(int i=0;i<kol;i++){
        if(band[i].zhivoj==true){
            prosent=(float)((band[i].bogatstvo)*360)/(float)summa;
            last+=prosent;
            last1=ceil(last);
            setfillstyle(SOLID_FILL,BLUE);
            pieslice(width/2,height/2,start,last1,300);
            start=last;
        }
    }

    getch();
    closegraph();
}
