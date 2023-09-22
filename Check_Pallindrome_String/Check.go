/*
    Author : Pakshal Shashikant Jain 
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome    
              or not without considering its case.

              Input : “1abccBA1”
              Output : TRUE
*/

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//Function Check String is Pallindrome or not
func StrPallindrome(str *[]byte) bool {
	var first int = 0;
	var last int = 0;

	if (*str == nil) {
		return false;
	}

	for (last != len(*str) - 1) {
		last++;
	}
	
	last--;
	last--;

	//Logic To Check
	for (first <= last) {	
		if (((*str)[first] >= 'A')&&((*str)[first] <= 'Z')) {
			(*str)[first] = (*str)[first] + 32;
		} 

		if (first != last) {
			if (((*str)[last] >= 'A')&&((*str)[last] <= 'Z')) {
				(*str)[last] = (*str)[last] + 32;
			} 	
		}

		if ((*str)[first] != (*str)[last]) {
			break;
		}
		first++;
		last--;
	}

	if ((*str)[first] != (*str)[last]) {
		return false;
	} else {
		return true;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var bret bool = false;
	var str string = " ";
	var err error = nil;
	var arr []byte;

	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}
	//Creating character Array of String
	arr = []byte(str);

	//Call To StrPallindrome Function
	bret = StrPallindrome(&arr);

	if (bret == true) {
		fmt.Println("String is Pallindrome");
	} else {
		fmt.Println("String is Not Pallindrome");
	}
}