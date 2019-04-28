#include <iostream>
using namespace std;
struct data{
char nim[15],nama[15];};
int a,b,c,d;
data jmlh[50];

void inputdata()
{  cout<<"\nBerapa Data Yang Akan diinputkan : ";cin>>b;
   for(c=0;c<b;c++)
   {d=0;d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Nama \t: ";cin>>jmlh[a].nama;
   cout<<"NIM  \t: ";cin>>jmlh[a].nim;
   a++;}};

void lihatdata()
{int i,j;
 cout<<"\n<<===== Tampilan Data =====>>\n\n";
 for(i=0;i<a;i++)
 {j=0;j=j+1;
  cout<<"===============================\n";
  cout<<"\nNO   : "<<j;
  cout<<"\nNAMA : "<<jmlh[i].nama;
  cout<<"\nNIM  : "<<jmlh[i].nim;
  cout<<endl<<endl;}
  cout<<"===============================";};

  void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"Nama \t: ";cin>>jmlh[l].nama;
cout<<"NIM  \t: ";cin>>jmlh[l].nim;
lihatdata();};

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {jmlh[i]=jmlh[i+1];}
 cout<<"\n\n<<===== Data No-"<<x<<" Terhapus =====>>";};

void caridata()
{   int cari,indk,mencari;
    cout<<"\nCari NIM : ";cin>>cari;
    for (c=0;c<b;c++){
        if (d==cari){
            mencari=1;
            indk=1;}}
    cout<<"data indek ke ";
    for (indk=0;indk<d;indk++){
        if (mencari=1)
            cout<<d<<"  ";
        else if (mencari=0)
            cout<<"gagal"<<endl<<endl;}};

int main()
{   int pilih;
    char u;
    aw:
  cout<<"\n<<===== Pilihan Program =====>> ";
  cout<<"\n1. Input Data";
  cout<<"\n2. Lihat Data";
  cout<<"\n3. Edit Data";
  cout<<"\n4. Hapus Data";
  cout<<"\n5. Cari Data";
  cout<<"\n6. Keluar";
  cout<<"\nPilihan Data : ";cin>>pilih;
  if(pilih==1)
   {inputdata();goto aw;}
  else if(pilih==2)
   {lihatdata();goto aw;}
  else if(pilih==3)
   {editdata();goto aw;}
  else if(pilih==4)
   {hapusdata();goto aw;}
  else if(pilih==5)
   {caridata();goto aw;}
  else if(pilih==6)
   {cout<<"\nANDA AKAN MENGAKHIRI PROGRAM (Y/N) : ";cin>>u;
  if(u=='y'||u=='Y')
    {cout<<"\n <<===== PROGRAM BERAKHIR =====>>";}
  else if(u=='n'||u=='N')
    {goto aw;}}
  else { cout<<"Pilihan 1-5";goto aw; }
cout<<"\n  <<=====  TERIMAKASIH  =====>> \n\n";
}