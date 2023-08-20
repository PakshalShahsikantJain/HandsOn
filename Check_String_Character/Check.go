/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Check whether that character is present in string or not.
              Input : "Marvellous Multi OS"
                       e
              Output : TRUE
              
              Input : "Marvellous Multi OS"
                       W
              Output : FALSE 
*/

////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function TO Check Entered Character is Present or not in String
func Check(arr []byte,ch byte) bool {
	var i int = 0;

	//Logic To Check
	for i != len(arr) - 1{
		if (arr[i] == ch) {
			break;
		}
		i++;
	}

	if (arr[i] == ch) {
		return true;
	} else {
		return false;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var str string = " ";
	var bret bool = false;
	var ch byte = ' ';
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Println("Enter One String");

	//Creatig object of bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	//Taking input from user
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Taking Character From User To Check
	fmt.Println("Enter Character");
	fmt.Scanf("%c",&ch);

	arr = []byte(str);	

	//Call TO Check Function
	bret = Check(arr,ch);

	//Handeling Condition if bret = true
	if (bret == true) {
		fmt.Printf("Entered Character %c is Present in String",ch);
	} else {    //Handeling Condition if bret = false
		fmt.Printf("Entered Character %c is not Present in String",ch);
	}
}