/*
    Author : Pakshal Shashikant Jain 
    Date : 11/08/2023
    Program : Write a program which accept string from user and display it inn
              reverse order.

              Input : "MarvellouS"
              Output : "SuollevraM"
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
func StrRev(str []rune) {
	var i int = 0;

	//Logic To Reverse string 
	fmt.Println("Reversed String is : ");
	for i = len(str) - 1;i >= 0 ;i-- {
		fmt.Printf("%c",str[i]);
	} 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []rune;
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
	arr = []rune(str);

	//Call To StrRev Function
	StrRev(arr);
}