/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : “Marvellous Multi OS”
                       M
              Output : 2

              Input : “Marvellous Multi OS”
                       W
              Output : 0 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Frequency of Entered Character
func CharCount(arr []byte,ch byte) int {
	var i int = 0;
	var icnt int = 0;

	if (arr == nil) {
		return -1;
	}

	//Logic To Find
	for (i != len(arr)) {
		if (arr[i] == ch) {
			icnt = icnt + 1;
		}
		i++;
	}

	return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var ch byte= ' ';
	var str string = " ";
	var iret int = 0;
	var err error= nil;

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter String");	

	//Creating object of NewReader Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	fmt.Println("Enter Character");
	fmt.Scanf("%c",&ch);

	//Creating Character array of Entered String 
	arr = []byte(str);

	//Call To CharCount Function
	iret = CharCount(arr,ch);

	//Printing Count Calculated
	fmt.Printf("Count of Entered Character %c in Entered String is : %d",ch,iret);
}