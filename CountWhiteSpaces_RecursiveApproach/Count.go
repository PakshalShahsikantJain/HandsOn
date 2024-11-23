/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3  
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import (
	"fmt"
	"os"
	"bufio"
)

var icnt int = 0;
var i int = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Beahviour of Class To Count White Spaces in Entered String
func WhiteSpace(str string) int {
	var arr []rune;
	arr = []rune(str);
	
	if(i != len(arr)) {
		if(arr[i] == ' ') {
			icnt++;
		}
		i++;
		
		//Recursive Function Call To WhiteSpace
		WhiteSpace(str);
	}

	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
func main() {
	var str string = " ";
	var iret int = 0;
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter One String : ");
	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input from user
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Call To WhiteSpace
	iret = WhiteSpace(str);

	//Printing Count of White Space
	fmt.Printf("Count of White Spaces in Entered String '%s' is:%d",str,iret)
}