/*
    Author : Pakshal Shashikant Jain 
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully. 
*/

//Required Libraries
package main
import (
	"fmt"
	"os"
	"bufio"
	"strings"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Open File In Read Mode
func FileIO(name string) {

	//Logic To Open File
	name = strings.TrimSpace(name);

	file,err := os.Open(name);

	if(err != nil) {
		fmt.Println("Unable To Open File",err);
	} else {
		fmt.Printf("File Successfully Opened",file);
	}
}	

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var fname string = "";
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input from user
	fmt.Println("Enter One String");
	fname,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Call To FileIO Function
	FileIO(fname);
}