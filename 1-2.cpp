#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0,".1251");
    int rows = 5;
    int columns= 5;
    int array[rows] [columns];

    srand(time(NULL));
    
    /*Задаю масив з рандомних чисел діапазон значень якого від -100 до 100*/
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) { 
            array[i][j]=rand()%200 -100;  
        }   
    }

    //виводжу матрицю 
    cout<<endl;
    cout<<"The main matrix looks like this: ";
    cout<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j< columns; j++) {
            cout<<array[i][j]<<"\t";
        }  
        cout<<endl; 
    }
    cout<<endl;

    //сума елементів в підквадратах 3 на 3 
    cout<<"Sums of matrices 3x3 which belong to the main matrix 5x5 "<<endl;
    int k=3;
    for (int i = 0; i < rows -k +1; i++) {
        for (int j = 0; j < columns-k +1; j++){
            int sum=0;
            for(int p=i; p<k+i; p++)
                for(int q=j; q<k+j;q++)
                    sum +=array[p][q]; 
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
    //ЗАВДАННЯ 2.1 
    //Для кожного рядка матриці надрукувати номери стовпців
    
    cout<<endl;
    cout<<endl<<"Task:2.1"<<endl;
    cout<<"Numbers of column for raws"<<endl;
    cout<<endl;
    for (int j = 0; j< columns; j++) 
    cout<<"\tj= "<<j<<" ";
    cout<<endl;
    

    for (int i = 0; i < rows; i++) {
        cout<<"\n"<<"i= "<<i<<" ";
        for (int j = 0; j< columns; j++) {
            cout<<"\t"<<array[i][j];
        }  
        cout<<endl; 
    }
    cout<<endl;
    
    

    //ЗАВДАННЯ 2.2 
    //Знайти добуток від’ємних елементів, які розміщені на головній діагоналі матриці

    int mult=1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j< columns; j++) {
            if(i==j && array[i][j]<0){
                mult=mult*array[i][j];
            }
        }
    }
    cout<<endl;
    cout<<endl<<"Task:2.2"<<endl;
    cout<<"Product of multiplication of the negative \nelements of the main matrix diagonal is "<<mult;
    cout<<endl;

    //ЗАВДАННЯ 2.3
    //Транспонування квадратної матриці.

    cout<<endl<<"Task:2.3"<<endl<<"(Transposed matrix) "<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j< columns; j++) {
            cout<<array[j][i]<<"\t";
        }
        cout<<endl;
    }
    //Перевірка матриці на семетричність

    for (int i = 0; i < rows; i++) {
        for(int j=i+1;j<columns;j++)
        if(array[i][j]==array[j][i]){
        cout<<"Matrix is symmetrical"<<endl;
        cin.get();
        cin.get();
        return 0;}
        cout<<"Matrix is not symmetrical.";
        cin.get();
        cin.get();
        return 0;
    } 
    return 0;

}

