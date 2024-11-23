/*
    Author : Pakshal Shashikant Jain
    Date : 07/10/2023
    Program : Write a program which accept string from user and print below pattern.
    
              Input : "Marvellous"
              Output : m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Reqiured Libraries
package main
import (
	"fmt"
	"os"
	"bufio"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//function To Display Given Pattern
func Display(str *[]byte) {
	var i int = 0;
	var j int = 0;

	if str == nil {
		return;
	}

	//Printing Below Given Pattern
	fmt.Println("Printing Below Given Pattern : ");
	for i = 0;i < len(*str) - 2;i++ {
		for j = 0;j < len(*str) - 2;j++ {
			if (((*str)[j] >= 'A')&&((*str)[j] <= 'Z')) {
				(*str)[j] = (*str)[j] + 32;
			}
			fmt.Printf("%c\t",(*str)[j]);
		}
		fmt.Println();
	}
}//End of Function

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var err error = nil;

	//Creating object of bufio class To Take Input from user
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

	//Call To Display Function
	Display(&arr);
}