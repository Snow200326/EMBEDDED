#include <iostream>
using namespace std;
void getEelement(int *a,int);
// void Display(int *a, int n);
int sumOfarray(int *a,int n){
    int sum = 0;
    for(int i=0;i<n;i++){   
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of array :- "<<endl;
    cin>>n;
    int arr[n];
    getEelement(arr,n);
    // Display(arr,n);
    int sum = sumOfarray(arr,n);
    cout<<"The sum of the array element is :- "<< sum;


}
void getEelement(int *a,int n)
{
    cout<<"Enter the Numbers:-"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

// void Display(int *a, int n){
//     int i=0;
//     while (i<n)
//     {
//         /* code */
//         cout<<a[i]<<endl;
//         i++;
//     }
    
// }