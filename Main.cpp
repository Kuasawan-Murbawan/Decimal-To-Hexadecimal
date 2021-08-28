// Author: Afiq Husyairi
// Date:  November 2020
// Input: decimal
// Output: hexadecimal

#include <iostream>

using namespace std;

int main()
{
    int decimal, digit;
    string hexadec= "";
    char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   
    cout << "Enter a decimal number: ";
    cin >> decimal ;
    
    while(decimal > 0)
    {
        digit = decimal % 16;
        hexadec = hex[digit] + hexadec;
        decimal = decimal / 16;
    }
    cout << "The hexadecimal number is : " << hexadec << endl;
    
    return 0;
}











