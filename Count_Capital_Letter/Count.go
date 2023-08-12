/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Write a program which accept string from user and count number of
              capital characters.

              Input : “Marvellous Multi OS”
              Output : 4 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"bufio"
	"fmt"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Capital Letters
func Count(str string) int {
	var arr []rune;
	var i int = 0;
	var icnt int = 0;

	arr = []rune(str);

	//Logic To Count 
	for i = 0;i < len(arr);i++ {
		if ((arr[i] >= 'A')&&(arr[i] <= 'Z')) {
			icnt = icnt + 1;
		} 
	}

	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var iret int = 0;

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user 
	fmt.Println("Enter String");
	var bobj = bufio.NewReader(os.Stdin);
	str, err := bobj.ReadString('\n');

	if err != nil {
		fmt.Println("Error Occured");
	}

	//Call To Count Function
	iret = Count(str);

	//Printing Count Calculated
	fmt.Printf("Count of Capital Letter is : %d",iret);
}