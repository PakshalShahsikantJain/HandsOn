/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy small
              characters of that string into another string.

              Input : "Marvellous multi OS"
              Output : "arvellous multi"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy Small Character From Entered String
func StrCpySmall(src *[]byte,dest *[]byte) {
	var i int = 0;

	//Handeling Conditions If Entered 
	if ((*src == nil)&&(*dest == nil)) {
		return;
	}

	//Logic To Copy String
	for i != len(*src) {
		if ((*src)[i] == ' ') {
			(*dest)[i] = (*src)[i];
		}

		if (((*src)[i] >= 'a')&&((*src)[i] <= 'z')) {
			(*dest)[i] = (*src)[i];
		}

		i++;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func  main() {
	var Str string = " ";
	var arr []byte;
	var brr []byte;
	var err error = nil;

	fmt.Println("Ganapati Bappa Morya...");

	//Taking Input from user
	fmt.Println("Enter One String");

	//Creating object of Bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	Str,err = bobj.ReadString('\n');

	if err != nil {
		return 
	}

	//Creating Character Array of String 
	arr = []byte(Str);
	brr = make([]byte,len(arr));

	//Call To StrCpySmall
	StrCpySmall(&arr,&brr);
	
	//Printing Copied String 
	fmt.Printf("Copied String is : %s",brr);	
}