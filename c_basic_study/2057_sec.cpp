#include <stdio.h>

int main(){
  //정수입력
  long long int n;
  scanf("%lld",&n);
  if(n==0){
    printf("NO");
    return 0;
  }
  
  //20!까지의 함수를 배열에 넣기
  long long int arr[21] = {0} , a=1;
  
  for(int i = 1; i<21; i++){
    a *= i;
    arr[i] = a;
  }
  //0! = 1
  arr[0]=1;
  
  //높은거부터 차례로 빼주기
  for(int i=21;i>=0;i--){
    if(n>=arr[i]) n -= arr[i];
  }

  //0이되면 YES 아니면 NO
  if(n==0) printf("YES");
  else printf("NO");
  
  return 0;
}
