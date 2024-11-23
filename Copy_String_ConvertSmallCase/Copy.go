/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by converting all capital
              characters into small case.

              Input : "Marvellous Python 2"
              Output : "marvellous python 2" 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String After Converting Case into Another String
func StrCpySmall(src *[]byte,dest *[]byte) {
	var i int = 0;

	//Logic To Copy String
	for i != len(*src) {
		if (((*src)[i] >= 'A')&&((*src)[i] <= 'Z')) {
			(*src)[i] = (*src)[i] + 32;
		}

		(*dest)[i] = (*src)[i];
		i++;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var brr []byte;

	var str string;
	var err error = nil;

	//Creating object of Bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	
	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Creating Character Array of Entered String 
	arr = []byte(str);

	//Allocating Memory to Array 
	brr = make([]byte,len(str));

	//Call To StrCapCpy Function
	StrCpySmall(&arr,&brr);

	//Printing Capital Copied
	fmt.Printf("String Copied After Converting Given Case is : %s",brr);
}