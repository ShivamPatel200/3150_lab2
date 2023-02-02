#include <iostream>
#include "labtwo.h"
using namespace std;

void set_up_list(int new_lst1[],int n) {
    int pos = 1;
    int minus = -1; 
    for (int i = 0; i < n; i++) {
        if (i < (n/2)) {
            new_lst1[i] = pos;
        } else {
            new_lst1[i] = minus;
        }
    }
}

void swap(int new_lst1[], int x, int y) {
    int temp = new_lst1[x];
    new_lst1[x] = new_lst1[y];
    new_lst1[y] = temp;
}

void fisher_yates(int new_lst1[],int n) {
    for(int i = n-1; i >= 0; i--) {
        int rand1 = rand() % n;
        swap(new_lst1, i, rand1);
        // int temp = new_lst1[i];
        // new_lst1[i] = new_lst1[rand1];
        // new_lst1[rand1] = temp;        
    }
}

bool non_negative_sum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
        if (sum < 0) {
            return false;
        }
    }
    if(sum >= 0) {
        return true;
    }
    return 1;
}

bool non_positive_sum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
        if (sum > 0) {
            return false;
        }
    }
    if(sum <= 0) {
        return true;
    }
    return 1;
}


