#include <stdio.h>
int main() {
  long long light=0;
  while(1){
    int turn_on=0;
    scanf("%lld",&light);
    if(light==0) break;
    for(long long i = 1; i * i <= light; i++){
        if(light % i == 0) {
            turn_on++;
            if(i != light/i) {
              turn_on++;
            }
        }
    }
    if(turn_on%2==1)printf("yes\n");
    else printf("no\n");
  }
 return 0;   
}
