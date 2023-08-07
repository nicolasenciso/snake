#include <iostream>

void startGame();
char** fillInitialTable(int* rows, int* columns);

int main(){

    std::cout<<"WELCOME"<<std::endl;
    std::cout<<"PRESS ANY LETTER AND ENTER BEGIN"<<std::endl;
    
    char beginButton;
    std::cin>>beginButton;

    if(beginButton != (char) 0){
        system("clear");
        startGame();
    }else{
        std::cout<<"ADIOS"<<std::endl;
    }

}

void startGame(){
    int rows = 20;
    int columns = 40;
    
    char** table =  fillInitialTable(&rows, &columns);
    for(int i = 0; i < rows; i++){
        std::cout<<table[i]<<std::endl;
        for(int j = 0; j < columns; j++){
            
        }
    }

}

char** fillInitialTable(int* rows, int* columns){
    
    char** table = new char *[(*rows)];
    
    for(int i = 0; i < *rows; i++){
        table[i] = new char[(*columns)];
        for(int j = 0; j < *columns; j++){
            table[i][j] = 'A';
        }
    }

    return table;

}