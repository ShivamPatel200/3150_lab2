#include <iostream>
#include "labtwo.h"
using namespace std;


int main () {

    for (int n = 40; n <= 100; n+=10) {

        double outer_counter = 0;
        cout << "n = " << n <<endl;
        for (int i = 1000; i <= 25000; i+=2000) {
            int counter = 0;
            int well_bal = 0;
            for (int j = 0; j <= i; j++) {
                int new_lst1[2*n];
                set_up_list(new_lst1, 2*n);
                fisher_yates(new_lst1, 2*n);
                if ((non_positive_sum(new_lst1, 2*n) == false) && (non_negative_sum(new_lst1, 2*n) == false)) {
                    counter+=1;
                }
                else {
                    well_bal+=1;
                    counter+=1;
                }
            }
            double result = ((double)well_bal) / counter;
            outer_counter += result;
            cout << "Running the process " << i << " times. The success rate was " << result <<endl;
        }
        cout << "Average was: " << (outer_counter/13) <<endl;
    }
}