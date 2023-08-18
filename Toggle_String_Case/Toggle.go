/*
    Author : Pakshal Shashikant Jain 
    Date : 13/08/2023
    Program : Write a program which accept string from user and toggle the case.
              
              Input : "Marvellous Multi OS"
              Output : mARVELLOUS mULTI os
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//Function To Toggle Case
func Toggle(arr []byte) []byte {
	var i int = 0;

	//Logic To Toggle Case
	for i != len(arr) {
		if ((arr[i] >= 'A')&&(arr[i] <= 'Z')) {
			arr[i] = arr[i] + 32;
		} else if ((arr[i] >= 'a')&&(arr[i] <= 'z')) {
			arr[i] = arr[i] - 32;
		}

		i++;
	}

	return arr;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var err error = nil;
	var sret []byte ;

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Println("Enter One String");
	var bobj = bufio.NewReader(os.Stdin);

	//Reading String 
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		return;
	}

	arr = []byte(str);

	//Call To Toggle Function
	sret = Toggle(arr);

	//Priting Modified String 
	fmt.Printf("Modified String is : %s",sret);
}