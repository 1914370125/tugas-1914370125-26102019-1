#include<stdio.h>
#include<stdio.h>


void nujian(float nuas,float nuts);
float ntotal;
char nhuruf;


int main(void)
{
char nama[30],makul[30];
int nim;
float a,b;
printf("====================================================\n");
printf("Menghitung Indeks Nilai Akhir\n");
printf("\t\t\tNama : ROMA ASI BR PARHUSIP\n");
printf("====================================================\n");
printf("\n\tMasukkan nama anda :");
gets(nama);
printf("\n\tMasukkan mata kuliah anda  :");
gets(makul);
printf("\n\tMasukkan NIM Anda   :");
scanf("%d",&nim);
printf("\n\tMasukkan Nilai UAS Anda  :");
scanf("%f",&a);
printf("\n\tMasukkan Nilai UTS Anda  :");
scanf("%f",&b);
nujian(a,b);
return (0);

}


void nujian(float nuas,float nuts)

{

ntotal=(nuas*0.6)+(nuts*0.4);
printf("\tNilai Anda adalah   :%.2f\n",ntotal);
if(ntotal>=60){
printf("\tKeterangan Anda    :Lulus\n\n");

}

else if(ntotal<60){
printf("\tKeterangan Anda   :Gagal\n\n");

}

if(ntotal>=85)nhuruf='A';
else if(ntotal>=75) nhuruf='B';
else if(ntotal>=70) nhuruf='C';
else if(ntotal>=65) nhuruf='D';
else nhuruf='E';



printf("\n\tNilai Huruf Anda adalah :%c\n",nhuruf);
printf("=====================================================\n\n");

}
