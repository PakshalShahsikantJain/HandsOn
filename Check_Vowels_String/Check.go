/*
    Author : Pakshal Shashikant Jain 
    Date : 09/08/2023
    Program : Write a program which accept string from user and check whether
              it contains vowels in it or not.

             Input : "marvellous"
             Output : TRUE

             Input : "Demo"
             Output : TRUE

             Input : "xyz"
             Output : FALSE 
 
*/

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//Function To Check Entered String Contains Vowels or not
func Check(arr []rune) bool {
	var i int = 0;

	//Logic To Check
	for i = 0;i < len(arr) - 1;i++ {
		if ((arr[i] >= 'A')&&(arr[i] <= 'Z')) {
			arr[i] = arr[i] + 32;
		}

		if ((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'i')||(arr[i] == 'o')||(arr[i] == 'u')) {
			break;
		}
	}

	if ((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'i')||(arr[i] == 'o')||(arr[i] == 'u')) {
		return true;
	} else {
		return false;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []rune = nil;
	var bret bool = false;
	var err error  = nil;

	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter One String To Check");
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		fmt.Println("An Error Occured");
	} 

	//Allocating Memory and Intiatializing Values to Array 
	arr = []rune(str);

	//call To Check Function
	bret = Check(arr);

	//Handeling Conditions According To Output 
	if (bret == true) {
		fmt.Println("Enter String Contains Vowels");
	} else {
		fmt.Println("Enter String Does Not Contains Vowels");
	}
}