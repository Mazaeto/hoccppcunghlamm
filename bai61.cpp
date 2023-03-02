//bài 61
#include <iostream>
using namespace std;

int main() {
int n,i=1,s=1,tam;
cin>>n;
if(n%2!=0){ // nếu n là số lẻ
while(i<=n){
   if(i%2!=0) s=s*i;
   i++;
 }
}
else { // nếu n là số chẵn
    while(i<=n){
        if(i%2==0)
        s*=i;
        i++;
    }
}
cout<<s;
return 0;
}
