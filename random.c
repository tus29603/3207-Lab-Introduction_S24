//
//  random.c
//  testRandonNumber
//
//  Created by Tesfaldet Haileab on 1/18/24.
// There git permission issue
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randchar() {
    char array[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' ,'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u' , 'v', 'w','x', 'y', 'z', '\0'};
    return array[rand() % 26];
}
