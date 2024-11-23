/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy capital
              characters of that string into another string.
            
              Input : "Marvellous Multi OS"
              Output : "MMOS"
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

//Function To CopyCapital letters From Entered String into Another String
func StrCapCpy(src *[]byte,dest *[]byte) {
	var i int = 0;

	//Logic To Copy String
	for i != len(*src) {
		if (((*src)[i] >= 'A')&&((*src)[i] <= 'Z')) {
			(*dest)[i] = (*src)[i];
		}

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
	StrCapCpy(&arr,&brr);

	//Printing Capital Copied
	fmt.Printf("Capital Letters Copied From Entered String into Another String is : %s",brr);
}