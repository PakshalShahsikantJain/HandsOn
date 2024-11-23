/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u
                       M a r v e l l o
                       M a r v e l l
                       M a r v e l
                       M a r v e
                       M a r v
                       M a r
                       M a
                       M

              Input : "PPA"
              Output : P P A
                       P P
                       P 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//Function To Print Given Pattern
func Pattern(str *[]byte) {
	var i int = 0;
	var j int = 0;

	if (*str == nil) {
		return;
	}

	//Logic To Print Given Patter
	for i = len(*str) - 3;i >= 0;i-- {
		for j = 0;j < len(*str) - 2;j++ {
			if (i >= j) {
				fmt.Printf("%c\t",(*str)[j]);
			}
		}
		fmt.Println();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var err error = nil;
	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Println("Enter one String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Creating Character Array of Entered String
	arr = []byte(str);

	//Call To Pattern Function
	Pattern(&arr);	
}