/*  
    Author : Pakshal Shashikant Jain 
    Date : 15/08/2023
    Program : Write a program which accept string from user and display only
              digits from that string.

              Input : “marve89llous121”
              Output : 89121
              Input : “Demo”
*/

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//Function To Display Digits present in Entered String 
func StrDigits(arr []byte) {
	var i int = 0;

	//Logic To Display Digits from String 
	for i != len(arr) {

		if ((arr[i] >= '0') &&(arr[i] <= '9')) {
			fmt.Printf("%c",arr[i]);
		}
		
		i++;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var err error = nil;
	var arr = []byte{};

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter String");

	//Creating object of bufio class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);

	//Taking input from user
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	arr = []byte(str);

	//Call To StrDigits Function
	StrDigits(arr);
}
