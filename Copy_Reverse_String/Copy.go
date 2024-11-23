/*
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string in reverse order.

              Input : "Marvellous Python"
              Output : "nohtyP suollevraM" 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy Entered String in Reverse Order
func StrCpyRev(src *[]byte,dest *[]byte) {
	var i int = 0;
	var j int = 0;

	if ((*src == nil)&&(*dest == nil)) {
		return;
	}

	//Logic To Copy String in Reverse String
	for i = len(*src) - 1;i > -1;i-- {
		(*dest)[j] = (*src)[i];
		j++;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var brr []byte;
	var str string = " ";
	var err error = nil;

	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh.....");

	//Creating object of Entered String
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}
	
	//Creating Character Array of Entered String 
	arr = []byte(str);
	brr = make([]byte,len(str));

	//Call To StrCpyRev Function
	StrCpyRev(&arr,&brr);

	//Printing Copied String In Reverse Order
	fmt.Printf("String Copied In Reverse Order is : %s",brr);	
}