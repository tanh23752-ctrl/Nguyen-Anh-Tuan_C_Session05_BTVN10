#include <stdio.h>
int main(){
    double so_dien;
    char a;
    printf("So dien tieu thu trong thang: ");
    scanf("%lf", &so_dien);
    printf("loai ho tieu dung: ");
    scanf(" %c", &a);
    if(so_dien > 0 && so_dien <= 50){
        if(a == '1'){
            double Tien_Dien = so_dien*1500.0 + (so_dien*1500)*5.0/100;
            printf("Tien dien cua ho gia dinh: %lf", Tien_Dien);
        }
        else if(a == '2'){
            double Tien_Dien = so_dien* 1500.0 + (so_dien*1500)*10.0/100;
            printf("Tien dien cua ho kinh doanh: %lf", Tien_Dien);
        }
        else if(a = '3'){
            double Tien_Dien = so_dien*1500.0 + (so_dien*1500)*8.0/100;
            printf("Tien dien cua ho san xuat: %lf", Tien_Dien);
        }
        else{
            printf("Khong hop le!");
        }
    }
    else if(so_dien >=51 && so_dien <= 100){
        if(a == '1'){
            double Tien_Dien = so_dien*2000.0 + (so_dien*2000)*5.0/100;
            printf("Tien dien cua ho gia dinh: %lf", Tien_Dien);
        }
        else if(a == '2'){
            double Tien_Dien = so_dien* 2000.0 + (so_dien*2000)*10.0/100;
            printf("Tien dien cua ho kinh doanh: %lf", Tien_Dien);
        }
        else if(a = '3'){
            double Tien_Dien = so_dien*2000.0 + (so_dien*2000)*8.0/100;
            printf("Tien dien cua ho san xuat: %lf", Tien_Dien);
        }
        else{
            printf("Khong hop le!");
        }
    }
    else if(so_dien >= 101 && so_dien <= 200){
        if(a == '1'){
            double Tien_Dien = so_dien*2500.0 + (so_dien*2500)*5.0/100;
            printf("Tien dien cua ho gia dinh: %lf", Tien_Dien);
        }
        else if(a == '2'){
            double Tien_Dien = so_dien* 2500.0 + (so_dien*2500)*10.0/100;
            printf("Tien dien cua ho kinh doanh: %lf", Tien_Dien);
        }
        else if(a = '3'){
            double Tien_Dien = so_dien*2500.0 + (so_dien*2500)*8.0/100;
            printf("Tien dien cua ho san xuat: %lf", Tien_Dien);
        }
        else{
            printf("Khong hop le!");
        }
    }
    else if(so_dien > 200){
        if(a == '1'){
            double Tien_Dien = so_dien*3000.0 + (so_dien*3000)*5.0/100;
            printf("Tien dien cua ho gia dinh: %lf", Tien_Dien);
        }
        else if(a == '2'){
            double Tien_Dien = so_dien* 3000.0 + (so_dien*3000)*10.0/100;
            printf("Tien dien cua ho kinh doanh: %lf", Tien_Dien);
        }
        else if(a = '3'){
            double Tien_Dien = so_dien*3000.0 + (so_dien*3000)*8.0/100;
            printf("Tien dien cua ho san xuat: %lf", Tien_Dien);
        }
        else{
            printf("Khong hop le!");
        }
    }
    else{
        printf("Khong hop le!");
    }
    return 0;
}