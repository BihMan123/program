#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main() {
    bool prezis = 0;
    int clas;
    string user;
    int choice1 = 0;
    int atbilde;
    cout << "hallo vecit, kā tevi sauc?" << endl;
    cin >> user;

    cout << "Skaidrs, tevi sauc:" << user << "   Lempis." << endl
         << "labi vecit tev vajag ceļot uz priekšu kaut kad, es esmu dievs btw, "
         << "krc ir trīs ceļi pa kuru tu vari doties, vari būt mūks-1 vai burvis-2, ievadi skaitli tai klasei kuru gribi:";

    // izvēle klasei
    do {
        cin >> choice1;
        if (choice1 != 1 && choice1 != 2 && choice1 != 3) {
            cout << "nav labi vecit, ievadi ko sakarīgu\n";
        }
    } while (choice1 != 1 && choice1 != 2 && choice1 != 3);

    switch (choice1) {
        case 1:
            cout << "labs ir vecais, tu esi mūks\n";
            clas = 1;
            break;
        case 2:
            cout << "gudrinieks esi! 😎\n\n";
            clas = 2;
            break;
        case 3:
            cout << "trakosi!\n";
            clas = 3;
            break;
    }

    cout << "laiks ceļot lamzak\n";

    if (clas == 1) {
        cout << "tev ir opcija ceļot vainu uz baznīcu-1, vai uz kapsētu-2, kur dosies?\n";

        // izvēle baznīca/kapsēta
        do {
            cin >> choice1;
            if (choice1 != 1 && choice1 != 2) {
                cout << "nav labi vecit, ievadi ko sakarīgu\n";
            }
        } while (choice1 != 1 && choice1 != 2);

        if (choice1 == 1) {
            cout << "tu tagad ceļo uz baznīcu un pa ceļam satiec kalna lielo smirdoņu\n"
                    "'Ei nu, pidar, es esmu kalna lielais smirdīgais, D, un es tev spļaušu virsū'\n\n"
                    "Tev ir opcija tikt uzspļautam un doties uz baznīcu smirdīgam-1, vai sevi nogalināt-2\n";

            // izvēle smirdēt/nogalināt sevi
            do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
            } while (choice1 != 1 && choice1 != 2);

            if (choice1 == 1) {
                cout << "Tu tagad esi smirdīgs, tiekot baznīcā tu nogalini visus apkārt ar savu auru, tu sāc lūgties MAN žēlastību, tu to nedabūsi\n\nspēle beidzās ending-1";
            } else {
                cout << "Tu izvēlējies sevi nogalināt. vismaz tu paturēji savu cieņu\n\n Spēle beidzās, ending 2";
            }
            //kapsētas encounter
        } else {
            cout << "Tu dodies uz kapsētu\nTiekot kapsētā tu redzi feldžas svēto garu, viņš ierunājas:\n'KO TU ,STULBENI, DARI MANĀ KAPSĒTĀ?'\n(VIŅŠ GAIDA ATBILDI):";
            cin>>atbilde;
            cout<<"Feldžas gars tevi pārlauž 3 gabalos\n\nLabais vecīt tu spēli beidzi";
        }
        //Burvja ceļā
    } else if (clas == 2) {
        cout << "Sākot savu burvīgo ceļu, tev ir opcija doties vainu uz kapsētu-1, vai uz barbaru cilšu ciematiņu-2\nievadiet savu izvēli:";
        do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
            } while (choice1 != 1 && choice1 != 2);
            //kapsēta
            if(choice1==1){
                cout << "Tu dodies uz kapsētu\nTiekot kapsētā tu redzi feldžas svēto garu, viņš ierunājas:\n'KO TU ,STULBENI, DARI MANĀ KAPSĒTĀ?'\nViņš gaida atbildi, bet tev ir perfekts moments viņam pa celi iešaut ar burvīgo ziču zaru-1, vai arī viņu uzklausīt-2, vai mēģināt bēgt-3:";
                do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
            } while (choice1 != 1 && choice1 != 2);
            if(choice1==2 || choice1==3){
                cout<<"Feldžas gars tevi noķer un viņš tevi saspiež kā zobupastas tūbiņu\n\nSpēli beidzi, ending 2";
            }else{
                cout<<"Tu trāpi pa Feldžas vārgo celi un viņš ierēcas'GAGAGAGAGa MANS CEEEEELIiiii-'\n viņš izgaisa un palika viņa vietā krāteris\n\nPabeidzi spēli, ending 3 ";
            }
            //barbs
            }else{
                cout<<"Tu ceļo uz trako Barbaru cilti\n\nTiekot tur, tu redzi Valtera māti Viņa sāk vāvuļot:\n\n'Ugu, KOO TU SEIT DORI DAndak, EJ GLēt'\nViņa runā kaut kādas muļķības, bet tu uz zemes redzi zelta gabaliņu\nTu vari Mēģināt viņas uzmanību novērst, pametot to-1,\nVai tu vari viņai ar ziču zaru iešaut-2\nizvēlies:\n";
                        do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
            } while (choice1 != 1 && choice1 != 2);
            if(choice1==1){
                cout<<"\ntu pamet malā zelta gabaliņu un Viņa pēc tā aizlido itkā ar magnētu\n\nTu ieceļo barbaru ciltī un blakus tu redzi trakotu prezi uz zemes, ko tu uzliec uz ziču mieta\n\n";
                prezis = 1;
                cout<<"valtera māte tev lido mugurā, Tu vari vainu mēģināt bēgt-1, vai iedot viņai ziču-2";
                do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
               
            } while (choice1 != 1 && choice1 != 2);
             if(choice1==1){
                    cout<<"Tu taču esi neveikls, tevi noķer Valtera mamm un tevi ieslodza cietumā, kur tu nomirsti\n\nspēle beidzās-ending 4";
                 return 0;
                }else{
                    cout<<"tu viņai pieskaries ar ziču mietu un viņa izgaist,Barbari tevi aizdzen uz pilsētu\n\n";
                }
                
            }else{
                cout<<"viņa uzsprāgst un visi barbari tevi aizdzen uz pilsētu\n\n";
            }
            cout<<"Nokļuvis pilsētā, visapkārt izskatas ļoti bēdīgi, ir līķi un cilvēkiem nav ēdiena\nattālumā tu redzi trakotu pili, spīdošu un milzīgu\n\n";
            cout<<"'STOP STULBAIS LAMZAK, TU IZSKATIES PĀRĀK KRUTI, TĀTAD TU ESI NELIKUMĪGS'sargs saka\n'TU TIKSI VESTS UZ KARALI'\nTu vari ļauties sargiem un doties pie Karaļa-1, vai viņiem uzbrukt-2\n";
            do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
               
            } while (choice1 != 1 && choice1 != 2);
            if(choice1==1){
                cout<<"Tevi ieliek dzelžos un ved pie Karaļa\nvienalga cik centies tev nesanak izslidet no dzelžiem.\n satiekot karali viņš pasludina, ka tu esi nevērtīgs un tevi nogalina\n\nBeigas, ending5";
            }else if(prezis ==1){
                cout<<"tu uzbrūc sargiem un pateicoties prezim, viņi visi izgaist\nTu turpini ceļu līdz karalim, esi nolēmis viņu noslepkavot\n\nTiekot pie karaļa viņš uzceļas kājās un saka:'Kā tu uzdrīkstējies, MANĀ pilsētā nogalināt MANUS sargus, nu viss, tev ir beigas'";
                cout<<"\nViņš tev nāk virsū ar trakotu ātrumu, tev 2 opcijas, Sargāties ar ziču mietu-1, vai arī nesties viņam virsū-2\n";
                do {
                cin >> choice1;
                if (choice1 != 1 && choice1 != 2) {
                    cout << "nav labi vecit, ievadi ko sakarīgu\n";
                }
               
            } while (choice1 != 1 && choice1 != 2);
            if(choice1==1){
            cout<<"tu ieņem defense pozīciju un karalis tev virsū uzlido, viņš tev trāpa, bet ne bez sekām, viņš paklupst tev pāri un pateicoties ziču mietam, nomirst, viņš tevi atstāja kritiskā stadijā, tu izasiņo uz karaliskās grīdas, bet vismaz tu izglābi pilsētu\n\nTrue ending-hero";
            }else{
                cout<<"tu nesies viņam virsū un sasitoties ar viņu tu izlaid milzu sprādzienu, kas nones visu pilsētu, nogalinot burtiski visus\n\nBeigas, true ending-chaos";
            }
            }else{
                cout<<"Zič nebija pietiekami stiprs, tas tikai vienu sargu nones līdz tas bija sabojāts, tevi nogalināja uz vietas\n\nBeigas, ending6";
            }
            
            }
        
    } 

    return 0;
}
