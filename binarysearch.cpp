#include<iostream>
using namespace std;
int binarysearch( int arr[], int n , int key ){
    int s = 0 ;
    int e = n ;
    while(s <= e ){
        int mid = (s+e)/2;
        if( arr[mid]==key){
            return mid;
        }
        else if ( arr[mid] > key ){
            e = mid - 1 ;
        }
        else{
            s = mid + 1 ;
        }
    }
    return -1 ;
}

int main()
{
    //Program to find the index of the key entered using binary search.

    int i , n , key ;
    cout<<"Enter size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for( i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search it's index : "<<endl;
    cin>>key;
    cout<<binarysearch(arr , n , key )<<endl;
    return 0;
}
