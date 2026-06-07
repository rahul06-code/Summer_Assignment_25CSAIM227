#include<iostream>
using namespace std;

int main() {
    int n1 , n2 , n , digit ;
    int currentNum;
    cout << "Enter Starting Number : ";
    cin >> n1;
    
    cout << "Enter Ending Number : ";
    cin >> n2;

    cout << "Armstrong number in the given range are : " << endl;

    currentNum = n1;

    while (currentNum <= n2) {    // to go through every Number 
        n = currentNum;
        int original_num = n;

        int result = 0;

        int countdigit = 0;
        int temp = n;
        while (temp > 0) {    // To count no of digits
            temp = temp / 10;
            countdigit++;
        }

        while(n > 0) {    // power calculation
            digit = n % 10;

            int power = 1, p = 0 ;
            while(p < countdigit) {
                power = power * digit;
                p++;
            }
            result = result + power;
            n = n / 10;

        }
        if(result == original_num && original_num > 0) {
            cout << original_num << " " ;
    }
    currentNum++;
}

return 0;

}