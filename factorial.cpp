#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
  int t;
  scanf("%d", &t);
  int n, m=0, num;
  while(t!=0){
    scanf("%d", &n);
    num = n-1;
    int arr[200];
    
    int i=0;
    while(n!=0){
      arr[i]=n%10;
      n=n/10;
      i++;
    }
    m=i;
    
    int x;
    while(num>1){
      int temp=0;
      for(int j=0; j<m; j++){
        x=arr[j]*num + temp;
        arr[j] = x%10;
        temp = x/10;
      }
      while(temp!=0){
        arr[m]=temp%10;
        temp=temp/10;
        m++;
      }
      
      
      num--;
    }
    for(int a=m; a>0; a--){
      printf("%d", arr[a-1]);
    }
    printf("\n");
    
    t--;
  }
  
}
