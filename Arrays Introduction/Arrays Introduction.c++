#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[1000] ,i,n;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=n;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
