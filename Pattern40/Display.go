/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
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
			if (((*str)[j] >= 'a')&&((*str)[j] <= 'z')) {
				(*str)[j] = (*str)[j] - 32;
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