#include <bits/stdc++.h>
using namespace std;

class Vector{
    private:
    int capacity;
    int size;
    int* arr;
    
    public:

    Vector(){
        capacity=1;
        size=0;
        arr= new int[capacity];
    }

    ~Vector(){
        delete[] arr;
    }

    void resize(){
        int old_cap=capacity;
        capacity*=2;
        int* arr2 = new int[capacity];
        for(int i=0;i<old_cap;i++){
            arr2[i]=arr[i];
        }
        delete[] arr;
        arr=arr2;
    }

    void push_back(int value){
        if(size>=capacity){
            resize();
        }
        arr[size]=value;
        size++;
    }

    void pop_back(){
        if(size<=0){
            cout<<"No element lef tot remove";
            return;
        }
        size--;
    }

    int get_size(){
        return size;
    }

    int get_capacity(){
        return capacity;
    }

    int& operator[] (int index){
        if(index<0||index>=size){
            cout<<"Erro, index out of bouds!"<<endl;
        }
        return arr[index];
    }

};



int main(){
    
    Vector v;

    for(int i = 1; i <= 5; i++) {
        v.push_back(i * 10);
    }

    cout << "Size: " << v.get_size() << " | Capacity: " << v.get_capacity() << endl;

    // Test the subscript operator []
    v[2] = 99; // Modifying an element

    cout << "Elements: ";
    for(int i = 0; i < v.get_size(); i++) {
        cout << v[i] << " "; // Reading elements
    }
    cout << endl;
    return 0;
}