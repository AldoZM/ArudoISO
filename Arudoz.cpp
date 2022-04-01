#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Portada(string fileNAme){
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


void DynamicMemory(){
    int Memory = 2048;
    int MeSav = Memory;
    string fileName = "Corazon.txt";
    Portada(fileName);
    cout << "The total of the memory is: %i"<<endl;
    cout << "W" << endl;
}
void StaticMemory(){

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

