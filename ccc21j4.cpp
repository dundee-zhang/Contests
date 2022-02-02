#include <bits/stdc++.h>

int main() {
    std::string c = "";
    char l = ' ';
    int run = 0, seenL = 0, seenM = 0, seenS = 0;
    int count = 0;

    std::cin >> c;

    for(std::size_t i = 0; i < c.length(); i++) {
        printf("line12");
        if(l == ' ') {
            l = c.at(i);
        }
        if(i != 1 && i != 0) {
            l = c.at(i - 1);
        }
        if(l == 'M' && c.at(i) == 'L') {
            run = 1;
            break;
        }
        else if(l == 'S' && c.at(i) == 'L') {
            run = 1;
            break;
        }
        else if(l == 'S' && c.at(i) == 'M') {
            run = 1;
            break;
        }
    }

    if(run == 1) {
        for(std::size_t i = 0; i < c.length(); i++) {
            printf("line35");
            switch(c.at(i)) {
                case 'L':
                    seenL++;
                    break;
                case 'M':
                    seenM++;
                    break;
                case 'S':
                    seenS++;
                    break;
            }
        }

        if(seenL > 0) {
            int lastOrderL = 0;
            int amountL = 0;
            int skipL = 0;
            int lastLIndex = 0;

            for(std::size_t i = 0; i < (c.length() - 2); i++) {
                if(c.at(0) == 'L') {
                    if(c.at(i) == 'L' && c.at(i + 1) == 'L') {
                        lastOrderL++;
                        amountL++;
                        printf("line58");
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            }

            if(amountL == seenL) {
                skipL = 1;
            }

            while(skipL == 0) {
                lastLIndex = c.rfind("L");

                if(lastLIndex == lastOrderL){
                    break;
                }
                std::swap(c.at(lastOrderL), c.at(lastLIndex));
                lastOrderL++;
                count++;
                
            }
        }
        
    } else {
        printf("0");
    }
    printf("%d", count);
}

/*
planning to solve


first see if they are already in order

if yes:
    output 0

if not then:
    run to see if there are any remaining L after the current index
    if there are, swap the last L in the string with the current letter
    add one to count

    if no more L is found:
        run for to see if there are any M in the string after current index
        if yes:
            swap
            count++
        no:
        output count
*/