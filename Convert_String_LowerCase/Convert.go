/*
    Author : Pakshal Shashikant Jain 
    Date : 12/08/2023
    Program : Write a program which accept string from user and convert it into
              lower case.

              Input : "Marvellous Multi OS"
              Output : marvellous multi os 
*/

//Required Libraries
package main 
import (
	"fmt"
	"bufio"
	"os"
)

//Function To Convert String 
func Convert(arr []byte) []byte {
	var i int = 0;

	//Logic To Convert String 
	for i != len(arr) - 1 {
		if ((arr[i] >= 'A')&&(arr[i] <= 'Z')) {
			arr[i] = arr[i] + 32;
		}		
		
		i++;
	}

	return arr;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var sret []byte;
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

	//Converting String to array 
	arr = []byte(str);

	//Call To Convert Function
	sret = Convert(arr);

	//Printing Converted String 
 	fmt.Printf("Converted String is : %s",sret);
}