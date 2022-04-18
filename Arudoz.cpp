#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int SelectMemory();
void PortadaEntrada(string filename);
void PortadaSalida(string filename);
void StaticMemory();
void DynamicMemory();
void ignoreLine();

using namespace std;


void ignoreLine()
{
    cin.clear();
    cin.ignore();
}

void PortadaEntrada(string fileName){
    string line = "";
    ifstream inFile;
    inFile.open("Entrada.txt");
    if(inFile.is_open()){
        while (getline(inFile,line))
        {
            cout << line << endl;
        }
    }
    else{
        cout << "File failed to load. " << endl;
        cout << "No nuke displayed. " << endl;
    }
    inFile.close();
}

void PortadaSalida(string fileName){
    string line = "";
    ifstream inFile;
    inFile.open("Corazon.txt");
    if(inFile.is_open()){
        while (getline(inFile,line))
        {
            cout << line << endl;
        }
    }
    else{
        cout << "File failed to load. " << endl;
        cout << "No nuke displayed. " << endl;
    }
    inFile.close();
}


void StaticMemory(){
    int Memory = 2048;
    int eval = 0;

    // int MeSav = Memory;
    int Decision;

    string fileName = "Corazon.txt";
    cout<< "Welcome to Dynamic Memory"<< endl;
    while(eval == 0){
        if (Memory > 0){
        printf("The total memory you have is: %i Kb \n", Memory);
        cout << "How many particion would you like do? Or would you like to quit the process?"<< endl << endl;
        cout << "1) Part 1 == 512 Kb" << endl;
        cout << "2) Part 2 == 256 Kb" << endl;
        cout << "3) Part 3 == 256 Kb" << endl;
        cout << "4) Part 4 == 1024 Kb" << endl;
        cout << "5) EXIT" << endl; 
    
        cin >> Decision;

        while (cin.fail()) {
            ignoreLine();
            cout << "Please enter a number " << endl;
            cin >> Decision;
        }
            switch (Decision)
            {
                case 1:
                    char Ans;
                    cout << "You have been create a new partion with 512 Kb" << endl;
                    Memory = Memory - 512;
                    printf("Now the total memory you have is %i Kb", Memory);
                    cout << "Would you like to create more particion? (y/n)"<<endl;
                    cin>>Ans;
                    switch (Ans)
                    {
                    case 'y':
                        break;
                    case 'n':
                        /* code */
                        eval = + 1;
                        break;

                    default:
                        cout<<"Please indicate yes or no with the y/n characters"<<endl;
                        break;

                    }
                break;

                case 2:
                    char Ans2;
                    cout << "You have been create a new partion with 256 Kb" << endl;
                    Memory = Memory - 256;

                    printf("Now the total memory you have is %i Kb\n" , Memory);
                    cout << "Would you like to create more particion? (y/n)"<<endl;
                    cin>>Ans2;
                    switch (Ans2)
                    {
                    case 'y':
                        /* code */
                        break;
                    case 'n':
                        /* code */
                        eval = + 1;
                        break;

                    default:
                        cout<<"Please indicate yes or no with the y/n characters"<<endl;
                        break;
                    }
                break;

                case 3:
                    char Ans3;
                    cout << "You have been create a new partion with 318 Kb" << endl;
                    Memory = Memory - 318;

                    printf("Now the total memory you have is %i Kb\n", Memory);
                    cout << "Would you like to create more particion? (y/n)"<<endl;
                    cin>>Ans3;
                    switch (Ans3)
                    {
                    case 'y':
                        /* code */
                        break;
                    case 'n':
                        /* code */
                        eval = + 1;
                        break;

                    default:
                        cout<<"Please indicate yes or no with the y/n characters"<<endl;
                        break;
                    }
                break;

                case 4:
                    char Ans4;
                    cout << "You have been create a new partion with 1024 Kb" << endl;
                    Memory = Memory - 1024;

                    printf("Now the total memory you have is %i Kb\n", Memory);
                    cout << "Would you like to create more particion? (y/n)"<<endl;
                    cin>>Ans4;
                    switch (Ans4)
                    {
                    case 'y':
                        /* code */
                        break;
                    case 'n':
                        /* code */
                        eval = + 1;
                        break;

                    default:
                        cout<<"Please indicate yes or no with the y/n characters"<<endl;


                    }
                break;

                case 5:
                    eval = + 1;

                    break;


                }
        }else
        {
            cout<<"Sorry you dont have memory"<<endl;
            eval = + 1;
        }
        
        /*
        if (Memory == 0)
        { 
            cout<<"Sorry you dont have more memory :("<<endl<<endl;
            eval = + 1;
        }*/
    
    

    // break;       
    }
        eval = -1;
        int Answ;
        cout<<"would you like to go to Dinamic Memory or finish the program?  // )"<<endl<<endl;
        cout<<"1) Dinamic Memory" << endl;
        cout<<"2) Finishi" << endl;
        cin>>Answ;
        while (cin.fail()) {
            ignoreLine();
            cout << "Please enter a number " << endl;
            cin >> Answ;
        }
        switch (Answ)
        {
        case 1:
            DynamicMemory();    
            break;
        case 2:
            cout<<"Thank so much to use ArudoISO, see you soon!!!"<<endl;
            PortadaSalida(fileName);
            break;
        default:
            cout<<"Plis select *d* or *f*"<<endl;
        }

}
void DynamicMemory(){
    string fileName = "Corazon.txt";
    int Memory = 2048;
    int Again;
    int Decision;
    int Particion = 0;
    int eval = 0;
    cout<< "Welcome to Dymanic Memory"<< endl;
    while(eval == 0){
        if (Memory > 0){
            printf("The total memory you have for process: %i Kb \n", Memory);
            printf("The total of particion you have: %i  \n", Particion);
            cout << "How many memory would you like to use to process?"<< endl << endl;
            cin >> Decision;
            while (cin.fail()) {
                ignoreLine();
                cout << "Please enter a number " << endl;
                cin >> Decision;
            }
            Memory = Memory - Decision;
            Particion++;
            cout<<"Would you like do more process?" << endl;
            cout<<"1) Yes" << endl;
            cout<<"2) No" << endl;
            cin>>Again;
            while (cin.fail()) {
                ignoreLine();
                cout << "Please enter a number " << endl;
                cin >> Decision;
            }
            switch (Again)
            {
            case 1:
                break;

            case 2:
                eval = + 1;
                break;

            default:
                cout<<"Please chose 1 or 2 option"<<endl;
            }
        }else
        {
            cout<<"Sorry you dont have memory"<<endl;
            eval = + 1;
        }            
    }
        eval = -1;
        int Answ;
        cout<<"would you like to go to Static Memory or finish the program?"<<endl<<endl;
        cout<<"1) Static Memory" << endl;
        cout<<"2) Finish" << endl;
        cin>>Answ;
        while (cin.fail()) {
            ignoreLine();
            cout << "Please enter a number " << endl;
            cin >> Answ;
        }
        switch (Answ)
        {
        case 1:
            StaticMemory();    
            break;
        case 2:
            cout<<"Thank so much to use ArudoISO, see you soon!!!"<<endl;
            PortadaSalida(fileName);
            break;
        default:
            cout<<"Plis select *d* or *f*"<<endl;
        }

}

int SelectMemory(){
    int R;
    cout << "What kind of memory would you like to manage?"<< endl;
    cout << "1) Dynamic Memory " << endl;
    cout << "2) Static Memory " << endl;
    cout << "3) Exit" << endl;
    cin >> R;
    while (cin.fail()) {
        ignoreLine();
        cout << "Please enter a number " << endl;
        cin >> R;
    }
    switch (R)
    {
    case 1:
        DynamicMemory();
        break;
    case 2:
        StaticMemory();
        break;

    case 3: 
        cout<< "Thank you so much for play my game!!! :)" << endl;
        break;

    default:
        cout << "Please selcet one of the two opcion :)" << endl;
        SelectMemory();
        break;

    } 
    return 0;
}

int main(){
    string fileName = "Entrada.txt";
    PortadaEntrada(fileName);
    SelectMemory();
    return 0;
}

