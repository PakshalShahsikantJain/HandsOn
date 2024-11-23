/*
    Author : Pakshal Shashikant Jain 
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully. 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"os"
	"bufio"
	"strings"	
)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Create File
func CreateFile(fname string) {

	fname = strings.TrimSpace(fname);

	//Creating File 
	fd,err := os.Create(fname);
	if(err != nil) {
		fmt.Println("Unable To Creat File");
	} else {
		fmt.Println("File Successfully Created",fd);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function 
func main() {
	var fname string = " ";
	var bobj = bufio.NewReader(os.Stdin);

	var err error = nil;
	fmt.Println("Jay Ganesh.....");

	//Taking Input From User
	fmt.Println("Enter One String");
	fname,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Call Tp CreateFile Function
	CreateFile(fname);
}