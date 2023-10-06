/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : 
              M
              M a
              M a r
              M a r v
              M a r v e
              M a r v e l
              M a r v e l l
              M a r v e l l o
              M a r v e l l o u
              M a r v e l l o u s

              Input : “PPA”
              Output : 
              P
              P P
              P P A 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
func Pattern(str *[]byte) {
	var i int = 0;
	var j int = 0;

	if (*str == nil) {
		return;
	}

	//Logic To Print Given Pattern
	fmt.Println("Printing Given Pattern");
	for i = 0;i < len(*str) - 2;i++ {
		for j = 0;j < len(*str) - 2;j++ {
			if (i >= j) {
				fmt.Printf("%c\t",(*str)[j]);
			}
		}
		fmt.Println();
	}
}//End of Function

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var str string = " ";
	var err error = nil;

	//Creating object of bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		return;
	}

	//Creating Character array of Entered String
	arr = []byte(str);

	//Call To Pattern Function
	Pattern(&arr);
}