/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Requried Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern
func Pattern(str *[]byte) {
	var i int = 0;
	var j int = 0;

	if (*str == nil) {
		return;
	}
	//Logic To Print Pattern
	for i = 0;i < len(*str) - 2;i++ {
		for j = 0;j < len(*str) - 2;j++ {
			fmt.Printf("%c\t",(*str)[j]);
		}
		fmt.Println();
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var err error = nil;

	//Creating object of bufio Class To Take Input from user 
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

	//Call To Pattern Function
	Pattern(&arr);
}