//
//  main.c
//  qqqq
//
//  Created by 20161104586 on 17/6/22.
//  Copyright © 2017年 马德辉. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
        FILE *fr;
        char sr1[66];
        char sr2[66];
        char lat[9];
        int i;
        fr=fopen("//Users//a20161104586//Desktop//GPS170510.log","r+");
        fscanf(fr,"%s%s",sr1,sr2);
        printf("结果：%s\n%s\n",sr1,sr2);
        for(i=0;i<8;i++);
        lat[i]=sr1[i+16];
        lat[8]='\0';
        printf("纬度:%s\n",lat);
        fclose(fr);
        return 0;
        
}
