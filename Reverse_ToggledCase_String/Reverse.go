/*
    Author : Pakshal Shashikant Jain 
    Date : 18/09/2023
    Program : Accept sing from user and reverse the contents of that string by
              toggling the case.

              Input : "aCBdef"
              Output : "FEDcbA" 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse String After Toggling Case
func StrRevTogX(str *[]byte) {
	var first int = 0;
	var last int = 0;
	var temp byte = ' ';

	//Logic To Reverse string
	for (last != len(*str)) {
		last++;
	}

	last--;

	for (first <= last) {

		if (((*str)[first] >= 'A')&&((*str)[first] <= 'Z')) {
			(*str)[first] = (*str)[first] + 32;
		}else if (((*str)[first] >= 'a')&&((*str)[first] <= 'z')) {
			(*str)[first] = (*str)[first] - 32;
		}

		if (last != first) {
			if (((*str)[last] >= 'A')&&((*str)[last] <= 'Z')) {
				(*str)[last] = (*str)[last] + 32;
			} else if (((*str)[last] >= 'a')&&((*str)[last] <= 'z')) {
				(*str)[last] = (*str)[last] - 32;
			}				
		}

		temp = (*str)[first];
		(*str)[first] = (*str)[last];
		(*str)[last] = temp;
		first++;
		last--;
	}
}//End of Function

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var str string;
	var err error = nil;
	
	//Creating object of bufio class To Take Input from user
	var bobj =  bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter One String");

	str,err = bobj.ReadString('\n');
	if (err != nil) {
		return;
	}
	
	//Creating character Array of Entered String
	arr = make([]byte,len(str));
	arr = []byte(str);

	//Call To StrRevTogX function
	StrRevTogX(&arr);

	//Printing Reversed string
	fmt.Print("Reversed String is : ");
	fmt.Printf("%s",arr);
}