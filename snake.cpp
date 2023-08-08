#include <iostream>


#define print(x) std::cout<<x<<std::endl;

void startGame();
char** fillInitialTable(int* rows, int* columns);
void play(char** table, int* rows, int* columns);
void printTable(char** table, int* rows, int* columns);

int main(){

    system("clear");
    print("WELCOME");
    print("PRESS ANY LETTER AND ENTER BEGIN");
    
    char beginButton;
    std::cin>>beginButton;

    if(beginButton != (char) 0){
        system("clear");
        startGame();
    }else{
        print("ADIOS");
    }
}

void startGame(){
    int rows = 20;
    int columns = 60;

    char** table =  fillInitialTable(&rows, &columns);
    play(table, &rows, &columns);

    delete table;
}

char** fillInitialTable(int* rows, int* columns){
    
    char** table = new char* [(*rows)];
    
    for(int i = 0; i < *rows; i++){
        table[i] = new char[(*columns)];
        for(int j = 0; j < *columns; j++){
            if(i == 0 || i == *rows - 1 || j == 0 || j == *columns - 1){
                table[i][j] = 'W';
            }else{
                table[i][j] = '_';
            }
        }
    }
    return table;
}

void printTable(char** table, int* rows, int* columns){
   
    for(int i = 0; i < *rows; i++){
        print(table[i]);
    }
}


void play(char** table, int* rows, int* columns){

    int X = (*rows)/2;
    int Y = (*columns)/2;
    for(int i = 0; i < 5; i++){
        table[X][Y - i] = 'O';
    }
    printTable(table, rows, columns);
    
}