//Cikls ir kāda koda bloka atkārtošna
//for ciklu izmanto ja ir zināms cik daudzas reizes jāatkarto koda bloks
//while ciklu izmanto ja ir nezināms cik reizes nepieciešams atkārtot vai ja ir vajadzīgs lai atkārtojas tiklīdz kāds nosacījums ir sasniegts
//&& operators nozīmē "un" tas ir lietots ja vajag lai vairāki nosacījumi ir patiesi priekš kādas funkcijas, (x==0 && y==1) šis pieprasījums piepildīsies tikai tad, kad x=0 un y = 1 vienlaikus
//|| nozīmē "Vai", to lieto ja vajag lai viens no vairākiem nosacījumiem būtu patiess, (y==0||x>2) šis pieprasījums būs patiess, vainu ja y = 0 vainu ja x>2
//! nozīmē"nepatiess" to lieto ja vajag lai kāds nosacījums būtu nepatiess piem. != nozīmē nav vienāds ar (y!=0)-šis pieprasījums piepildīsies tikai tad, kad y nebūs vienāds ar 0


#include <iostream>
using namespace std;
int main()
{
float M=1000;
float Mc=0;
float Mg=0;
cout<<"---TRAKAIS BANKOMĀTS VER 1.0---\n JŪSU BILANCE IR 1000 EUR\n\nKOMANDAS;\nAPLŪKOT KONTĀ ESOŠO BILANCI-1\nIESKAITĪT NAUDU-2\nIZŅEMT NAUDU-3\nBEIGT DARBU-0";
int choice;
do{
    cout<<"\nIevadiet komandu atbilstoši jūsi vajadzībām(0;1;2;3):";
    do{
    cin>>choice;
    if(choice!=1&&choice!=2&&choice!=3&&choice!=0)
    {
        cout<<"Neatpazīta komanda\nIevadiet pa jaunam:";
    }
    if(choice==1)
    {
        cout<<"Jūsu bilance ir EUR"<<M<<endl;
         cout<<"\nKOMANDAS;\nAPLŪKOT KONTĀ ESOŠO BILANCI-1\nIESKAITĪT NAUDU-2\nIZŅEMT NAUDU-3\nBEIGT DARBU-0\n";
    }else if(choice ==2)
    {
        cout<<"Ievadiet cik naudu jūs gribat ieskaitīt:";
        cin>>Mc;
        M = Mc+M;
        cout<<"\nOperācija veiksmīga! Tiks ieskaitīts EUR"<<Mc<<"\nKOMANDAS;\nAPLŪKOT KONTĀ ESOŠO BILANCI-1\nIESKAITĪT NAUDU-2\nIZŅEMT NAUDU-3\nBEIGT DARBU-0\n";
    }else if(choice == 3)
    {
        cout<<"Ievadiet cik naudu jūs vēlaties izņemt:";
        do{
            cin>>Mg;
            if(Mg>M)
            {
                cout<<"Jūsu kontā nav pieejama tik daudz nauas, lūdzu ievadiet derīgiu skaitli:";
            }
        }while(Mg > M);
        M = M-Mg;
        cout<<"\nOperācija veiksmīga! Tiks izņemts EUR"<<Mg<<"\nKOMANDAS;\nAPLŪKOT KONTĀ ESOŠO BILANCI-1\nIESKAITĪT NAUDU-2\nIZŅEMT NAUDU-3\nBEIGT DARBU-0\n";
    }else
    {
        cout<<"\nPaldies par bankomāta lietošanu, jauku dienu!";
    }
    
    
    }while(choice!=1&&choice!=2&&choice!=3&&choice!=0);
    
    
    
}while(choice !=0);
    return 0;
}