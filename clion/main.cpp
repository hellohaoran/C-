#include <iostream>
#include <cstring>

int main() {
    char a[10] = "sda";
    char b[] = "";
    printf("%s\n",a);
    memset(a,0,sizeof(a));
    printf("%s\n",a);
    memset(a,100,10);
    printf("%s\n",a);
    memcpy(b,a,5);
    printf("%s",b);

}
