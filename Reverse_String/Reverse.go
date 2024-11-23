/*
    Author : Pakshal Shashikant Jain 
    Date : 21/08/2023
    Program : Write a program which accept string from user reverse that string
              in place.

              Input : “abcd”
              Output : “dcba”

              Input : “abba”
              Output : “abba” 
*/

//Required Libraries
package main

import (
	"fmt"
	"bufio"
	"os"
)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse String 
func StrRev(str *[]byte) {
	var istart int = 0;
	var iend int = 0;
	var temp byte = ' ';

	//Logic To Reverse String
	for iend != len(*str) {
		iend++;
	}

	iend--;

	//Reversing The String 
	for istart < iend {
		temp = (*str)[istart] ;
		(*str)[istart] = (*str)[iend];
		(*str)[iend] = temp;

		istart++;
		iend--;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var str string = " ";
	var err error = nil;

	//Creating object of NewReader Class
	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Printf("Enter One String\n");
	str,err = bobj.ReadString('\n');

	if(err != nil) {
		fmt.Println("An Error Occured");
	}

	//Creating character of Array of String 
	arr = []byte(str);

	//Call To StrRev Function
	StrRev(&arr);

	//Printing Modifies String
	fmt.Printf("Modified String is : %s",arr);
}