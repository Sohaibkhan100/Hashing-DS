#include<iostream>
using namespace std;

int size;
class HashTable
{
public: 
int *array;
HashTable(){
    array = new int [size];
    
}
 void handingCollision() 
    {
        for (int i = 0; i < size; i++)
        {
            array[i] = -1;
        }
    }
     void PlacingData(int value)
    {

        int currentValue = value%size;

        if (array[currentValue] == -1) 
        {
            array[currentValue] = value;
        }
        
        else
        {
            while (array[currentValue] != -1)
            { 

                currentValue = (currentValue + 1) % size; 
            }
            array[currentValue] = value;
            currentValue++;
        }
    }
     int inputElements(int i){
            cout<<"enter elements = ";
            cin>>i;
            PlacingData(i);

        return 0;
    }
      int display()
    {

        for (int i = 0; i < size; i++)
        {
            cout << i << " =>" << array[i] << endl;
        }
        return 0;
    }
     

  
 

};
int main(){
HashTable obj1;
cout<<"enter size of array = ";
cin>>size;
obj1.handingCollision();
    for (int i = 0; i < size; i++)
        {
           obj1.inputElements(i);

        }
        

    obj1.display();
}
