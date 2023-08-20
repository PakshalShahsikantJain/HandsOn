/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 11
              
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////

//Function To Found LastOccrance of Entered Character
func FindLast(arr []byte,ch byte) int {
	var i int = 0;
	var ipos int = -1;

	//Logic To Find
	for i != len(arr) - 1 {
		if arr[i] == ch {
			ipos = i;
		}
		i++;
	}

	return ipos;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main(){
	var str string = " ";
	var err error = nil;
	var arr []byte;
	var ch byte = ' ';
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter One String");
	var bobj = bufio.NewReader(os.Stdin);
	
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Taking Character Input from User
	fmt.Println("Enter One Character");
	fmt.Scanf("%c",&ch);

	//Creating Character Array of Entered Strings
	arr = []byte(str);

	//Call To FindLast Function
	iret = FindLast(arr,ch);
	
	//Printing Last Occurance of Entered Character
	fmt.Printf("Last Occrance of Entered Character %c is at index number : %d",ch,iret);
}