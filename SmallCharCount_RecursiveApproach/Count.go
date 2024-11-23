/*
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
*/

//Required Libraries
package main
import (
	"fmt"
	"os"
	"bufio"
)

//Global Variables
var icnt int = 0;
var i int = 0;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To count Small Characters
func Small(svalue string) int {
	var arr[] byte;

	arr = []byte(svalue);

	//Logic
	if(i != len(arr)) {
		if((arr[i] >= 'a')&&(arr[i] <= 'z')) {
			icnt++;
		}
		i++;

		Small(svalue);
	}

	return icnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var iret int = 0;
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input From User
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Call To Small Function
	iret = Small(str);

	//Printing Count of Small Characters
	fmt.Printf("Count of Small Character In Entered String %s is : %d",str,iret);
}