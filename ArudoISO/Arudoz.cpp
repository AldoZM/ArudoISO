#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Portada(string fileName){
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



void StaticMemory(){
    int Memory = 2048;
    int MeSav = Memory;
    int Decision;
    string fileName = "Corazon.txt";
    cout<< "Welcome to Dynamic Memory"<< endl;
    printf("The total memory you have is: %i Kb \n", Memory);
    cout << "How many particion would you like do? Or would you like to quit the process?"<< endl;
    cout << "Part 1 == 512 Kb" << endl;
    cout << "Part 2 == 256 Kb" << endl;
    cout << "Part 3 == 256 Kb" << endl;
    cout << "Part 4 == 1024 Kb" << endl;
    cout << "EXIT" << endl; 
  
    cin >> Decision;
    if(Memory != 0){
        switch (Decision)
        {
        case 1:    
            int Ans;
            cout << "You have been create a new partion with 512 Kb" << endl;
            Memory = Memory - 512;
            printf("Now the total memory you have is %i Kb", Memory);
            cout << "Would you like to create more particion? (y/n)"<<endl;
            cin>>Ans;
            switch (Ans)
            {
            case 'y':
                /* code */
                DynamicMemory();
                break;
            case 'n':
                /* code */
                SelectMemory();
                break;

            default:
                cout<<"Please indicate yes or no with the y/n characters"<<endl;

            }

        case 2:
            int Ans;
            cout << "You have been create a new partion with 256 Kb" << endl;
            Memory = Memory - 256;

            printf("Now the total memory you have is %i Kb", Memory);
            cout << "Would you like to create more particion? (y/n)"<<endl;
            cin>>Ans;
            switch (Ans)
            {
            case 'y':
                /* code */
                DynamicMemory();
                break;
            case 'n':
                /* code */
                SelectMemory();
                break;

            default:
                cout<<"Please indicate yes or no with the y/n characters"<<endl;

            }

        case 3:
            int Ans;
            cout << "You have been create a new partion with 318 Kb" << endl;
            Memory = Memory - 318;

            printf("Now the total memory you have is %i Kb", Memory);
            cout << "Would you like to create more particion? (y/n)"<<endl;
            cin>>Ans;
            switch (Ans)
            {
            case 'y':
                /* code */
                DynamicMemory();
                break;
            case 'n':
                /* code */
                SelectMemory();
                break;

            default:
                cout<<"Please indicate yes or no with the y/n characters"<<endl;

            }
        case 4:
            int Ans;
            cout << "You have been create a new partion with 1024 Kb" << endl;
            Memory = Memory - 1024;

            printf("Now the total memory you have is %i Kb", Memory);
            cout << "Would you like to create more particion? (y/n)"<<endl;
            cin>>Ans;
            switch (Ans)
            {
            case 'y':
                /* code */
                DynamicMemory();
                break;
            case 'n':
                /* code */
                SelectMemory();
                break;

            default:
                cout<<"Please indicate yes or no with the y/n characters"<<endl;

            }

        }
    }else{
        cout<<"Sorry you dont have more memory :("<<endl;
        cout<<"would you like to go to Dinamic Memory"<<endl;
        
    }
}
void DynamicMemory(){

}

int SelectMemory(){
    int R;
    cout << "What kind of memory would you like to manage?"<< endl;
    cout << "1) Dynamic Memory " << endl;
    cout << "2) Static Memory " << endl;
    cin >> R;
    switch (R)
    {
    case 1:
        DynamicMemory();
        break;
    case 2:
        StaticMemory();
        break;
    default:
        cout << "Please selcet one of the two opcion :)" << endl;
        SelectMemory();
    }
    return R;
}

int main(){
    string fileName = "Entrada.txt";
    Portada(fileName);
    SelectMemory();
    return 0;
}

