#include<iostream>
using namespace std;

int main()
{
    //Program to find the index of key entered and if not found return -1 (approach 2).
    int i , n , key , index ;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for( i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search it's index : "<<endl;
    cin>>key;
    //Now we will initialize index to -1 , to show if the key is not found.
    index = -1 ;
    for( i = 0 ; i < n ; i++){
        if(arr[i]==key){
            index = i;
            break;
        }
    }
    if( index != -1){
        cout<<"The index for "<<key<<" is "<<index<<endl;
    }
    else{
        cout<<"The index for "<<key<<" not found."<<endl;
    }
    return 0;
}
