/*
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO" 
*/

///////////////////////////////////////////////////////////////////////////////////

//Required librarires
package main
import (
	"fmt"
	"bufio"
	"os"
)

////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse Each Words of Entered String
func StrWrdRev(str []byte) {
	var i int = 0;
	var j int = 0;
	var first int = 0;
	var last int = 0;
	var temp byte = ' ';

	//Logic To Reverse Each Word of String
	for (last != len(str) - 2) {
		if (str[last] == ' ') {
			for ((str[last] == ' ')&&(last != len(str) - 2)) {
				last++;
			}
			last--;
		} else {
			first = last;

			for ((str[last] != ' ')&&(last != len(str) - 3)) {
				last++;
			}

			if (str[last] == ' ') {
				last--;
			}
			i = first;
			j = last;

			for (i <= j) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;

				i++;
				j--;
			}
		}
		last++;
	}
}//End of Function

////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var err error = nil;

	//Creating object of bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		return;
	}

	//Creating Character Array of Entered String
	arr = []byte(str);

	//Call To StrWrdRev Function
	StrWrdRev(arr);

	//Printing String After Reversing Each Word
	fmt.Printf("Reversed String is : %s",arr);
}