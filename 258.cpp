/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example:
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Solution
mod 10 te da el ultimo digito del entero. aun que no es la forma mas eficiente con un while
*/


class Solution {
public:
    int addDigits(int num) {
    	int sum = 0;
        while (num > 0){
        	sum += (num % 10);
        	num = num/10;
        }

        if(sum >= 10){
        	addDigits(sum);
        }
        else{
        	return sum;
        }
    }
};