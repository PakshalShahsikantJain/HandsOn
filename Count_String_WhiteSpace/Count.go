/*
    Author : Pakshal Shashikant Jain 
    Date : 16/08/2023
    Program : Write a program which accept string from user and count number of
              white spaces
    
              Input : "MarvellouS"
              Output : 0
    
              Input : "MarvellouS Infosystems"
              Output : 1
            
              Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar"
              Output : 5
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count White Spaces 
func StrCountWhite(arr []rune) int {
	var icnt int = 0;
	var i int = 0;

	//Logic To Count 
	for i != len(arr) {
		if (arr[i] == ' ') {
			icnt++;
		}
		i++;
	}

	return icnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []rune;
	var iret int = 0;
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	fmt.Println("Enter String You Want");
	
	//Creating object of bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input from user
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Creating Character array of String 
	arr = []rune(str);

	//Call To StrCountWhite Function
	iret = StrCountWhite(arr);

	//Printing Count Calculated
	fmt.Println("Count of White Spaces in Entered String is : ",iret);
}