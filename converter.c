#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void ftoc();
void ctof();
void cmtom();
void mtocm();
void divider();

void divider(){
    printf("-----------------------------------------------------\n");
}

float far,cel,cm,m;
float  ten = 10;
float pang = 2;
float peng = -2;

int main(){
    system("cls");
    int choose;
    printf("\t== WELCOME TO CONVERTER DATA ==\n");
    divider();

    printf("Select what u want!\n");
    printf("1. Farenheit to celcius\n");
    printf("2. Celcius to farenheit\n");
    printf("3. Centimeter to meter\n");
    printf("4. Meter to centimeter\n");
    printf("Choose: ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        ftoc();
        break;
    case 2:
        ctof();
        break;
    case 3:
        cmtom();
        break;
    case 4:
        mtocm();
        break;
    
    default:
        printf("Pilihan tidak tersedia\n");
        main();
        break;
    }

    return 0;
}


void ftoc(){
    system("cls");
    printf("\t== Farenheit to Celcius Data ==\n");
    divider();

    printf("Input the farenheit data: ");
    scanf("%f", &far);

    cel = (far - 32) * 5/9;

    printf("Celcius data right now: %.2f\n", cel);

    system("pause");
    main();
}


void ctof(){
    system("cls");

    printf("\t== Celcius to Ferenheit Data ==\n");
    divider();

    printf("Input the celcius data: ");
    scanf("%f", &cel);

    far = cel * 9/5 + 32;

    printf("Celcius data is: %.2f\n", far);


    system("pause");
    main();
}


void cmtom(){

    system("cls");

    printf("\t== Centimeter to Meter Data ==\n");
    divider();

    printf("Insert the Centimeter(cm) data: ");
    scanf("%f", &cm);

    m = cm * pow(ten,pang);

    printf("Meter(m) data is: %.2f\n", m);

    system("pause");
    main();
}


void mtocm(){

    system("cls");

    printf("\t== Meter to Centimeter Data ==\n");
    divider();

    printf("Insert the Meter(m) data: ");
    scanf("%f", &m);

    cm = m * pow(ten,peng);

    printf("Centimeter(cm) data is: %.2f\n", cm);

    system("pause");
    main();
}