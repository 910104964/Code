/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月11日 星期六 11时15分35秒
 ************************************************************************/

#include <stdio.h>
#define max 2000000
#include <inttypes.h>
int prime[max + 5] = {0};

int main() {
    for(int i = 2; i <= max; i++) {
        if(prime[i] == 0) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    int64_t sum = 0;
    for(int a = 1; a <= prime[0]; a++) {
       sum += prime[a]; 
    }
    printf("%"PRId64"\n", sum);
    return 0;
}
  
