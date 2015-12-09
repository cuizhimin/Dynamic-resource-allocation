//
//  main.cpp
//  Dynamic resource allocation
//
//  Created by czm on 15/12/2.
//  Copyright © 2015年 czm. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int *p;
    p=(int *)malloc(4);
    if(p==0)
        exit(0);
    *p=100;
    printf("p=%d *p=%x\n",p,*p);
    return 0;
}
