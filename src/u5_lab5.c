// W5-U5: Loops - Lab exercises
// --> Exercise 5: Write a program that request an integer number in
// the range [2, 100], reads all of them in an array of doubles and
// displays the smallest and the greatest one previously entered.
//
// The following is an example of execution:
//
// ? Enter an integer number [2, 100]: 5
// ? Insert number 1 of 5: -2.4
// ? Insert number 2 of 5: -17.3
// ? Insert number 3 of 5: 4.3
// ? Insert number 4 of 5: 23.1
// ? Insert number 5 of 5: 3.4
//
// ==> The smallest value is the 1: -17.3
// ==> The greatest value is the 4: 23.1

#include <stdio.h>

#define MIN 2
#define MAX 100

int main()
{
    int num_range, iter = 0;

    do {
        printf("\n\033[1m\033[32m?\033[37m Enter a integer number [%u, %u]\033[0m ", MIN, MAX);
        scanf("%d", &num_range);

        if (num_range < MIN || num_range > MAX)
            printf("\n\033[1m\033[31m==>\033[0m The selected integer is not in the interval.\n\n");
    } while (num_range < MIN || num_range > MAX);

    double numbers[num_range];
    double ordered_nums[num_range];

    printf("\n");
    while (iter < num_range) {
        printf("\033[1m\033[32m?\033[37m Insert number %d of %d\033[0m ", iter + 1, num_range);
        scanf("%lf", &numbers[iter]);
        iter++;
    }

    int i = 0, smallest_index, greatest_index;
    double smallest = numbers[0], greatest = numbers[num_range - 1];
    while (i < num_range) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            smallest_index = i + 1;
        }

        if (numbers[i] > greatest) {
            greatest = numbers[i];
            greatest_index = i + 1;
        }

        i++;
    }

    printf("\n\033[1m\033[32m==>\033[0m The smallest value is the %d: %.1lf", smallest_index, smallest);
    printf("\n\033[1m\033[32m==>\033[0m The greatest value is the %d: %.1lf", greatest_index, greatest);

    /*
    int i  = 0;
    int j = i + 1;
    double item;
    while (i < num_range) {
        while (j < num_range) {
            if (numbers[i] > numbers[j]) {
                item = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = item;
            }

            j++;
        }

        i++;
    }
    */

    // Order a set of numbers algorithm
    /*
    iter = 0;
    double smallest_value;
    int smallest_value_pos, siter = 0;

    while (iter < num_range - 1) {
        if (numbers[iter + 1] <= numbers[0]) {
            printf("\nIter %d. Position %d (%.2lf) <= Position %d (%.2lf)", iter, iter + 1, numbers[iter + 1], iter, numbers[iter]);
            smallest_value = numbers[iter + 1];
            smallest_value_pos = iter + 1;

            while (siter < smallest_value_pos || siter + 1 < num_range) {
                printf("\nIter in set %d: Position %d (%.2lf --> %.2lf)", siter, numbers[siter], numbers[siter + 1]);
                numbers[siter + 1] = numbers[siter];
                siter++;
            }

            numbers[0] = smallest_value;
            siter = 0;
            while (siter < num_range) {
                printf("\nIter %d over rearraged set: Position %d: %.2lf", siter, siter, numbers[siter]);
                siter++;
            }
        }

        iter++;
    }
    */

    //iter = 0;
    //int iter2 = 0;
    // For each of the elements check if it is lesser or equal to
    // the first element. Then, move every element one position
    // and place the selected element in the first position.
    //while (iter < num_range) {
    //    if (numbers[iter] <= numbers[0]) {
    //        // Move every element to the next position
    //        while (iter2 < num_range && iter2 + 1 < num_range) {
    //            ordered_nums[iter2 + 1] = numbers[iter2];
    //            iter2++;
    //        }
    //        printf("\nStep %d: %.2lf is lesser or equal to %.2lf. Reordering...", iter, numbers[iter], numbers[0]);
     //       ordered_nums[0] = numbers[iter];
            //printf("\nFirst item: %lf", ordered_nums[0]);
     //   } else {
     //       printf("\nStep %d: %.2lf is larger than %.2lf. Next iteration...", iter, numbers[iter], numbers[0]);
      //  }

      //  iter++;
    // }

    /*
    iter = 0;
    while (iter < num_range) {
        printf("\n%lf", numbers[iter]);
        iter++;
    }
    */

    printf("\n\n");
    return 0;
}
