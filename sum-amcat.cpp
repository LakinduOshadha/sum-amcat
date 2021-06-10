// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

long int amcat(int n){
    int x;
    long prod=1,total=0;
    if(n==1){
        return 1;
    } else {
        long total = 1;
        x = ((n-1)*n)/2;
        for(int j=x+1;j<=(x+n);j++) {
            total =total* j;
        }
        return total + amcat(n-1);
    }
}

int main() {
    int n;
    cout<<"Enter the number of occurrence: "; cin>>n;
    cout<<"Sum of the AMCAT series: "<<amcat(n)<<endl;
    return 0;
}

