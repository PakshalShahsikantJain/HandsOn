/*
    Author : Pakshal Shashikant Jain
    Date : 23/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strcpy() function)
              
              Input : “Marvellous Multi OS”
              Output : “Marvellous Multi OS” in another string 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy Entered String into Another String 
func StrCpyX(src *[]byte,dest *[]byte) {
	var i int = 0;

	//Logic To Copy String into Another String 
	for i != len(*src) {
		(*dest)[i] = (*src)[i];

		i++;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var brr []byte;
	var str string = " ";
	var err error = nil;

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter One String");

	//Creating object of Bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Creating character Array of Entered String 
	arr = []byte(str);
	brr = make([]byte,len(str));

	//Call To StrCpyX Function
	StrCpyX(&arr,&brr);

	//Printing Copied String 
	fmt.Printf("Second String after Copying Contents of First String is : %s",brr);
}