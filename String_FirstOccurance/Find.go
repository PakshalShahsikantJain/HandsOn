/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 0
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

//Required Libraries
package main 
import (
	"fmt"
	"bufio"
	"os"
)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Character 
func CharFind(arr []byte,ch byte) int {
	var i int = 0;

	for i != len(arr) {
		if arr[i] == ch {
			break;
		}
		i++;
	}	

	if arr[i] == ch {
		return i;
	} else {
		return -1;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iret int = 0;
	var str string = " ";
	var arr []byte;
	var ch byte = ' ';
	var err error = nil;

	fmt.Println("Jay ganesh.....");

	//Taking input from user
	fmt.Println("Enter One String");

	//Creating object of bufio class To Take String Input from user
	var bobj = bufio.NewReader(os.Stdin);
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	arr = []byte(str);

	//Taking Character as Input from user
	fmt.Println("Enter One Character");
	fmt.Scanf("%c",&ch);

	//Call to CharFind Function
	iret = CharFind(arr,ch);

	//Printing First Occurance Found
	fmt.Printf("First Occurance of Entered Character %c is at index number : %d",ch,iret);
}