#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cin.get();
char arr[100][100];
for(int i=0;i<n;i++){
    cin.getline(arr[i],100);
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        // compare arr[j] and arr[j+1]
        int k=0;
        while((arr[j][k]==arr[j+1][k]) && arr[j][k]!='\0'){
            k++;
        }
        if(arr[j][k]>arr[j+1][k]){
            // swap
            char temp[100];
            // copy arr[j] in temp
             for(k=0;arr[j][k]!='\0';k++){
                temp[k] = arr[j][k];
             }
             temp[k] = '\0';

             // copy arr[j+1] to arr[j]
             for(k=0;arr[j+1][k]!='\0';k++){
                arr[j][k] = arr[j+1][k];
             }
             arr[j][k] = '\0';
             // copy temp to arr[j+1]
             for(k=0;temp[k]!='\0';k++){
                arr[j+1][k] = temp[k];
             }
             arr[j+1][k] = '\0';
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
