#include<iostream>
using namespace std;
int main() {
    
    int arr[] = {11,100,61,73,3,12};
    int temp,i,j;
    
    for(i=0; i<6; i++) {
        for(j=i+1; j<6; j++) {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           
        }
       
    }
    
    cout<<"Elements of array in ascending order:"<<endl;
    for(i=0; i<6; i++) {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
