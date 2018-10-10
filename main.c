#include <stdio.h>
#include <stdlib.h>

int canh1,canh2,canh3;


int nuachuvitamgiac(chuvitamgiac) {
    return (float)(canh1+canh2+canh3)/2;
}

int main() {
    printf(" moi nhap chieu dai canh thu nhat: \n");
    scanf("%d", &canh1);
    printf("moi nhap chieu dai canh thu hai: \n");
    scanf("%d", &canh2);
    printf("moi nhap chieu dai canh thu ba: \n");
    scanf("%d", &canh3);

    if ((canh1 <= 0)|(canh3 <= 0)|(canh3 <= 0)) {
        printf("do dai 1 canh tam giac khong the nho hon hoac bang 0\n");

    } else if (canh1 + canh2 == canh3) {
        printf("tong hai canh cua tam giac luon lon hon canh con lai(theo bat dang thuc tam giac)");
        exit(0);
    }
    printf(" nua chu vi cua tam giac la: %d\n", nuachuvitamgiac(canh1,canh2,canh3));
    return 0;
}